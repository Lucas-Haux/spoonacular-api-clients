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
 *
 */

import ApiClient from '../ApiClient';

/**
 * The SearchRestaurants200ResponseRestaurantsInnerAddress model module.
 * @module model/SearchRestaurants200ResponseRestaurantsInnerAddress
 * @version 2.0.2
 */
class SearchRestaurants200ResponseRestaurantsInnerAddress {
    /**
     * Constructs a new <code>SearchRestaurants200ResponseRestaurantsInnerAddress</code>.
     * @alias module:model/SearchRestaurants200ResponseRestaurantsInnerAddress
     */
    constructor() { 
        
        SearchRestaurants200ResponseRestaurantsInnerAddress.initialize(this);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj) { 
    }

    /**
     * Constructs a <code>SearchRestaurants200ResponseRestaurantsInnerAddress</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/SearchRestaurants200ResponseRestaurantsInnerAddress} obj Optional instance to populate.
     * @return {module:model/SearchRestaurants200ResponseRestaurantsInnerAddress} The populated <code>SearchRestaurants200ResponseRestaurantsInnerAddress</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new SearchRestaurants200ResponseRestaurantsInnerAddress();

            if (data.hasOwnProperty('street_addr')) {
                obj['street_addr'] = ApiClient.convertToType(data['street_addr'], 'String');
            }
            if (data.hasOwnProperty('city')) {
                obj['city'] = ApiClient.convertToType(data['city'], 'String');
            }
            if (data.hasOwnProperty('state')) {
                obj['state'] = ApiClient.convertToType(data['state'], 'String');
            }
            if (data.hasOwnProperty('zipcode')) {
                obj['zipcode'] = ApiClient.convertToType(data['zipcode'], 'String');
            }
            if (data.hasOwnProperty('country')) {
                obj['country'] = ApiClient.convertToType(data['country'], 'String');
            }
            if (data.hasOwnProperty('lat')) {
                obj['lat'] = ApiClient.convertToType(data['lat'], 'Number');
            }
            if (data.hasOwnProperty('lon')) {
                obj['lon'] = ApiClient.convertToType(data['lon'], 'Number');
            }
            if (data.hasOwnProperty('street_addr_2')) {
                obj['street_addr_2'] = ApiClient.convertToType(data['street_addr_2'], 'String');
            }
            if (data.hasOwnProperty('latitude')) {
                obj['latitude'] = ApiClient.convertToType(data['latitude'], 'Number');
            }
            if (data.hasOwnProperty('longitude')) {
                obj['longitude'] = ApiClient.convertToType(data['longitude'], 'Number');
            }
        }
        return obj;
    }

    /**
     * Validates the JSON data with respect to <code>SearchRestaurants200ResponseRestaurantsInnerAddress</code>.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @return {boolean} to indicate whether the JSON data is valid with respect to <code>SearchRestaurants200ResponseRestaurantsInnerAddress</code>.
     */
    static validateJSON(data) {
        // ensure the json data is a string
        if (data['street_addr'] && !(typeof data['street_addr'] === 'string' || data['street_addr'] instanceof String)) {
            throw new Error("Expected the field `street_addr` to be a primitive type in the JSON string but got " + data['street_addr']);
        }
        // ensure the json data is a string
        if (data['city'] && !(typeof data['city'] === 'string' || data['city'] instanceof String)) {
            throw new Error("Expected the field `city` to be a primitive type in the JSON string but got " + data['city']);
        }
        // ensure the json data is a string
        if (data['state'] && !(typeof data['state'] === 'string' || data['state'] instanceof String)) {
            throw new Error("Expected the field `state` to be a primitive type in the JSON string but got " + data['state']);
        }
        // ensure the json data is a string
        if (data['zipcode'] && !(typeof data['zipcode'] === 'string' || data['zipcode'] instanceof String)) {
            throw new Error("Expected the field `zipcode` to be a primitive type in the JSON string but got " + data['zipcode']);
        }
        // ensure the json data is a string
        if (data['country'] && !(typeof data['country'] === 'string' || data['country'] instanceof String)) {
            throw new Error("Expected the field `country` to be a primitive type in the JSON string but got " + data['country']);
        }
        // ensure the json data is a string
        if (data['street_addr_2'] && !(typeof data['street_addr_2'] === 'string' || data['street_addr_2'] instanceof String)) {
            throw new Error("Expected the field `street_addr_2` to be a primitive type in the JSON string but got " + data['street_addr_2']);
        }

        return true;
    }


}



/**
 * @member {String} street_addr
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['street_addr'] = undefined;

/**
 * @member {String} city
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['city'] = undefined;

/**
 * @member {String} state
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['state'] = undefined;

/**
 * @member {String} zipcode
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['zipcode'] = undefined;

/**
 * @member {String} country
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['country'] = undefined;

/**
 * @member {Number} lat
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['lat'] = undefined;

/**
 * @member {Number} lon
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['lon'] = undefined;

/**
 * @member {String} street_addr_2
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['street_addr_2'] = undefined;

/**
 * @member {Number} latitude
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['latitude'] = undefined;

/**
 * @member {Number} longitude
 */
SearchRestaurants200ResponseRestaurantsInnerAddress.prototype['longitude'] = undefined;






export default SearchRestaurants200ResponseRestaurantsInnerAddress;

