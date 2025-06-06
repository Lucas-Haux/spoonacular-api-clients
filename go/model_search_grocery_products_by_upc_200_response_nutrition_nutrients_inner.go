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

// checks if the SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner{}

// SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner struct for SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner
type SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner struct {
	Name string `json:"name"`
	Amount float32 `json:"amount"`
	Unit string `json:"unit"`
	PercentOfDailyNeeds float32 `json:"percentOfDailyNeeds"`
}

type _SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner

// NewSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner instantiates a new SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner(name string, amount float32, unit string, percentOfDailyNeeds float32) *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner {
	this := SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner{}
	this.Name = name
	this.Amount = amount
	this.Unit = unit
	this.PercentOfDailyNeeds = percentOfDailyNeeds
	return &this
}

// NewSearchGroceryProductsByUPC200ResponseNutritionNutrientsInnerWithDefaults instantiates a new SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewSearchGroceryProductsByUPC200ResponseNutritionNutrientsInnerWithDefaults() *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner {
	this := SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner{}
	return &this
}

// GetName returns the Name field value
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) GetName() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Name
}

// GetNameOk returns a tuple with the Name field value
// and a boolean to check if the value has been set.
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) GetNameOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Name, true
}

// SetName sets field value
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) SetName(v string) {
	o.Name = v
}

// GetAmount returns the Amount field value
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) GetAmount() float32 {
	if o == nil {
		var ret float32
		return ret
	}

	return o.Amount
}

// GetAmountOk returns a tuple with the Amount field value
// and a boolean to check if the value has been set.
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) GetAmountOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Amount, true
}

// SetAmount sets field value
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) SetAmount(v float32) {
	o.Amount = v
}

// GetUnit returns the Unit field value
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) GetUnit() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Unit
}

// GetUnitOk returns a tuple with the Unit field value
// and a boolean to check if the value has been set.
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) GetUnitOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Unit, true
}

// SetUnit sets field value
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) SetUnit(v string) {
	o.Unit = v
}

// GetPercentOfDailyNeeds returns the PercentOfDailyNeeds field value
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) GetPercentOfDailyNeeds() float32 {
	if o == nil {
		var ret float32
		return ret
	}

	return o.PercentOfDailyNeeds
}

// GetPercentOfDailyNeedsOk returns a tuple with the PercentOfDailyNeeds field value
// and a boolean to check if the value has been set.
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) GetPercentOfDailyNeedsOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return &o.PercentOfDailyNeeds, true
}

// SetPercentOfDailyNeeds sets field value
func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) SetPercentOfDailyNeeds(v float32) {
	o.PercentOfDailyNeeds = v
}

func (o SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["name"] = o.Name
	toSerialize["amount"] = o.Amount
	toSerialize["unit"] = o.Unit
	toSerialize["percentOfDailyNeeds"] = o.PercentOfDailyNeeds
	return toSerialize, nil
}

func (o *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"name",
		"amount",
		"unit",
		"percentOfDailyNeeds",
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

	varSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner := _SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner)

	if err != nil {
		return err
	}

	*o = SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner(varSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner)

	return err
}

type NullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner struct {
	value *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner
	isSet bool
}

func (v NullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) Get() *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner {
	return v.value
}

func (v *NullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) Set(val *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) {
	v.value = val
	v.isSet = true
}

func (v NullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) IsSet() bool {
	return v.isSet
}

func (v *NullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner(val *SearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) *NullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner {
	return &NullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner{value: val, isSet: true}
}

func (v NullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableSearchGroceryProductsByUPC200ResponseNutritionNutrientsInner) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


