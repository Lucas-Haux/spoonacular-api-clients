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

// checks if the GetMealPlanTemplate200ResponseDaysInner type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &GetMealPlanTemplate200ResponseDaysInner{}

// GetMealPlanTemplate200ResponseDaysInner struct for GetMealPlanTemplate200ResponseDaysInner
type GetMealPlanTemplate200ResponseDaysInner struct {
	NutritionSummary *GetMealPlanWeek200ResponseDaysInnerNutritionSummary `json:"nutritionSummary,omitempty"`
	NutritionSummaryBreakfast *GetMealPlanWeek200ResponseDaysInnerNutritionSummary `json:"nutritionSummaryBreakfast,omitempty"`
	NutritionSummaryLunch *GetMealPlanWeek200ResponseDaysInnerNutritionSummary `json:"nutritionSummaryLunch,omitempty"`
	NutritionSummaryDinner *GetMealPlanWeek200ResponseDaysInnerNutritionSummary `json:"nutritionSummaryDinner,omitempty"`
	Day string `json:"day"`
	Items []GetMealPlanTemplate200ResponseDaysInnerItemsInner `json:"items,omitempty"`
}

type _GetMealPlanTemplate200ResponseDaysInner GetMealPlanTemplate200ResponseDaysInner

// NewGetMealPlanTemplate200ResponseDaysInner instantiates a new GetMealPlanTemplate200ResponseDaysInner object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGetMealPlanTemplate200ResponseDaysInner(day string) *GetMealPlanTemplate200ResponseDaysInner {
	this := GetMealPlanTemplate200ResponseDaysInner{}
	this.Day = day
	return &this
}

// NewGetMealPlanTemplate200ResponseDaysInnerWithDefaults instantiates a new GetMealPlanTemplate200ResponseDaysInner object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGetMealPlanTemplate200ResponseDaysInnerWithDefaults() *GetMealPlanTemplate200ResponseDaysInner {
	this := GetMealPlanTemplate200ResponseDaysInner{}
	return &this
}

// GetNutritionSummary returns the NutritionSummary field value if set, zero value otherwise.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetNutritionSummary() GetMealPlanWeek200ResponseDaysInnerNutritionSummary {
	if o == nil || IsNil(o.NutritionSummary) {
		var ret GetMealPlanWeek200ResponseDaysInnerNutritionSummary
		return ret
	}
	return *o.NutritionSummary
}

// GetNutritionSummaryOk returns a tuple with the NutritionSummary field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetNutritionSummaryOk() (*GetMealPlanWeek200ResponseDaysInnerNutritionSummary, bool) {
	if o == nil || IsNil(o.NutritionSummary) {
		return nil, false
	}
	return o.NutritionSummary, true
}

// HasNutritionSummary returns a boolean if a field has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) HasNutritionSummary() bool {
	if o != nil && !IsNil(o.NutritionSummary) {
		return true
	}

	return false
}

// SetNutritionSummary gets a reference to the given GetMealPlanWeek200ResponseDaysInnerNutritionSummary and assigns it to the NutritionSummary field.
func (o *GetMealPlanTemplate200ResponseDaysInner) SetNutritionSummary(v GetMealPlanWeek200ResponseDaysInnerNutritionSummary) {
	o.NutritionSummary = &v
}

// GetNutritionSummaryBreakfast returns the NutritionSummaryBreakfast field value if set, zero value otherwise.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetNutritionSummaryBreakfast() GetMealPlanWeek200ResponseDaysInnerNutritionSummary {
	if o == nil || IsNil(o.NutritionSummaryBreakfast) {
		var ret GetMealPlanWeek200ResponseDaysInnerNutritionSummary
		return ret
	}
	return *o.NutritionSummaryBreakfast
}

// GetNutritionSummaryBreakfastOk returns a tuple with the NutritionSummaryBreakfast field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetNutritionSummaryBreakfastOk() (*GetMealPlanWeek200ResponseDaysInnerNutritionSummary, bool) {
	if o == nil || IsNil(o.NutritionSummaryBreakfast) {
		return nil, false
	}
	return o.NutritionSummaryBreakfast, true
}

// HasNutritionSummaryBreakfast returns a boolean if a field has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) HasNutritionSummaryBreakfast() bool {
	if o != nil && !IsNil(o.NutritionSummaryBreakfast) {
		return true
	}

	return false
}

// SetNutritionSummaryBreakfast gets a reference to the given GetMealPlanWeek200ResponseDaysInnerNutritionSummary and assigns it to the NutritionSummaryBreakfast field.
func (o *GetMealPlanTemplate200ResponseDaysInner) SetNutritionSummaryBreakfast(v GetMealPlanWeek200ResponseDaysInnerNutritionSummary) {
	o.NutritionSummaryBreakfast = &v
}

// GetNutritionSummaryLunch returns the NutritionSummaryLunch field value if set, zero value otherwise.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetNutritionSummaryLunch() GetMealPlanWeek200ResponseDaysInnerNutritionSummary {
	if o == nil || IsNil(o.NutritionSummaryLunch) {
		var ret GetMealPlanWeek200ResponseDaysInnerNutritionSummary
		return ret
	}
	return *o.NutritionSummaryLunch
}

// GetNutritionSummaryLunchOk returns a tuple with the NutritionSummaryLunch field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetNutritionSummaryLunchOk() (*GetMealPlanWeek200ResponseDaysInnerNutritionSummary, bool) {
	if o == nil || IsNil(o.NutritionSummaryLunch) {
		return nil, false
	}
	return o.NutritionSummaryLunch, true
}

// HasNutritionSummaryLunch returns a boolean if a field has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) HasNutritionSummaryLunch() bool {
	if o != nil && !IsNil(o.NutritionSummaryLunch) {
		return true
	}

	return false
}

