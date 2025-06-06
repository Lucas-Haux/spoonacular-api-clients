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

// checks if the GetDishPairingForWine200Response type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &GetDishPairingForWine200Response{}

// GetDishPairingForWine200Response 
type GetDishPairingForWine200Response struct {
	Pairings []string `json:"pairings"`
	Text string `json:"text"`
}

type _GetDishPairingForWine200Response GetDishPairingForWine200Response

// NewGetDishPairingForWine200Response instantiates a new GetDishPairingForWine200Response object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGetDishPairingForWine200Response(pairings []string, text string) *GetDishPairingForWine200Response {
	this := GetDishPairingForWine200Response{}
	this.Pairings = pairings
	this.Text = text
	return &this
}

// NewGetDishPairingForWine200ResponseWithDefaults instantiates a new GetDishPairingForWine200Response object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGetDishPairingForWine200ResponseWithDefaults() *GetDishPairingForWine200Response {
	this := GetDishPairingForWine200Response{}
	return &this
}

// GetPairings returns the Pairings field value
func (o *GetDishPairingForWine200Response) GetPairings() []string {
	if o == nil {
		var ret []string
		return ret
	}

	return o.Pairings
}

// GetPairingsOk returns a tuple with the Pairings field value
// and a boolean to check if the value has been set.
func (o *GetDishPairingForWine200Response) GetPairingsOk() ([]string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Pairings, true
}

// SetPairings sets field value
func (o *GetDishPairingForWine200Response) SetPairings(v []string) {
	o.Pairings = v
}

// GetText returns the Text field value
func (o *GetDishPairingForWine200Response) GetText() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Text
}

// GetTextOk returns a tuple with the Text field value
// and a boolean to check if the value has been set.
func (o *GetDishPairingForWine200Response) GetTextOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Text, true
}

// SetText sets field value
func (o *GetDishPairingForWine200Response) SetText(v string) {
	o.Text = v
}

func (o GetDishPairingForWine200Response) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o GetDishPairingForWine200Response) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["pairings"] = o.Pairings
	toSerialize["text"] = o.Text
	return toSerialize, nil
}

func (o *GetDishPairingForWine200Response) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"pairings",
		"text",
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

	varGetDishPairingForWine200Response := _GetDishPairingForWine200Response{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varGetDishPairingForWine200Response)

	if err != nil {
		return err
	}

	*o = GetDishPairingForWine200Response(varGetDishPairingForWine200Response)

	return err
}

type NullableGetDishPairingForWine200Response struct {
	value *GetDishPairingForWine200Response
	isSet bool
}

func (v NullableGetDishPairingForWine200Response) Get() *GetDishPairingForWine200Response {
	return v.value
}

func (v *NullableGetDishPairingForWine200Response) Set(val *GetDishPairingForWine200Response) {
	v.value = val
	v.isSet = true
}

func (v NullableGetDishPairingForWine200Response) IsSet() bool {
	return v.isSet
}

func (v *NullableGetDishPairingForWine200Response) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGetDishPairingForWine200Response(val *GetDishPairingForWine200Response) *NullableGetDishPairingForWine200Response {
	return &NullableGetDishPairingForWine200Response{value: val, isSet: true}
}

func (v NullableGetDishPairingForWine200Response) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGetDishPairingForWine200Response) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


