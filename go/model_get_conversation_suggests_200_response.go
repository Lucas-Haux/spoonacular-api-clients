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

// checks if the GetConversationSuggests200Response type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &GetConversationSuggests200Response{}

// GetConversationSuggests200Response 
type GetConversationSuggests200Response struct {
	Suggests GetConversationSuggests200ResponseSuggests `json:"suggests"`
	Words []string `json:"words"`
}

type _GetConversationSuggests200Response GetConversationSuggests200Response

// NewGetConversationSuggests200Response instantiates a new GetConversationSuggests200Response object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGetConversationSuggests200Response(suggests GetConversationSuggests200ResponseSuggests, words []string) *GetConversationSuggests200Response {
	this := GetConversationSuggests200Response{}
	this.Suggests = suggests
	this.Words = words
	return &this
}

// NewGetConversationSuggests200ResponseWithDefaults instantiates a new GetConversationSuggests200Response object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGetConversationSuggests200ResponseWithDefaults() *GetConversationSuggests200Response {
	this := GetConversationSuggests200Response{}
	return &this
}

// GetSuggests returns the Suggests field value
func (o *GetConversationSuggests200Response) GetSuggests() GetConversationSuggests200ResponseSuggests {
	if o == nil {
		var ret GetConversationSuggests200ResponseSuggests
		return ret
	}

	return o.Suggests
}

// GetSuggestsOk returns a tuple with the Suggests field value
// and a boolean to check if the value has been set.
func (o *GetConversationSuggests200Response) GetSuggestsOk() (*GetConversationSuggests200ResponseSuggests, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Suggests, true
}

// SetSuggests sets field value
func (o *GetConversationSuggests200Response) SetSuggests(v GetConversationSuggests200ResponseSuggests) {
	o.Suggests = v
}

// GetWords returns the Words field value
func (o *GetConversationSuggests200Response) GetWords() []string {
	if o == nil {
		var ret []string
		return ret
	}

	return o.Words
}

// GetWordsOk returns a tuple with the Words field value
// and a boolean to check if the value has been set.
func (o *GetConversationSuggests200Response) GetWordsOk() ([]string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Words, true
}

// SetWords sets field value
func (o *GetConversationSuggests200Response) SetWords(v []string) {
	o.Words = v
}

func (o GetConversationSuggests200Response) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o GetConversationSuggests200Response) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["suggests"] = o.Suggests
	toSerialize["words"] = o.Words
	return toSerialize, nil
}

func (o *GetConversationSuggests200Response) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"suggests",
		"words",
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

	varGetConversationSuggests200Response := _GetConversationSuggests200Response{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varGetConversationSuggests200Response)

	if err != nil {
		return err
	}

	*o = GetConversationSuggests200Response(varGetConversationSuggests200Response)

	return err
}

type NullableGetConversationSuggests200Response struct {
	value *GetConversationSuggests200Response
	isSet bool
}

func (v NullableGetConversationSuggests200Response) Get() *GetConversationSuggests200Response {
	return v.value
}

func (v *NullableGetConversationSuggests200Response) Set(val *GetConversationSuggests200Response) {
	v.value = val
	v.isSet = true
}

func (v NullableGetConversationSuggests200Response) IsSet() bool {
	return v.isSet
}

func (v *NullableGetConversationSuggests200Response) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGetConversationSuggests200Response(val *GetConversationSuggests200Response) *NullableGetConversationSuggests200Response {
	return &NullableGetConversationSuggests200Response{value: val, isSet: true}
}

func (v NullableGetConversationSuggests200Response) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGetConversationSuggests200Response) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