// SetNutritionSummaryLunch gets a reference to the given GetMealPlanWeek200ResponseDaysInnerNutritionSummary and assigns it to the NutritionSummaryLunch field.
func (o *GetMealPlanTemplate200ResponseDaysInner) SetNutritionSummaryLunch(v GetMealPlanWeek200ResponseDaysInnerNutritionSummary) {
	o.NutritionSummaryLunch = &v
}

// GetNutritionSummaryDinner returns the NutritionSummaryDinner field value if set, zero value otherwise.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetNutritionSummaryDinner() GetMealPlanWeek200ResponseDaysInnerNutritionSummary {
	if o == nil || IsNil(o.NutritionSummaryDinner) {
		var ret GetMealPlanWeek200ResponseDaysInnerNutritionSummary
		return ret
	}
	return *o.NutritionSummaryDinner
}

// GetNutritionSummaryDinnerOk returns a tuple with the NutritionSummaryDinner field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetNutritionSummaryDinnerOk() (*GetMealPlanWeek200ResponseDaysInnerNutritionSummary, bool) {
	if o == nil || IsNil(o.NutritionSummaryDinner) {
		return nil, false
	}
	return o.NutritionSummaryDinner, true
}

// HasNutritionSummaryDinner returns a boolean if a field has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) HasNutritionSummaryDinner() bool {
	if o != nil && !IsNil(o.NutritionSummaryDinner) {
		return true
	}

	return false
}

// SetNutritionSummaryDinner gets a reference to the given GetMealPlanWeek200ResponseDaysInnerNutritionSummary and assigns it to the NutritionSummaryDinner field.
func (o *GetMealPlanTemplate200ResponseDaysInner) SetNutritionSummaryDinner(v GetMealPlanWeek200ResponseDaysInnerNutritionSummary) {
	o.NutritionSummaryDinner = &v
}

// GetDay returns the Day field value
func (o *GetMealPlanTemplate200ResponseDaysInner) GetDay() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Day
}

// GetDayOk returns a tuple with the Day field value
// and a boolean to check if the value has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetDayOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Day, true
}

// SetDay sets field value
func (o *GetMealPlanTemplate200ResponseDaysInner) SetDay(v string) {
	o.Day = v
}

// GetItems returns the Items field value if set, zero value otherwise.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetItems() []GetMealPlanTemplate200ResponseDaysInnerItemsInner {
	if o == nil || IsNil(o.Items) {
		var ret []GetMealPlanTemplate200ResponseDaysInnerItemsInner
		return ret
	}
	return o.Items
}

// GetItemsOk returns a tuple with the Items field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) GetItemsOk() ([]GetMealPlanTemplate200ResponseDaysInnerItemsInner, bool) {
	if o == nil || IsNil(o.Items) {
		return nil, false
	}
	return o.Items, true
}

// HasItems returns a boolean if a field has been set.
func (o *GetMealPlanTemplate200ResponseDaysInner) HasItems() bool {
	if o != nil && !IsNil(o.Items) {
		return true
	}

	return false
}

// SetItems gets a reference to the given []GetMealPlanTemplate200ResponseDaysInnerItemsInner and assigns it to the Items field.
func (o *GetMealPlanTemplate200ResponseDaysInner) SetItems(v []GetMealPlanTemplate200ResponseDaysInnerItemsInner) {
	o.Items = v
}

func (o GetMealPlanTemplate200ResponseDaysInner) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o GetMealPlanTemplate200ResponseDaysInner) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.NutritionSummary) {
		toSerialize["nutritionSummary"] = o.NutritionSummary
	}
	if !IsNil(o.NutritionSummaryBreakfast) {
		toSerialize["nutritionSummaryBreakfast"] = o.NutritionSummaryBreakfast
	}
	if !IsNil(o.NutritionSummaryLunch) {
		toSerialize["nutritionSummaryLunch"] = o.NutritionSummaryLunch
	}
	if !IsNil(o.NutritionSummaryDinner) {
		toSerialize["nutritionSummaryDinner"] = o.NutritionSummaryDinner
	}
	toSerialize["day"] = o.Day
	if !IsNil(o.Items) {
		toSerialize["items"] = o.Items
	}
	return toSerialize, nil
}

func (o *GetMealPlanTemplate200ResponseDaysInner) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"day",
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

	varGetMealPlanTemplate200ResponseDaysInner := _GetMealPlanTemplate200ResponseDaysInner{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varGetMealPlanTemplate200ResponseDaysInner)

	if err != nil {
		return err
	}

	*o = GetMealPlanTemplate200ResponseDaysInner(varGetMealPlanTemplate200ResponseDaysInner)

	return err
}

type NullableGetMealPlanTemplate200ResponseDaysInner struct {
	value *GetMealPlanTemplate200ResponseDaysInner
	isSet bool
}

func (v NullableGetMealPlanTemplate200ResponseDaysInner) Get() *GetMealPlanTemplate200ResponseDaysInner {
	return v.value
}

func (v *NullableGetMealPlanTemplate200ResponseDaysInner) Set(val *GetMealPlanTemplate200ResponseDaysInner) {
	v.value = val
	v.isSet = true
}

func (v NullableGetMealPlanTemplate200ResponseDaysInner) IsSet() bool {
	return v.isSet
}

func (v *NullableGetMealPlanTemplate200ResponseDaysInner) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGetMealPlanTemplate200ResponseDaysInner(val *GetMealPlanTemplate200ResponseDaysInner) *NullableGetMealPlanTemplate200ResponseDaysInner {
	return &NullableGetMealPlanTemplate200ResponseDaysInner{value: val, isSet: true}
}

func (v NullableGetMealPlanTemplate200ResponseDaysInner) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGetMealPlanTemplate200ResponseDaysInner) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


