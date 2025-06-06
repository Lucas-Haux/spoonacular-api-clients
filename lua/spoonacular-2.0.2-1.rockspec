package = "spoonacular"
version = "2.0.2-1"
source = {
	url = "https://github.com/ddsky/spoonacular-api-clients/tree/master/lua/.git"
}

description = {
	summary = "API client generated by OpenAPI Generator",
	detailed = [[
The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.]],
	homepage = "https://openapi-generator.tech",
	license = "Unlicense",
	maintainer = "OpenAPI Generator contributors",
}

dependencies = {
	"lua >= 5.2",
	"http",
	"dkjson",
	"basexx"
}

build = {
	type = "builtin",
	modules = {
		["spoonacular.api.default_api"] = "spoonacular/api/default_api.lua";
		["spoonacular.api.ingredients_api"] = "spoonacular/api/ingredients_api.lua";
		["spoonacular.api.meal_planning_api"] = "spoonacular/api/meal_planning_api.lua";
		["spoonacular.api.menu_items_api"] = "spoonacular/api/menu_items_api.lua";
		["spoonacular.api.misc_api"] = "spoonacular/api/misc_api.lua";
		["spoonacular.api.products_api"] = "spoonacular/api/products_api.lua";
		["spoonacular.api.recipes_api"] = "spoonacular/api/recipes_api.lua";
		["spoonacular.api.wine_api"] = "spoonacular/api/wine_api.lua";
		["spoonacular.model.add_meal_plan_template_200_response"] = "spoonacular/model/add_meal_plan_template_200_response.lua";
		["spoonacular.model.add_meal_plan_template_200_response_items_inner"] = "spoonacular/model/add_meal_plan_template_200_response_items_inner.lua";
		["spoonacular.model.add_meal_plan_template_200_response_items_inner_value"] = "spoonacular/model/add_meal_plan_template_200_response_items_inner_value.lua";
		["spoonacular.model.add_to_meal_plan_request"] = "spoonacular/model/add_to_meal_plan_request.lua";
		["spoonacular.model.add_to_meal_plan_request_value"] = "spoonacular/model/add_to_meal_plan_request_value.lua";
		["spoonacular.model.add_to_meal_plan_request_value_ingredients_inner"] = "spoonacular/model/add_to_meal_plan_request_value_ingredients_inner.lua";
		["spoonacular.model.add_to_shopping_list_request"] = "spoonacular/model/add_to_shopping_list_request.lua";
		["spoonacular.model.analyze_a_recipe_search_query_200_response"] = "spoonacular/model/analyze_a_recipe_search_query_200_response.lua";
		["spoonacular.model.analyze_a_recipe_search_query_200_response_dishes_inner"] = "spoonacular/model/analyze_a_recipe_search_query_200_response_dishes_inner.lua";
		["spoonacular.model.analyze_a_recipe_search_query_200_response_ingredients_inner"] = "spoonacular/model/analyze_a_recipe_search_query_200_response_ingredients_inner.lua";
		["spoonacular.model.analyze_recipe_instructions_200_response"] = "spoonacular/model/analyze_recipe_instructions_200_response.lua";
		["spoonacular.model.analyze_recipe_instructions_200_response_ingredients_inner"] = "spoonacular/model/analyze_recipe_instructions_200_response_ingredients_inner.lua";
		["spoonacular.model.analyze_recipe_instructions_200_response_parsed_instructions_inner"] = "spoonacular/model/analyze_recipe_instructions_200_response_parsed_instructions_inner.lua";
		["spoonacular.model.analyze_recipe_instructions_200_response_parsed_instructions_inner_steps_inner"] = "spoonacular/model/analyze_recipe_instructions_200_response_parsed_instructions_inner_steps_inner.lua";
		["spoonacular.model.analyze_recipe_instructions_200_response_parsed_instructions_inner_steps_inner_ingredients_inner"] = "spoonacular/model/analyze_recipe_instructions_200_response_parsed_instructions_inner_steps_inner_ingredients_inner.lua";
		["spoonacular.model.analyze_recipe_request"] = "spoonacular/model/analyze_recipe_request.lua";
		["spoonacular.model.autocomplete_ingredient_search_200_response_inner"] = "spoonacular/model/autocomplete_ingredient_search_200_response_inner.lua";
		["spoonacular.model.autocomplete_product_search_200_response"] = "spoonacular/model/autocomplete_product_search_200_response.lua";
		["spoonacular.model.autocomplete_product_search_200_response_results_inner"] = "spoonacular/model/autocomplete_product_search_200_response_results_inner.lua";
		["spoonacular.model.autocomplete_recipe_search_200_response_inner"] = "spoonacular/model/autocomplete_recipe_search_200_response_inner.lua";
		["spoonacular.model.classify_cuisine_200_response"] = "spoonacular/model/classify_cuisine_200_response.lua";
		["spoonacular.model.classify_grocery_product_200_response"] = "spoonacular/model/classify_grocery_product_200_response.lua";
		["spoonacular.model.classify_grocery_product_bulk_200_response_inner"] = "spoonacular/model/classify_grocery_product_bulk_200_response_inner.lua";
		["spoonacular.model.classify_grocery_product_bulk_request_inner"] = "spoonacular/model/classify_grocery_product_bulk_request_inner.lua";
		["spoonacular.model.classify_grocery_product_request"] = "spoonacular/model/classify_grocery_product_request.lua";
		["spoonacular.model.comparable_product"] = "spoonacular/model/comparable_product.lua";
		["spoonacular.model.compute_glycemic_load_200_response"] = "spoonacular/model/compute_glycemic_load_200_response.lua";
		["spoonacular.model.compute_glycemic_load_200_response_ingredients_inner"] = "spoonacular/model/compute_glycemic_load_200_response_ingredients_inner.lua";
		["spoonacular.model.compute_glycemic_load_request"] = "spoonacular/model/compute_glycemic_load_request.lua";
		["spoonacular.model.compute_ingredient_amount_200_response"] = "spoonacular/model/compute_ingredient_amount_200_response.lua";
		["spoonacular.model.connect_user_200_response"] = "spoonacular/model/connect_user_200_response.lua";
		["spoonacular.model.connect_user_request"] = "spoonacular/model/connect_user_request.lua";
		["spoonacular.model.convert_amounts_200_response"] = "spoonacular/model/convert_amounts_200_response.lua";
		["spoonacular.model.create_recipe_card_200_response"] = "spoonacular/model/create_recipe_card_200_response.lua";
		["spoonacular.model.detect_food_in_text_200_response"] = "spoonacular/model/detect_food_in_text_200_response.lua";
		["spoonacular.model.detect_food_in_text_200_response_annotations_inner"] = "spoonacular/model/detect_food_in_text_200_response_annotations_inner.lua";
		["spoonacular.model.generate_meal_plan_200_response"] = "spoonacular/model/generate_meal_plan_200_response.lua";
		["spoonacular.model.generate_meal_plan_200_response_nutrients"] = "spoonacular/model/generate_meal_plan_200_response_nutrients.lua";
		["spoonacular.model.get_a_random_food_joke_200_response"] = "spoonacular/model/get_a_random_food_joke_200_response.lua";
		["spoonacular.model.get_analyzed_recipe_instructions_200_response_inner"] = "spoonacular/model/get_analyzed_recipe_instructions_200_response_inner.lua";
		["spoonacular.model.get_analyzed_recipe_instructions_200_response_inner_steps_inner"] = "spoonacular/model/get_analyzed_recipe_instructions_200_response_inner_steps_inner.lua";
		["spoonacular.model.get_analyzed_recipe_instructions_200_response_inner_steps_inner_ingredients_inner"] = "spoonacular/model/get_analyzed_recipe_instructions_200_response_inner_steps_inner_ingredients_inner.lua";
		["spoonacular.model.get_comparable_products_200_response"] = "spoonacular/model/get_comparable_products_200_response.lua";
		["spoonacular.model.get_comparable_products_200_response_comparable_products"] = "spoonacular/model/get_comparable_products_200_response_comparable_products.lua";
		["spoonacular.model.get_conversation_suggests_200_response"] = "spoonacular/model/get_conversation_suggests_200_response.lua";
		["spoonacular.model.get_conversation_suggests_200_response_suggests"] = "spoonacular/model/get_conversation_suggests_200_response_suggests.lua";
		["spoonacular.model.get_conversation_suggests_200_response_suggests___inner"] = "spoonacular/model/get_conversation_suggests_200_response_suggests___inner.lua";
		["spoonacular.model.get_dish_pairing_for_wine_200_response"] = "spoonacular/model/get_dish_pairing_for_wine_200_response.lua";
		["spoonacular.model.get_ingredient_substitutes_200_response"] = "spoonacular/model/get_ingredient_substitutes_200_response.lua";
		["spoonacular.model.get_meal_plan_template_200_response"] = "spoonacular/model/get_meal_plan_template_200_response.lua";
		["spoonacular.model.get_meal_plan_template_200_response_days_inner"] = "spoonacular/model/get_meal_plan_template_200_response_days_inner.lua";
		["spoonacular.model.get_meal_plan_template_200_response_days_inner_items_inner"] = "spoonacular/model/get_meal_plan_template_200_response_days_inner_items_inner.lua";
		["spoonacular.model.get_meal_plan_template_200_response_days_inner_items_inner_value"] = "spoonacular/model/get_meal_plan_template_200_response_days_inner_items_inner_value.lua";
		["spoonacular.model.get_meal_plan_templates_200_response"] = "spoonacular/model/get_meal_plan_templates_200_response.lua";
		["spoonacular.model.get_meal_plan_templates_200_response_templates_inner"] = "spoonacular/model/get_meal_plan_templates_200_response_templates_inner.lua";
		["spoonacular.model.get_meal_plan_week_200_response"] = "spoonacular/model/get_meal_plan_week_200_response.lua";
		["spoonacular.model.get_meal_plan_week_200_response_days_inner"] = "spoonacular/model/get_meal_plan_week_200_response_days_inner.lua";
		["spoonacular.model.get_meal_plan_week_200_response_days_inner_items_inner"] = "spoonacular/model/get_meal_plan_week_200_response_days_inner_items_inner.lua";
		["spoonacular.model.get_meal_plan_week_200_response_days_inner_items_inner_value"] = "spoonacular/model/get_meal_plan_week_200_response_days_inner_items_inner_value.lua";
		["spoonacular.model.get_meal_plan_week_200_response_days_inner_nutrition_summary"] = "spoonacular/model/get_meal_plan_week_200_response_days_inner_nutrition_summary.lua";
		["spoonacular.model.get_meal_plan_week_200_response_days_inner_nutrition_summary_nutrients_inner"] = "spoonacular/model/get_meal_plan_week_200_response_days_inner_nutrition_summary_nutrients_inner.lua";
		["spoonacular.model.get_random_recipes_200_response"] = "spoonacular/model/get_random_recipes_200_response.lua";
		["spoonacular.model.get_recipe_equipment_by_id_200_response"] = "spoonacular/model/get_recipe_equipment_by_id_200_response.lua";
		["spoonacular.model.get_recipe_equipment_by_id_200_response_equipment_inner"] = "spoonacular/model/get_recipe_equipment_by_id_200_response_equipment_inner.lua";
		["spoonacular.model.get_recipe_ingredients_by_id_200_response"] = "spoonacular/model/get_recipe_ingredients_by_id_200_response.lua";
		["spoonacular.model.get_recipe_ingredients_by_id_200_response_ingredients_inner"] = "spoonacular/model/get_recipe_ingredients_by_id_200_response_ingredients_inner.lua";
		["spoonacular.model.get_recipe_nutrition_widget_by_id_200_response"] = "spoonacular/model/get_recipe_nutrition_widget_by_id_200_response.lua";
		["spoonacular.model.get_recipe_nutrition_widget_by_id_200_response_bad_inner"] = "spoonacular/model/get_recipe_nutrition_widget_by_id_200_response_bad_inner.lua";
		["spoonacular.model.get_recipe_nutrition_widget_by_id_200_response_good_inner"] = "spoonacular/model/get_recipe_nutrition_widget_by_id_200_response_good_inner.lua";
		["spoonacular.model.get_recipe_price_breakdown_by_id_200_response"] = "spoonacular/model/get_recipe_price_breakdown_by_id_200_response.lua";
		["spoonacular.model.get_recipe_price_breakdown_by_id_200_response_ingredients_inner"] = "spoonacular/model/get_recipe_price_breakdown_by_id_200_response_ingredients_inner.lua";
		["spoonacular.model.get_recipe_price_breakdown_by_id_200_response_ingredients_inner_amount"] = "spoonacular/model/get_recipe_price_breakdown_by_id_200_response_ingredients_inner_amount.lua";
		["spoonacular.model.get_recipe_price_breakdown_by_id_200_response_ingredients_inner_amount_metric"] = "spoonacular/model/get_recipe_price_breakdown_by_id_200_response_ingredients_inner_amount_metric.lua";
		["spoonacular.model.get_shopping_list_200_response"] = "spoonacular/model/get_shopping_list_200_response.lua";
		["spoonacular.model.get_shopping_list_200_response_aisles_inner"] = "spoonacular/model/get_shopping_list_200_response_aisles_inner.lua";
		["spoonacular.model.get_shopping_list_200_response_aisles_inner_items_inner"] = "spoonacular/model/get_shopping_list_200_response_aisles_inner_items_inner.lua";
		["spoonacular.model.get_shopping_list_200_response_aisles_inner_items_inner_measures"] = "spoonacular/model/get_shopping_list_200_response_aisles_inner_items_inner_measures.lua";
		["spoonacular.model.get_shopping_list_200_response_aisles_inner_items_inner_measures_original"] = "spoonacular/model/get_shopping_list_200_response_aisles_inner_items_inner_measures_original.lua";
		["spoonacular.model.get_similar_recipes_200_response_inner"] = "spoonacular/model/get_similar_recipes_200_response_inner.lua";
		["spoonacular.model.get_wine_description_200_response"] = "spoonacular/model/get_wine_description_200_response.lua";
		["spoonacular.model.get_wine_pairing_200_response"] = "spoonacular/model/get_wine_pairing_200_response.lua";
		["spoonacular.model.get_wine_pairing_200_response_product_matches_inner"] = "spoonacular/model/get_wine_pairing_200_response_product_matches_inner.lua";
		["spoonacular.model.get_wine_recommendation_200_response"] = "spoonacular/model/get_wine_recommendation_200_response.lua";
		["spoonacular.model.get_wine_recommendation_200_response_recommended_wines_inner"] = "spoonacular/model/get_wine_recommendation_200_response_recommended_wines_inner.lua";
		["spoonacular.model.guess_nutrition_by_dish_name_200_response"] = "spoonacular/model/guess_nutrition_by_dish_name_200_response.lua";
		["spoonacular.model.guess_nutrition_by_dish_name_200_response_calories"] = "spoonacular/model/guess_nutrition_by_dish_name_200_response_calories.lua";
		["spoonacular.model.guess_nutrition_by_dish_name_200_response_calories_confidence_range95_percent"] = "spoonacular/model/guess_nutrition_by_dish_name_200_response_calories_confidence_range95_percent.lua";
		["spoonacular.model.image_analysis_by_url_200_response"] = "spoonacular/model/image_analysis_by_url_200_response.lua";
		["spoonacular.model.image_analysis_by_url_200_response_category"] = "spoonacular/model/image_analysis_by_url_200_response_category.lua";
		["spoonacular.model.image_analysis_by_url_200_response_nutrition"] = "spoonacular/model/image_analysis_by_url_200_response_nutrition.lua";
		["spoonacular.model.image_analysis_by_url_200_response_nutrition_calories"] = "spoonacular/model/image_analysis_by_url_200_response_nutrition_calories.lua";
		["spoonacular.model.image_analysis_by_url_200_response_nutrition_calories_confidence_range95_percent"] = "spoonacular/model/image_analysis_by_url_200_response_nutrition_calories_confidence_range95_percent.lua";
		["spoonacular.model.image_analysis_by_url_200_response_recipes_inner"] = "spoonacular/model/image_analysis_by_url_200_response_recipes_inner.lua";
		["spoonacular.model.image_classification_by_url_200_response"] = "spoonacular/model/image_classification_by_url_200_response.lua";
		["spoonacular.model.ingredient_basics"] = "spoonacular/model/ingredient_basics.lua";
		["spoonacular.model.ingredient_information"] = "spoonacular/model/ingredient_information.lua";
		["spoonacular.model.ingredient_information_estimated_cost"] = "spoonacular/model/ingredient_information_estimated_cost.lua";
		["spoonacular.model.ingredient_information_nutrition"] = "spoonacular/model/ingredient_information_nutrition.lua";
		["spoonacular.model.ingredient_information_nutrition_properties_inner"] = "spoonacular/model/ingredient_information_nutrition_properties_inner.lua";
		["spoonacular.model.ingredient_search_200_response"] = "spoonacular/model/ingredient_search_200_response.lua";
		["spoonacular.model.ingredient_search_200_response_results_inner"] = "spoonacular/model/ingredient_search_200_response_results_inner.lua";
		["spoonacular.model.map_ingredients_to_grocery_products_200_response_inner"] = "spoonacular/model/map_ingredients_to_grocery_products_200_response_inner.lua";
		["spoonacular.model.map_ingredients_to_grocery_products_200_response_inner_products_inner"] = "spoonacular/model/map_ingredients_to_grocery_products_200_response_inner_products_inner.lua";
		["spoonacular.model.map_ingredients_to_grocery_products_request"] = "spoonacular/model/map_ingredients_to_grocery_products_request.lua";
		["spoonacular.model.menu_item"] = "spoonacular/model/menu_item.lua";
		["spoonacular.model.menu_item_servings"] = "spoonacular/model/menu_item_servings.lua";
		["spoonacular.model.product_information"] = "spoonacular/model/product_information.lua";
		["spoonacular.model.product_information_credits"] = "spoonacular/model/product_information_credits.lua";
		["spoonacular.model.quick_answer_200_response"] = "spoonacular/model/quick_answer_200_response.lua";
		["spoonacular.model.recipe_information"] = "spoonacular/model/recipe_information.lua";
		["spoonacular.model.recipe_information_extended_ingredients_inner"] = "spoonacular/model/recipe_information_extended_ingredients_inner.lua";
		["spoonacular.model.recipe_information_extended_ingredients_inner_measures"] = "spoonacular/model/recipe_information_extended_ingredients_inner_measures.lua";
		["spoonacular.model.recipe_information_extended_ingredients_inner_measures_metric"] = "spoonacular/model/recipe_information_extended_ingredients_inner_measures_metric.lua";
		["spoonacular.model.recipe_information_wine_pairing"] = "spoonacular/model/recipe_information_wine_pairing.lua";
		["spoonacular.model.recipe_information_wine_pairing_product_matches_inner"] = "spoonacular/model/recipe_information_wine_pairing_product_matches_inner.lua";
		["spoonacular.model.search_all_food_200_response"] = "spoonacular/model/search_all_food_200_response.lua";
		["spoonacular.model.search_all_food_200_response_search_results_inner"] = "spoonacular/model/search_all_food_200_response_search_results_inner.lua";
		["spoonacular.model.search_custom_foods_200_response"] = "spoonacular/model/search_custom_foods_200_response.lua";
		["spoonacular.model.search_custom_foods_200_response_custom_foods_inner"] = "spoonacular/model/search_custom_foods_200_response_custom_foods_inner.lua";
		["spoonacular.model.search_food_videos_200_response"] = "spoonacular/model/search_food_videos_200_response.lua";
		["spoonacular.model.search_food_videos_200_response_videos_inner"] = "spoonacular/model/search_food_videos_200_response_videos_inner.lua";
		["spoonacular.model.search_grocery_products_200_response"] = "spoonacular/model/search_grocery_products_200_response.lua";
		["spoonacular.model.search_grocery_products_by_upc_200_response"] = "spoonacular/model/search_grocery_products_by_upc_200_response.lua";
		["spoonacular.model.search_grocery_products_by_upc_200_response_nutrition"] = "spoonacular/model/search_grocery_products_by_upc_200_response_nutrition.lua";
		["spoonacular.model.search_grocery_products_by_upc_200_response_nutrition_caloric_breakdown"] = "spoonacular/model/search_grocery_products_by_upc_200_response_nutrition_caloric_breakdown.lua";
		["spoonacular.model.search_grocery_products_by_upc_200_response_nutrition_nutrients_inner"] = "spoonacular/model/search_grocery_products_by_upc_200_response_nutrition_nutrients_inner.lua";
		["spoonacular.model.search_grocery_products_by_upc_200_response_servings"] = "spoonacular/model/search_grocery_products_by_upc_200_response_servings.lua";
		["spoonacular.model.search_menu_items_200_response"] = "spoonacular/model/search_menu_items_200_response.lua";
		["spoonacular.model.search_recipes_200_response"] = "spoonacular/model/search_recipes_200_response.lua";
		["spoonacular.model.search_recipes_200_response_results_inner"] = "spoonacular/model/search_recipes_200_response_results_inner.lua";
		["spoonacular.model.search_recipes_by_ingredients_200_response_inner"] = "spoonacular/model/search_recipes_by_ingredients_200_response_inner.lua";
		["spoonacular.model.search_recipes_by_ingredients_200_response_inner_missed_ingredients_inner"] = "spoonacular/model/search_recipes_by_ingredients_200_response_inner_missed_ingredients_inner.lua";
		["spoonacular.model.search_recipes_by_nutrients_200_response_inner"] = "spoonacular/model/search_recipes_by_nutrients_200_response_inner.lua";
		["spoonacular.model.search_restaurants_200_response"] = "spoonacular/model/search_restaurants_200_response.lua";
		["spoonacular.model.search_restaurants_200_response_restaurants_inner"] = "spoonacular/model/search_restaurants_200_response_restaurants_inner.lua";
		["spoonacular.model.search_restaurants_200_response_restaurants_inner_address"] = "spoonacular/model/search_restaurants_200_response_restaurants_inner_address.lua";
		["spoonacular.model.search_restaurants_200_response_restaurants_inner_local_hours"] = "spoonacular/model/search_restaurants_200_response_restaurants_inner_local_hours.lua";
		["spoonacular.model.search_restaurants_200_response_restaurants_inner_local_hours_operational"] = "spoonacular/model/search_restaurants_200_response_restaurants_inner_local_hours_operational.lua";
		["spoonacular.model.search_result"] = "spoonacular/model/search_result.lua";
		["spoonacular.model.search_site_content_200_response"] = "spoonacular/model/search_site_content_200_response.lua";
		["spoonacular.model.summarize_recipe_200_response"] = "spoonacular/model/summarize_recipe_200_response.lua";
		["spoonacular.model.talk_to_chatbot_200_response"] = "spoonacular/model/talk_to_chatbot_200_response.lua";
		["spoonacular.model.talk_to_chatbot_200_response_media_inner"] = "spoonacular/model/talk_to_chatbot_200_response_media_inner.lua";
		["spoonacular.model.taste_information"] = "spoonacular/model/taste_information.lua";
	}
}
