=begin comment

spoonacular API

The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

The version of the OpenAPI document: 2.0.2
Contact: mail@spoonacular.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator
# Please update the test cases below to test the API endpoints.
# Ref: https://openapi-generator.tech
#
use Test::More;
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::OpenAPIClient::MealPlanningApi');

my $api = WWW::OpenAPIClient::MealPlanningApi->new();
isa_ok($api, 'WWW::OpenAPIClient::MealPlanningApi');

#
# add_meal_plan_template test
#
# uncomment below and update the test
#my $add_meal_plan_template_username = undef; # replace NULL with a proper value
#my $add_meal_plan_template_hash = undef; # replace NULL with a proper value
#my $add_meal_plan_template_result = $api->add_meal_plan_template(username => $add_meal_plan_template_username, hash => $add_meal_plan_template_hash);

#
# add_to_meal_plan test
#
# uncomment below and update the test
#my $add_to_meal_plan_username = undef; # replace NULL with a proper value
#my $add_to_meal_plan_hash = undef; # replace NULL with a proper value
#my $add_to_meal_plan_add_to_meal_plan_request = undef; # replace NULL with a proper value
#my $add_to_meal_plan_result = $api->add_to_meal_plan(username => $add_to_meal_plan_username, hash => $add_to_meal_plan_hash, add_to_meal_plan_request => $add_to_meal_plan_add_to_meal_plan_request);

#
# add_to_shopping_list test
#
# uncomment below and update the test
#my $add_to_shopping_list_username = undef; # replace NULL with a proper value
#my $add_to_shopping_list_hash = undef; # replace NULL with a proper value
#my $add_to_shopping_list_add_to_shopping_list_request = undef; # replace NULL with a proper value
#my $add_to_shopping_list_result = $api->add_to_shopping_list(username => $add_to_shopping_list_username, hash => $add_to_shopping_list_hash, add_to_shopping_list_request => $add_to_shopping_list_add_to_shopping_list_request);

#
# clear_meal_plan_day test
#
# uncomment below and update the test
#my $clear_meal_plan_day_username = undef; # replace NULL with a proper value
#my $clear_meal_plan_day_date = undef; # replace NULL with a proper value
#my $clear_meal_plan_day_hash = undef; # replace NULL with a proper value
#my $clear_meal_plan_day_result = $api->clear_meal_plan_day(username => $clear_meal_plan_day_username, date => $clear_meal_plan_day_date, hash => $clear_meal_plan_day_hash);

#
# connect_user test
#
# uncomment below and update the test
#my $connect_user_connect_user_request = undef; # replace NULL with a proper value
#my $connect_user_result = $api->connect_user(connect_user_request => $connect_user_connect_user_request);

#
# delete_from_meal_plan test
#
# uncomment below and update the test
#my $delete_from_meal_plan_username = undef; # replace NULL with a proper value
#my $delete_from_meal_plan_id = undef; # replace NULL with a proper value
#my $delete_from_meal_plan_hash = undef; # replace NULL with a proper value
#my $delete_from_meal_plan_result = $api->delete_from_meal_plan(username => $delete_from_meal_plan_username, id => $delete_from_meal_plan_id, hash => $delete_from_meal_plan_hash);

#
# delete_from_shopping_list test
#
# uncomment below and update the test
#my $delete_from_shopping_list_username = undef; # replace NULL with a proper value
#my $delete_from_shopping_list_id = undef; # replace NULL with a proper value
#my $delete_from_shopping_list_hash = undef; # replace NULL with a proper value
#my $delete_from_shopping_list_result = $api->delete_from_shopping_list(username => $delete_from_shopping_list_username, id => $delete_from_shopping_list_id, hash => $delete_from_shopping_list_hash);

#
# delete_meal_plan_template test
#
# uncomment below and update the test
#my $delete_meal_plan_template_username = undef; # replace NULL with a proper value
#my $delete_meal_plan_template_id = undef; # replace NULL with a proper value
#my $delete_meal_plan_template_hash = undef; # replace NULL with a proper value
#my $delete_meal_plan_template_result = $api->delete_meal_plan_template(username => $delete_meal_plan_template_username, id => $delete_meal_plan_template_id, hash => $delete_meal_plan_template_hash);

#
# generate_meal_plan test
#
# uncomment below and update the test
#my $generate_meal_plan_time_frame = undef; # replace NULL with a proper value
#my $generate_meal_plan_target_calories = undef; # replace NULL with a proper value
#my $generate_meal_plan_diet = undef; # replace NULL with a proper value
#my $generate_meal_plan_exclude = undef; # replace NULL with a proper value
#my $generate_meal_plan_result = $api->generate_meal_plan(time_frame => $generate_meal_plan_time_frame, target_calories => $generate_meal_plan_target_calories, diet => $generate_meal_plan_diet, exclude => $generate_meal_plan_exclude);

#
# generate_shopping_list test
#
# uncomment below and update the test
#my $generate_shopping_list_username = undef; # replace NULL with a proper value
#my $generate_shopping_list_start_date = undef; # replace NULL with a proper value
#my $generate_shopping_list_end_date = undef; # replace NULL with a proper value
#my $generate_shopping_list_hash = undef; # replace NULL with a proper value
#my $generate_shopping_list_result = $api->generate_shopping_list(username => $generate_shopping_list_username, start_date => $generate_shopping_list_start_date, end_date => $generate_shopping_list_end_date, hash => $generate_shopping_list_hash);

#
# get_meal_plan_template test
#
# uncomment below and update the test
#my $get_meal_plan_template_username = undef; # replace NULL with a proper value
#my $get_meal_plan_template_id = undef; # replace NULL with a proper value
#my $get_meal_plan_template_hash = undef; # replace NULL with a proper value
#my $get_meal_plan_template_result = $api->get_meal_plan_template(username => $get_meal_plan_template_username, id => $get_meal_plan_template_id, hash => $get_meal_plan_template_hash);

#
# get_meal_plan_templates test
#
# uncomment below and update the test
#my $get_meal_plan_templates_username = undef; # replace NULL with a proper value
#my $get_meal_plan_templates_hash = undef; # replace NULL with a proper value
#my $get_meal_plan_templates_result = $api->get_meal_plan_templates(username => $get_meal_plan_templates_username, hash => $get_meal_plan_templates_hash);

#
# get_meal_plan_week test
#
# uncomment below and update the test
#my $get_meal_plan_week_username = undef; # replace NULL with a proper value
#my $get_meal_plan_week_start_date = undef; # replace NULL with a proper value
#my $get_meal_plan_week_hash = undef; # replace NULL with a proper value
#my $get_meal_plan_week_result = $api->get_meal_plan_week(username => $get_meal_plan_week_username, start_date => $get_meal_plan_week_start_date, hash => $get_meal_plan_week_hash);

#
# get_shopping_list test
#
# uncomment below and update the test
#my $get_shopping_list_username = undef; # replace NULL with a proper value
#my $get_shopping_list_hash = undef; # replace NULL with a proper value
#my $get_shopping_list_result = $api->get_shopping_list(username => $get_shopping_list_username, hash => $get_shopping_list_hash);


done_testing();
