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
import com.spoonacular.client.model.GuessNutritionByDishName200ResponseCaloriesConfidenceRange95Percent;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.Arrays;

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
 * GuessNutritionByDishName200ResponseCalories
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", comments = "Generator version: 7.8.0-SNAPSHOT")
public class GuessNutritionByDishName200ResponseCalories {
  public static final String SERIALIZED_NAME_CONFIDENCE_RANGE95_PERCENT = "confidenceRange95Percent";
  @SerializedName(SERIALIZED_NAME_CONFIDENCE_RANGE95_PERCENT)
  private GuessNutritionByDishName200ResponseCaloriesConfidenceRange95Percent confidenceRange95Percent;

  public static final String SERIALIZED_NAME_STANDARD_DEVIATION = "standardDeviation";
  @SerializedName(SERIALIZED_NAME_STANDARD_DEVIATION)
  private BigDecimal standardDeviation;

  public static final String SERIALIZED_NAME_UNIT = "unit";
  @SerializedName(SERIALIZED_NAME_UNIT)
  private String unit;

  public static final String SERIALIZED_NAME_VALUE = "value";
  @SerializedName(SERIALIZED_NAME_VALUE)
  private BigDecimal value;

  public GuessNutritionByDishName200ResponseCalories() {
  }

  public GuessNutritionByDishName200ResponseCalories confidenceRange95Percent(GuessNutritionByDishName200ResponseCaloriesConfidenceRange95Percent confidenceRange95Percent) {
    this.confidenceRange95Percent = confidenceRange95Percent;
    return this;
  }

  /**
   * Get confidenceRange95Percent
   * @return confidenceRange95Percent
   */
  @javax.annotation.Nonnull
  public GuessNutritionByDishName200ResponseCaloriesConfidenceRange95Percent getConfidenceRange95Percent() {
    return confidenceRange95Percent;
  }

  public void setConfidenceRange95Percent(GuessNutritionByDishName200ResponseCaloriesConfidenceRange95Percent confidenceRange95Percent) {
    this.confidenceRange95Percent = confidenceRange95Percent;
  }


  public GuessNutritionByDishName200ResponseCalories standardDeviation(BigDecimal standardDeviation) {
    this.standardDeviation = standardDeviation;
    return this;
  }

  /**
   * Get standardDeviation
   * @return standardDeviation
   */
  @javax.annotation.Nonnull
  public BigDecimal getStandardDeviation() {
    return standardDeviation;
  }

  public void setStandardDeviation(BigDecimal standardDeviation) {
    this.standardDeviation = standardDeviation;
  }


  public GuessNutritionByDishName200ResponseCalories unit(String unit) {
    this.unit = unit;
    return this;
  }

  /**
   * Get unit
   * @return unit
   */
  @javax.annotation.Nonnull
  public String getUnit() {
    return unit;
  }

  public void setUnit(String unit) {
    this.unit = unit;
  }


  public GuessNutritionByDishName200ResponseCalories value(BigDecimal value) {
    this.value = value;
    return this;
  }

  /**
   * Get value
   * @return value
   */
  @javax.annotation.Nonnull
  public BigDecimal getValue() {
    return value;
  }

