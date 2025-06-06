# coding: utf-8

"""
    spoonacular API

    The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

    The version of the OpenAPI document: 2.0.2
    Contact: mail@spoonacular.com
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


import unittest

from spoonacular.api.meal_planning_api import MealPlanningApi


class TestMealPlanningApi(unittest.TestCase):
    """MealPlanningApi unit test stubs"""

    def setUp(self) -> None:
        self.api = MealPlanningApi()

    def tearDown(self) -> None:
        pass

    def test_add_meal_plan_template(self) -> None:
        """Test case for add_meal_plan_template

        Add Meal Plan Template
        """
        pass

    def test_add_to_meal_plan(self) -> None:
        """Test case for add_to_meal_plan

        Add to Meal Plan
        """
        pass

    def test_add_to_shopping_list(self) -> None:
        """Test case for add_to_shopping_list

        Add to Shopping List
        """
        pass

    def test_clear_meal_plan_day(self) -> None:
        """Test case for clear_meal_plan_day

        Clear Meal Plan Day
        """
        pass

    def test_connect_user(self) -> None:
        """Test case for connect_user

        Connect User
        """
        pass

    def test_delete_from_meal_plan(self) -> None:
        """Test case for delete_from_meal_plan

        Delete from Meal Plan
        """
        pass

    def test_delete_from_shopping_list(self) -> None:
        """Test case for delete_from_shopping_list

        Delete from Shopping List
        """
        pass

    def test_delete_meal_plan_template(self) -> None:
        """Test case for delete_meal_plan_template

        Delete Meal Plan Template
        """
        pass

    def test_generate_meal_plan(self) -> None:
        """Test case for generate_meal_plan

        Generate Meal Plan
        """
        pass

    def test_generate_shopping_list(self) -> None:
        """Test case for generate_shopping_list

        Generate Shopping List
        """
        pass

    def test_get_meal_plan_template(self) -> None:
        """Test case for get_meal_plan_template

        Get Meal Plan Template
        """
        pass

    def test_get_meal_plan_templates(self) -> None:
        """Test case for get_meal_plan_templates

        Get Meal Plan Templates
        """
        pass

    def test_get_meal_plan_week(self) -> None:
        """Test case for get_meal_plan_week

        Get Meal Plan Week
        """
        pass

    def test_get_shopping_list(self) -> None:
        """Test case for get_shopping_list

        Get Shopping List
        """
        pass


if __name__ == '__main__':
    unittest.main()
