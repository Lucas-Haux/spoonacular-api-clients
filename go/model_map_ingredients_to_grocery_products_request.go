/*
spoonacular API

The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

API version: 2.0.2
Contact: mail@spoonacular.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package spoonacular

import (
	"encoding/json"
	"bytes"
	"fmt"
)

// checks if the MapIngredientsToGroceryProductsRequest type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &MapIngredientsToGroceryProductsRequest{}

// MapIngredientsToGroceryProductsRequest 
type MapIngredientsToGroceryProductsRequest struct {
	Ingredients []string `json:"ingredients"`
	Servings float32 `json:"servings"`
}

type _MapIngredientsToGroceryProductsRequest MapIngredientsToGroceryProductsRequest

// NewMapIngredientsToGroceryProductsRequest instantiates a new MapIngredientsToGroceryProductsRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewMapIngredientsToGroceryProductsRequest(ingredients []string, servings float32) *MapIngredientsToGroceryProductsRequest {
	this := MapIngredientsToGroceryProductsRequest{}
	this.Ingredients = ingredients
	this.Servings = servings
	return &this
}

// NewMapIngredientsToGroceryProductsRequestWithDefaults instantiates a new MapIngredientsToGroceryProductsRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewMapIngredientsToGroceryProductsRequestWithDefaults() *MapIngredientsToGroceryProductsRequest {
	this := MapIngredientsToGroceryProductsRequest{}
	return &this
}

// GetIngredients returns the Ingredients field value
func (o *MapIngredientsToGroceryProductsRequest) GetIngredients() []string {
	if o == nil {
		var ret []string
		return ret
	}

	return o.Ingredients
}

// GetIngredientsOk returns a tuple with the Ingredients field value
// and a boolean to check if the value has been set.
func (o *MapIngredientsToGroceryProductsRequest) GetIngredientsOk() ([]string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Ingredients, true
}

// SetIngredients sets field value
func (o *MapIngredientsToGroceryProductsRequest) SetIngredients(v []string) {
	o.Ingredients = v
}

// GetServings returns the Servings field value
func (o *MapIngredientsToGroceryProductsRequest) GetServings() float32 {
	if o == nil {
		var ret float32
		return ret
	}

	return o.Servings
}

// GetServingsOk returns a tuple with the Servings field value
// and a boolean to check if the value has been set.
func (o *MapIngredientsToGroceryProductsRequest) GetServingsOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Servings, true
}

// SetServings sets field value
func (o *MapIngredientsToGroceryProductsRequest) SetServings(v float32) {
	o.Servings = v
}

func (o MapIngredientsToGroceryProductsRequest) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o MapIngredientsToGroceryProductsRequest) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["ingredients"] = o.Ingredients
	toSerialize["servings"] = o.Servings
	return toSerialize, nil
}

func (o *MapIngredientsToGroceryProductsRequest) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"ingredients",
		"servings",
	}

	allProperties := make(map[string]interface{})

	err = json.Unmarshal(data, &allProperties)

	if err != nil {
		return err;
	}

	for _, requiredProperty := range(requiredProperties) {
		if _, exists := allProperties[requiredProperty]; !exists {
			return fmt.Errorf("no value given for required property %v", requiredProperty)
		}
	}

	varMapIngredientsToGroceryProductsRequest := _MapIngredientsToGroceryProductsRequest{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varMapIngredientsToGroceryProductsRequest)

	if err != nil {
		return err
	}

	*o = MapIngredientsToGroceryProductsRequest(varMapIngredientsToGroceryProductsRequest)

	return err
}

type NullableMapIngredientsToGroceryProductsRequest struct {
	value *MapIngredientsToGroceryProductsRequest
	isSet bool
}

func (v NullableMapIngredientsToGroceryProductsRequest) Get() *MapIngredientsToGroceryProductsRequest {
	return v.value
}

func (v *NullableMapIngredientsToGroceryProductsRequest) Set(val *MapIngredientsToGroceryProductsRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableMapIngredientsToGroceryProductsRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableMapIngredientsToGroceryProductsRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableMapIngredientsToGroceryProductsRequest(val *MapIngredientsToGroceryProductsRequest) *NullableMapIngredientsToGroceryProductsRequest {
	return &NullableMapIngredientsToGroceryProductsRequest{value: val, isSet: true}
}

func (v NullableMapIngredientsToGroceryProductsRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableMapIngredientsToGroceryProductsRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


