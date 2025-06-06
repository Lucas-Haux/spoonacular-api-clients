/**
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

import com.spoonacular.client.model.MenuItemServings;
import com.spoonacular.client.model.SearchGroceryProductsByUPC200ResponseNutrition;
import java.math.BigDecimal;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

/**
 * 
 **/
@ApiModel(description = "")
public class MenuItem {
  
  @SerializedName("id")
  private Integer id = null;
  @SerializedName("title")
  private String title = null;
  @SerializedName("restaurantChain")
  private String restaurantChain = null;
  @SerializedName("nutrition")
  private SearchGroceryProductsByUPC200ResponseNutrition nutrition = null;
  @SerializedName("badges")
  private List<String> badges = null;
  @SerializedName("breadcrumbs")
  private List<String> breadcrumbs = null;
  @SerializedName("generatedText")
  private String generatedText = null;
  @SerializedName("imageType")
  private String imageType = null;
  @SerializedName("likes")
  private Integer likes = null;
  @SerializedName("servings")
  private MenuItemServings servings = null;
  @SerializedName("price")
  private BigDecimal price = null;
  @SerializedName("spoonacularScore")
  private BigDecimal spoonacularScore = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Integer getId() {
    return id;
  }
  public void setId(Integer id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getRestaurantChain() {
    return restaurantChain;
  }
  public void setRestaurantChain(String restaurantChain) {
    this.restaurantChain = restaurantChain;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public SearchGroceryProductsByUPC200ResponseNutrition getNutrition() {
    return nutrition;
  }
  public void setNutrition(SearchGroceryProductsByUPC200ResponseNutrition nutrition) {
    this.nutrition = nutrition;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getBadges() {
    return badges;
  }
  public void setBadges(List<String> badges) {
    this.badges = badges;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getBreadcrumbs() {
    return breadcrumbs;
  }
  public void setBreadcrumbs(List<String> breadcrumbs) {
    this.breadcrumbs = breadcrumbs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getGeneratedText() {
    return generatedText;
  }
  public void setGeneratedText(String generatedText) {
    this.generatedText = generatedText;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getImageType() {
    return imageType;
  }
  public void setImageType(String imageType) {
    this.imageType = imageType;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getLikes() {
    return likes;
  }
  public void setLikes(Integer likes) {
    this.likes = likes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public MenuItemServings getServings() {
    return servings;
  }
  public void setServings(MenuItemServings servings) {
    this.servings = servings;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getPrice() {
    return price;
  }
  public void setPrice(BigDecimal price) {
    this.price = price;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getSpoonacularScore() {
    return spoonacularScore;
  }
  public void setSpoonacularScore(BigDecimal spoonacularScore) {
    this.spoonacularScore = spoonacularScore;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MenuItem menuItem = (MenuItem) o;
    return (this.id == null ? menuItem.id == null : this.id.equals(menuItem.id)) &&
        (this.title == null ? menuItem.title == null : this.title.equals(menuItem.title)) &&
        (this.restaurantChain == null ? menuItem.restaurantChain == null : this.restaurantChain.equals(menuItem.restaurantChain)) &&
        (this.nutrition == null ? menuItem.nutrition == null : this.nutrition.equals(menuItem.nutrition)) &&
        (this.badges == null ? menuItem.badges == null : this.badges.equals(menuItem.badges)) &&
        (this.breadcrumbs == null ? menuItem.breadcrumbs == null : this.breadcrumbs.equals(menuItem.breadcrumbs)) &&
        (this.generatedText == null ? menuItem.generatedText == null : this.generatedText.equals(menuItem.generatedText)) &&
        (this.imageType == null ? menuItem.imageType == null : this.imageType.equals(menuItem.imageType)) &&
        (this.likes == null ? menuItem.likes == null : this.likes.equals(menuItem.likes)) &&
        (this.servings == null ? menuItem.servings == null : this.servings.equals(menuItem.servings)) &&
        (this.price == null ? menuItem.price == null : this.price.equals(menuItem.price)) &&
        (this.spoonacularScore == null ? menuItem.spoonacularScore == null : this.spoonacularScore.equals(menuItem.spoonacularScore));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.title == null ? 0: this.title.hashCode());
    result = 31 * result + (this.restaurantChain == null ? 0: this.restaurantChain.hashCode());
    result = 31 * result + (this.nutrition == null ? 0: this.nutrition.hashCode());
    result = 31 * result + (this.badges == null ? 0: this.badges.hashCode());
    result = 31 * result + (this.breadcrumbs == null ? 0: this.breadcrumbs.hashCode());
    result = 31 * result + (this.generatedText == null ? 0: this.generatedText.hashCode());
    result = 31 * result + (this.imageType == null ? 0: this.imageType.hashCode());
    result = 31 * result + (this.likes == null ? 0: this.likes.hashCode());
    result = 31 * result + (this.servings == null ? 0: this.servings.hashCode());
    result = 31 * result + (this.price == null ? 0: this.price.hashCode());
    result = 31 * result + (this.spoonacularScore == null ? 0: this.spoonacularScore.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class MenuItem {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  restaurantChain: ").append(restaurantChain).append("\n");
    sb.append("  nutrition: ").append(nutrition).append("\n");
    sb.append("  badges: ").append(badges).append("\n");
    sb.append("  breadcrumbs: ").append(breadcrumbs).append("\n");
    sb.append("  generatedText: ").append(generatedText).append("\n");
    sb.append("  imageType: ").append(imageType).append("\n");
    sb.append("  likes: ").append(likes).append("\n");
    sb.append("  servings: ").append(servings).append("\n");
    sb.append("  price: ").append(price).append("\n");
    sb.append("  spoonacularScore: ").append(spoonacularScore).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
