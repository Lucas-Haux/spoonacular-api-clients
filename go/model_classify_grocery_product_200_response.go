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

// checks if the ClassifyGroceryProduct200Response type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &ClassifyGroceryProduct200Response{}

// ClassifyGroceryProduct200Response 
type ClassifyGroceryProduct200Response struct {
	CleanTitle string `json:"cleanTitle"`
	Image string `json:"image"`
	Category string `json:"category"`
	Breadcrumbs []string `json:"breadcrumbs"`
	UsdaCode int32 `json:"usdaCode"`
}

type _ClassifyGroceryProduct200Response ClassifyGroceryProduct200Response

// NewClassifyGroceryProduct200Response instantiates a new ClassifyGroceryProduct200Response object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewClassifyGroceryProduct200Response(cleanTitle string, image string, category string, breadcrumbs []string, usdaCode int32) *ClassifyGroceryProduct200Response {
	this := ClassifyGroceryProduct200Response{}
	this.CleanTitle = cleanTitle
	this.Image = image
	this.Category = category
	this.Breadcrumbs = breadcrumbs
	this.UsdaCode = usdaCode
	return &this
}

// NewClassifyGroceryProduct200ResponseWithDefaults instantiates a new ClassifyGroceryProduct200Response object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewClassifyGroceryProduct200ResponseWithDefaults() *ClassifyGroceryProduct200Response {
	this := ClassifyGroceryProduct200Response{}
	return &this
}

// GetCleanTitle returns the CleanTitle field value
func (o *ClassifyGroceryProduct200Response) GetCleanTitle() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.CleanTitle
}

// GetCleanTitleOk returns a tuple with the CleanTitle field value
// and a boolean to check if the value has been set.
func (o *ClassifyGroceryProduct200Response) GetCleanTitleOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.CleanTitle, true
}

// SetCleanTitle sets field value
func (o *ClassifyGroceryProduct200Response) SetCleanTitle(v string) {
	o.CleanTitle = v
}

// GetImage returns the Image field value
func (o *ClassifyGroceryProduct200Response) GetImage() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Image
}

// GetImageOk returns a tuple with the Image field value
// and a boolean to check if the value has been set.
func (o *ClassifyGroceryProduct200Response) GetImageOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Image, true
}

// SetImage sets field value
func (o *ClassifyGroceryProduct200Response) SetImage(v string) {
	o.Image = v
}

// GetCategory returns the Category field value
func (o *ClassifyGroceryProduct200Response) GetCategory() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Category
}

// GetCategoryOk returns a tuple with the Category field value
// and a boolean to check if the value has been set.
func (o *ClassifyGroceryProduct200Response) GetCategoryOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Category, true
}

// SetCategory sets field value
func (o *ClassifyGroceryProduct200Response) SetCategory(v string) {
	o.Category = v
}

// GetBreadcrumbs returns the Breadcrumbs field value
func (o *ClassifyGroceryProduct200Response) GetBreadcrumbs() []string {
	if o == nil {
		var ret []string
		return ret
	}

	return o.Breadcrumbs
}

// GetBreadcrumbsOk returns a tuple with the Breadcrumbs field value
// and a boolean to check if the value has been set.
func (o *ClassifyGroceryProduct200Response) GetBreadcrumbsOk() ([]string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Breadcrumbs, true
}

// SetBreadcrumbs sets field value
func (o *ClassifyGroceryProduct200Response) SetBreadcrumbs(v []string) {
	o.Breadcrumbs = v
}

// GetUsdaCode returns the UsdaCode field value
func (o *ClassifyGroceryProduct200Response) GetUsdaCode() int32 {
	if o == nil {
		var ret int32
		return ret
	}

	return o.UsdaCode
}

// GetUsdaCodeOk returns a tuple with the UsdaCode field value
// and a boolean to check if the value has been set.
func (o *ClassifyGroceryProduct200Response) GetUsdaCodeOk() (*int32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.UsdaCode, true
}

// SetUsdaCode sets field value
func (o *ClassifyGroceryProduct200Response) SetUsdaCode(v int32) {
	o.UsdaCode = v
}

func (o ClassifyGroceryProduct200Response) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o ClassifyGroceryProduct200Response) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["cleanTitle"] = o.CleanTitle
	toSerialize["image"] = o.Image
	toSerialize["category"] = o.Category
	toSerialize["breadcrumbs"] = o.Breadcrumbs
	toSerialize["usdaCode"] = o.UsdaCode
	return toSerialize, nil
}

func (o *ClassifyGroceryProduct200Response) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"cleanTitle",
		"image",
		"category",
		"breadcrumbs",
		"usdaCode",
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

	varClassifyGroceryProduct200Response := _ClassifyGroceryProduct200Response{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varClassifyGroceryProduct200Response)

	if err != nil {
		return err
	}

	*o = ClassifyGroceryProduct200Response(varClassifyGroceryProduct200Response)

	return err
}

type NullableClassifyGroceryProduct200Response struct {
	value *ClassifyGroceryProduct200Response
	isSet bool
}

func (v NullableClassifyGroceryProduct200Response) Get() *ClassifyGroceryProduct200Response {
	return v.value
}

func (v *NullableClassifyGroceryProduct200Response) Set(val *ClassifyGroceryProduct200Response) {
	v.value = val
	v.isSet = true
}

func (v NullableClassifyGroceryProduct200Response) IsSet() bool {
	return v.isSet
}

func (v *NullableClassifyGroceryProduct200Response) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableClassifyGroceryProduct200Response(val *ClassifyGroceryProduct200Response) *NullableClassifyGroceryProduct200Response {
	return &NullableClassifyGroceryProduct200Response{value: val, isSet: true}
}

func (v NullableClassifyGroceryProduct200Response) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableClassifyGroceryProduct200Response) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


