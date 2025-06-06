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
    /// TasteInformation
    /// </summary>
    [DataContract(Name = "TasteInformation")]
    public partial class TasteInformation : IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="TasteInformation" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected TasteInformation() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="TasteInformation" /> class.
        /// </summary>
        /// <param name="sweetness">sweetness (required).</param>
        /// <param name="saltiness">saltiness (required).</param>
        /// <param name="sourness">sourness (required).</param>
        /// <param name="bitterness">bitterness (required).</param>
        /// <param name="savoriness">savoriness (required).</param>
        /// <param name="fattiness">fattiness (required).</param>
        /// <param name="spiciness">spiciness (required).</param>
        public TasteInformation(decimal sweetness = default(decimal), decimal saltiness = default(decimal), decimal sourness = default(decimal), decimal bitterness = default(decimal), decimal savoriness = default(decimal), decimal fattiness = default(decimal), decimal spiciness = default(decimal))
        {
            this.Sweetness = sweetness;
            this.Saltiness = saltiness;
            this.Sourness = sourness;
            this.Bitterness = bitterness;
            this.Savoriness = savoriness;
            this.Fattiness = fattiness;
            this.Spiciness = spiciness;
        }

        /// <summary>
        /// Gets or Sets Sweetness
        /// </summary>
        [DataMember(Name = "sweetness", IsRequired = true, EmitDefaultValue = true)]
        public decimal Sweetness { get; set; }

        /// <summary>
        /// Gets or Sets Saltiness
        /// </summary>
        [DataMember(Name = "saltiness", IsRequired = true, EmitDefaultValue = true)]
        public decimal Saltiness { get; set; }

        /// <summary>
        /// Gets or Sets Sourness
        /// </summary>
        [DataMember(Name = "sourness", IsRequired = true, EmitDefaultValue = true)]
        public decimal Sourness { get; set; }

        /// <summary>
        /// Gets or Sets Bitterness
        /// </summary>
        [DataMember(Name = "bitterness", IsRequired = true, EmitDefaultValue = true)]
        public decimal Bitterness { get; set; }

        /// <summary>
        /// Gets or Sets Savoriness
        /// </summary>
        [DataMember(Name = "savoriness", IsRequired = true, EmitDefaultValue = true)]
        public decimal Savoriness { get; set; }

        /// <summary>
        /// Gets or Sets Fattiness
        /// </summary>
        [DataMember(Name = "fattiness", IsRequired = true, EmitDefaultValue = true)]
        public decimal Fattiness { get; set; }

        /// <summary>
        /// Gets or Sets Spiciness
        /// </summary>
        [DataMember(Name = "spiciness", IsRequired = true, EmitDefaultValue = true)]
        public decimal Spiciness { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("class TasteInformation {\n");
            sb.Append("  Sweetness: ").Append(Sweetness).Append("\n");
            sb.Append("  Saltiness: ").Append(Saltiness).Append("\n");
            sb.Append("  Sourness: ").Append(Sourness).Append("\n");
            sb.Append("  Bitterness: ").Append(Bitterness).Append("\n");
            sb.Append("  Savoriness: ").Append(Savoriness).Append("\n");
            sb.Append("  Fattiness: ").Append(Fattiness).Append("\n");
            sb.Append("  Spiciness: ").Append(Spiciness).Append("\n");
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
            yield break;
        }
    }

}
