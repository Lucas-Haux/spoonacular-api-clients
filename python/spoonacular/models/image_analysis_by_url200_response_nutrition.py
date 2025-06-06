# coding: utf-8

"""
    spoonacular API

    The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

    The version of the OpenAPI document: 2.0.2
    Contact: mail@spoonacular.com
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


from __future__ import annotations
import pprint
import re  # noqa: F401
import json

from pydantic import BaseModel, ConfigDict, Field, StrictInt
from typing import Any, ClassVar, Dict, List
from spoonacular.models.image_analysis_by_url200_response_nutrition_calories import ImageAnalysisByURL200ResponseNutritionCalories
from typing import Optional, Set
from typing_extensions import Self

class ImageAnalysisByURL200ResponseNutrition(BaseModel):
    """
    ImageAnalysisByURL200ResponseNutrition
    """ # noqa: E501
    recipes_used: StrictInt = Field(alias="recipesUsed")
    calories: ImageAnalysisByURL200ResponseNutritionCalories
    fat: ImageAnalysisByURL200ResponseNutritionCalories
    protein: ImageAnalysisByURL200ResponseNutritionCalories
    carbs: ImageAnalysisByURL200ResponseNutritionCalories
    __properties: ClassVar[List[str]] = ["recipesUsed", "calories", "fat", "protein", "carbs"]

    model_config = ConfigDict(
        populate_by_name=True,
        validate_assignment=True,
        protected_namespaces=(),
    )


    def to_str(self) -> str:
        """Returns the string representation of the model using alias"""
        return pprint.pformat(self.model_dump(by_alias=True))

    def to_json(self) -> str:
        """Returns the JSON representation of the model using alias"""
        # TODO: pydantic v2: use .model_dump_json(by_alias=True, exclude_unset=True) instead
        return json.dumps(self.to_dict())

    @classmethod
    def from_json(cls, json_str: str) -> Optional[Self]:
        """Create an instance of ImageAnalysisByURL200ResponseNutrition from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self) -> Dict[str, Any]:
        """Return the dictionary representation of the model using alias.

        This has the following differences from calling pydantic's
        `self.model_dump(by_alias=True)`:

        * `None` is only added to the output dict for nullable fields that
          were set at model initialization. Other fields with value `None`
          are ignored.
        """
        excluded_fields: Set[str] = set([
        ])

        _dict = self.model_dump(
            by_alias=True,
            exclude=excluded_fields,
            exclude_none=True,
        )
        # override the default output from pydantic by calling `to_dict()` of calories
        if self.calories:
            _dict['calories'] = self.calories.to_dict()
        # override the default output from pydantic by calling `to_dict()` of fat
        if self.fat:
            _dict['fat'] = self.fat.to_dict()
        # override the default output from pydantic by calling `to_dict()` of protein
        if self.protein:
            _dict['protein'] = self.protein.to_dict()
        # override the default output from pydantic by calling `to_dict()` of carbs
        if self.carbs:
            _dict['carbs'] = self.carbs.to_dict()
        return _dict

    @classmethod
    def from_dict(cls, obj: Optional[Dict[str, Any]]) -> Optional[Self]:
        """Create an instance of ImageAnalysisByURL200ResponseNutrition from a dict"""
        if obj is None:
            return None

        if not isinstance(obj, dict):
            return cls.model_validate(obj)

        _obj = cls.model_validate({
            "recipesUsed": obj.get("recipesUsed"),
            "calories": ImageAnalysisByURL200ResponseNutritionCalories.from_dict(obj["calories"]) if obj.get("calories") is not None else None,
            "fat": ImageAnalysisByURL200ResponseNutritionCalories.from_dict(obj["fat"]) if obj.get("fat") is not None else None,
            "protein": ImageAnalysisByURL200ResponseNutritionCalories.from_dict(obj["protein"]) if obj.get("protein") is not None else None,
            "carbs": ImageAnalysisByURL200ResponseNutritionCalories.from_dict(obj["carbs"]) if obj.get("carbs") is not None else None
        })
        return _obj


