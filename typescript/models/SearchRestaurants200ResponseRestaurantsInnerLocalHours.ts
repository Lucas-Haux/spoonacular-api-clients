/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what\'s in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * OpenAPI spec version: 2.0.2
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational } from '../models/SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational';
import { HttpFile } from '../http/http';

export class SearchRestaurants200ResponseRestaurantsInnerLocalHours {
    'operational'?: SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational;
    'delivery'?: SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational;
    'pickup'?: SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational;
    'dineIn'?: SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "operational",
            "baseName": "operational",
            "type": "SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational",
            "format": ""
        },
        {
            "name": "delivery",
            "baseName": "delivery",
            "type": "SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational",
            "format": ""
        },
        {
            "name": "pickup",
            "baseName": "pickup",
            "type": "SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational",
            "format": ""
        },
        {
            "name": "dineIn",
            "baseName": "dine_in",
            "type": "SearchRestaurants200ResponseRestaurantsInnerLocalHoursOperational",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return SearchRestaurants200ResponseRestaurantsInnerLocalHours.attributeTypeMap;
    }

    public constructor() {
    }
}

