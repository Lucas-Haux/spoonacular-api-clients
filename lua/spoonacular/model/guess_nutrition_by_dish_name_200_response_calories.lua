--[[
  spoonacular API

  The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

  The version of the OpenAPI document: 2.0.2
  Contact: mail@spoonacular.com
  Generated by: https://openapi-generator.tech
]]

-- guess_nutrition_by_dish_name_200_response_calories class
local guess_nutrition_by_dish_name_200_response_calories = {}
local guess_nutrition_by_dish_name_200_response_calories_mt = {
	__name = "guess_nutrition_by_dish_name_200_response_calories";
	__index = guess_nutrition_by_dish_name_200_response_calories;
}

local function cast_guess_nutrition_by_dish_name_200_response_calories(t)
	return setmetatable(t, guess_nutrition_by_dish_name_200_response_calories_mt)
end

local function new_guess_nutrition_by_dish_name_200_response_calories(confidence_range95_percent, standard_deviation, unit, value)
	return cast_guess_nutrition_by_dish_name_200_response_calories({
		["confidenceRange95Percent"] = confidence_range95_percent;
		["standardDeviation"] = standard_deviation;
		["unit"] = unit;
		["value"] = value;
	})
end

return {
	cast = cast_guess_nutrition_by_dish_name_200_response_calories;
	new = new_guess_nutrition_by_dish_name_200_response_calories;
}
