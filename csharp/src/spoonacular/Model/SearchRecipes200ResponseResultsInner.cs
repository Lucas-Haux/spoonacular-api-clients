/*
 * spoonacular API
 *
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 2.0.2
 * Contact: mail@spoonacular.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.IO;
using System.Runtime.Serialization;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using Newtonsoft.Json.Linq;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = spoonacular.Client.OpenAPIDateConverter;

namespace spoonacular.Model
{
    /// <summary>
    /// SearchRecipes200ResponseResultsInner
    /// </summary>
    [DataContract(Name = "searchRecipes_200_response_results_inner")]
    public partial class SearchRecipes200ResponseResultsInner : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="SearchRecipes200ResponseResultsInner" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected SearchRecipes200ResponseResultsInner() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="SearchRecipes200ResponseResultsInner" /> class.
        /// </summary>
        /// <param name="id">id (required).</param>
        /// <param name="title">title (required).</param>
        /// <param name="image">image (required).</param>
        /// <param name="imageType">imageType (required).</param>
        public SearchRecipes200ResponseResultsInner(int id = default(int), string title = default(string), string image = default(string), string imageType = default(string))
        {
            this.Id = id;
            // to ensure "title" is required (not null)
            if (title == null)
            {
                throw new ArgumentNullException("title is a required property for SearchRecipes200ResponseResultsInner and cannot be null");
            }
            this.Title = title;
            // to ensure "image" is required (not null)
            if (image == null)
            {
                throw new ArgumentNullException("image is a required property for SearchRecipes200ResponseResultsInner and cannot be null");
            }
            this.Image = image;
            // to ensure "imageType" is required (not null)
            if (imageType == null)
            {
                throw new ArgumentNullException("imageType is a required property for SearchRecipes200ResponseResultsInner and cannot be null");
            }
            this.ImageType = imageType;
        }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name = "id", IsRequired = true, EmitDefaultValue = true)]
        public int Id { get; set; }

        /// <summary>
        /// Gets or Sets Title
        /// </summary>
        [DataMember(Name = "title", IsRequired = true, EmitDefaultValue = true)]
        public string Title { get; set; }

        /// <summary>
        /// Gets or Sets Image
        /// </summary>
        [DataMember(Name = "image", IsRequired = true, EmitDefaultValue = true)]
        public string Image { get; set; }

        /// <summary>
        /// Gets or Sets ImageType
        /// </summary>
        [DataMember(Name = "imageType", IsRequired = true, EmitDefaultValue = true)]
        public string ImageType { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class SearchRecipes200ResponseResultsInner {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Image: ").Append(Image).Append("\n");
            sb.Append("  ImageType: ").Append(ImageType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return Newtonsoft.Json.JsonConvert.SerializeObject(this, Newtonsoft.Json.Formatting.Indented);
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            // Title (string) minLength
            if (this.Title != null && this.Title.Length < 1)
            {
                yield return new ValidationResult("Invalid value for Title, length must be greater than 1.", new [] { "Title" });
            }

            // Image (string) minLength
            if (this.Image != null && this.Image.Length < 1)
            {
                yield return new ValidationResult("Invalid value for Image, length must be greater than 1.", new [] { "Image" });
            }

            // ImageType (string) minLength
            if (this.ImageType != null && this.ImageType.Length < 1)
            {
                yield return new ValidationResult("Invalid value for ImageType, length must be greater than 1.", new [] { "ImageType" });
            }

            yield break;
        }
    }

}
