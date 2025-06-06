/*
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 2.0.2
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.spoonacular.client.model;

import java.util.Objects;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.spoonacular.client.model.GenerateMealPlan200ResponseNutrients;
import com.spoonacular.client.model.GetSimilarRecipes200ResponseInner;
import java.io.IOException;
import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.Set;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonArray;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.TypeAdapterFactory;
import com.google.gson.reflect.TypeToken;
import com.google.gson.TypeAdapter;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import java.io.IOException;

import java.lang.reflect.Type;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

import com.spoonacular.client.JSON;

/**
 * 
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", comments = "Generator version: 7.8.0-SNAPSHOT")
public class GenerateMealPlan200Response {
  public static final String SERIALIZED_NAME_MEALS = "meals";
  @SerializedName(SERIALIZED_NAME_MEALS)
  private Set<GetSimilarRecipes200ResponseInner> meals = new LinkedHashSet<>();

  public static final String SERIALIZED_NAME_NUTRIENTS = "nutrients";
  @SerializedName(SERIALIZED_NAME_NUTRIENTS)
  private GenerateMealPlan200ResponseNutrients nutrients;

  public GenerateMealPlan200Response() {
  }

  public GenerateMealPlan200Response meals(Set<GetSimilarRecipes200ResponseInner> meals) {
    this.meals = meals;
    return this;
  }

  public GenerateMealPlan200Response addMealsItem(GetSimilarRecipes200ResponseInner mealsItem) {
    if (this.meals == null) {
      this.meals = new LinkedHashSet<>();
    }
    this.meals.add(mealsItem);
    return this;
  }

  /**
   * Get meals
   * @return meals
   */
  @javax.annotation.Nonnull
  public Set<GetSimilarRecipes200ResponseInner> getMeals() {
    return meals;
  }

  public void setMeals(Set<GetSimilarRecipes200ResponseInner> meals) {
    this.meals = meals;
  }


  public GenerateMealPlan200Response nutrients(GenerateMealPlan200ResponseNutrients nutrients) {
    this.nutrients = nutrients;
    return this;
  }

  /**
   * Get nutrients
   * @return nutrients
   */
  @javax.annotation.Nonnull
  public GenerateMealPlan200ResponseNutrients getNutrients() {
    return nutrients;
  }

  public void setNutrients(GenerateMealPlan200ResponseNutrients nutrients) {
    this.nutrients = nutrients;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GenerateMealPlan200Response generateMealPlan200Response = (GenerateMealPlan200Response) o;
    return Objects.equals(this.meals, generateMealPlan200Response.meals) &&
        Objects.equals(this.nutrients, generateMealPlan200Response.nutrients);
  }

  @Override
  public int hashCode() {
    return Objects.hash(meals, nutrients);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GenerateMealPlan200Response {\n");
    sb.append("    meals: ").append(toIndentedString(meals)).append("\n");
    sb.append("    nutrients: ").append(toIndentedString(nutrients)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }


  public static HashSet<String> openapiFields;
  public static HashSet<String> openapiRequiredFields;

  static {
    // a set of all properties/fields (JSON key names)
    openapiFields = new HashSet<String>();
    openapiFields.add("meals");
    openapiFields.add("nutrients");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("meals");
    openapiRequiredFields.add("nutrients");
  }

  /**
   * Validates the JSON Element and throws an exception if issues found
   *
   * @param jsonElement JSON Element
   * @throws IOException if the JSON Element is invalid with respect to GenerateMealPlan200Response
   */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!GenerateMealPlan200Response.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in GenerateMealPlan200Response is not found in the empty JSON string", GenerateMealPlan200Response.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!GenerateMealPlan200Response.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `GenerateMealPlan200Response` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : GenerateMealPlan200Response.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      // ensure the json data is an array
      if (!jsonObj.get("meals").isJsonArray()) {
        throw new IllegalArgumentException(String.format("Expected the field `meals` to be an array in the JSON string but got `%s`", jsonObj.get("meals").toString()));
      }

      JsonArray jsonArraymeals = jsonObj.getAsJsonArray("meals");
      // validate the required field `meals` (array)
      for (int i = 0; i < jsonArraymeals.size(); i++) {
        GetSimilarRecipes200ResponseInner.validateJsonElement(jsonArraymeals.get(i));
      };
      // validate the required field `nutrients`
      GenerateMealPlan200ResponseNutrients.validateJsonElement(jsonObj.get("nutrients"));
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!GenerateMealPlan200Response.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'GenerateMealPlan200Response' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<GenerateMealPlan200Response> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(GenerateMealPlan200Response.class));

       return (TypeAdapter<T>) new TypeAdapter<GenerateMealPlan200Response>() {
           @Override
           public void write(JsonWriter out, GenerateMealPlan200Response value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public GenerateMealPlan200Response read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

  /**
   * Create an instance of GenerateMealPlan200Response given an JSON string
   *
   * @param jsonString JSON string
   * @return An instance of GenerateMealPlan200Response
   * @throws IOException if the JSON string is invalid with respect to GenerateMealPlan200Response
   */
  public static GenerateMealPlan200Response fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, GenerateMealPlan200Response.class);
  }

  /**
   * Convert an instance of GenerateMealPlan200Response to an JSON string
   *
   * @return JSON string
   */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