  public void setValue(BigDecimal value) {
    this.value = value;
  }



  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GuessNutritionByDishName200ResponseCalories guessNutritionByDishName200ResponseCalories = (GuessNutritionByDishName200ResponseCalories) o;
    return Objects.equals(this.confidenceRange95Percent, guessNutritionByDishName200ResponseCalories.confidenceRange95Percent) &&
        Objects.equals(this.standardDeviation, guessNutritionByDishName200ResponseCalories.standardDeviation) &&
        Objects.equals(this.unit, guessNutritionByDishName200ResponseCalories.unit) &&
        Objects.equals(this.value, guessNutritionByDishName200ResponseCalories.value);
  }

  @Override
  public int hashCode() {
    return Objects.hash(confidenceRange95Percent, standardDeviation, unit, value);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GuessNutritionByDishName200ResponseCalories {\n");
    sb.append("    confidenceRange95Percent: ").append(toIndentedString(confidenceRange95Percent)).append("\n");
    sb.append("    standardDeviation: ").append(toIndentedString(standardDeviation)).append("\n");
    sb.append("    unit: ").append(toIndentedString(unit)).append("\n");
    sb.append("    value: ").append(toIndentedString(value)).append("\n");
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
    openapiFields.add("confidenceRange95Percent");
    openapiFields.add("standardDeviation");
    openapiFields.add("unit");
    openapiFields.add("value");

    // a set of required properties/fields (JSON key names)
    openapiRequiredFields = new HashSet<String>();
    openapiRequiredFields.add("confidenceRange95Percent");
    openapiRequiredFields.add("standardDeviation");
    openapiRequiredFields.add("unit");
    openapiRequiredFields.add("value");
  }

  /**
   * Validates the JSON Element and throws an exception if issues found
   *
   * @param jsonElement JSON Element
   * @throws IOException if the JSON Element is invalid with respect to GuessNutritionByDishName200ResponseCalories
   */
  public static void validateJsonElement(JsonElement jsonElement) throws IOException {
      if (jsonElement == null) {
        if (!GuessNutritionByDishName200ResponseCalories.openapiRequiredFields.isEmpty()) { // has required fields but JSON element is null
          throw new IllegalArgumentException(String.format("The required field(s) %s in GuessNutritionByDishName200ResponseCalories is not found in the empty JSON string", GuessNutritionByDishName200ResponseCalories.openapiRequiredFields.toString()));
        }
      }

      Set<Map.Entry<String, JsonElement>> entries = jsonElement.getAsJsonObject().entrySet();
      // check to see if the JSON string contains additional fields
      for (Map.Entry<String, JsonElement> entry : entries) {
        if (!GuessNutritionByDishName200ResponseCalories.openapiFields.contains(entry.getKey())) {
          throw new IllegalArgumentException(String.format("The field `%s` in the JSON string is not defined in the `GuessNutritionByDishName200ResponseCalories` properties. JSON: %s", entry.getKey(), jsonElement.toString()));
        }
      }

      // check to make sure all required properties/fields are present in the JSON string
      for (String requiredField : GuessNutritionByDishName200ResponseCalories.openapiRequiredFields) {
        if (jsonElement.getAsJsonObject().get(requiredField) == null) {
          throw new IllegalArgumentException(String.format("The required field `%s` is not found in the JSON string: %s", requiredField, jsonElement.toString()));
        }
      }
        JsonObject jsonObj = jsonElement.getAsJsonObject();
      // validate the required field `confidenceRange95Percent`
      GuessNutritionByDishName200ResponseCaloriesConfidenceRange95Percent.validateJsonElement(jsonObj.get("confidenceRange95Percent"));
      if (!jsonObj.get("unit").isJsonPrimitive()) {
        throw new IllegalArgumentException(String.format("Expected the field `unit` to be a primitive type in the JSON string but got `%s`", jsonObj.get("unit").toString()));
      }
  }

  public static class CustomTypeAdapterFactory implements TypeAdapterFactory {
    @SuppressWarnings("unchecked")
    @Override
    public <T> TypeAdapter<T> create(Gson gson, TypeToken<T> type) {
       if (!GuessNutritionByDishName200ResponseCalories.class.isAssignableFrom(type.getRawType())) {
         return null; // this class only serializes 'GuessNutritionByDishName200ResponseCalories' and its subtypes
       }
       final TypeAdapter<JsonElement> elementAdapter = gson.getAdapter(JsonElement.class);
       final TypeAdapter<GuessNutritionByDishName200ResponseCalories> thisAdapter
                        = gson.getDelegateAdapter(this, TypeToken.get(GuessNutritionByDishName200ResponseCalories.class));

       return (TypeAdapter<T>) new TypeAdapter<GuessNutritionByDishName200ResponseCalories>() {
           @Override
           public void write(JsonWriter out, GuessNutritionByDishName200ResponseCalories value) throws IOException {
             JsonObject obj = thisAdapter.toJsonTree(value).getAsJsonObject();
             elementAdapter.write(out, obj);
           }

           @Override
           public GuessNutritionByDishName200ResponseCalories read(JsonReader in) throws IOException {
             JsonElement jsonElement = elementAdapter.read(in);
             validateJsonElement(jsonElement);
             return thisAdapter.fromJsonTree(jsonElement);
           }

       }.nullSafe();
    }
  }

  /**
   * Create an instance of GuessNutritionByDishName200ResponseCalories given an JSON string
   *
   * @param jsonString JSON string
   * @return An instance of GuessNutritionByDishName200ResponseCalories
   * @throws IOException if the JSON string is invalid with respect to GuessNutritionByDishName200ResponseCalories
   */
  public static GuessNutritionByDishName200ResponseCalories fromJson(String jsonString) throws IOException {
    return JSON.getGson().fromJson(jsonString, GuessNutritionByDishName200ResponseCalories.class);
  }

  /**
   * Convert an instance of GuessNutritionByDishName200ResponseCalories to an JSON string
   *
   * @return JSON string
   */
  public String toJson() {
    return JSON.getGson().toJson(this);
  }
}

