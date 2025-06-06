/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 2.0.2
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIGenerateMealPlan_200_response.h
 *
 * 
 */

#ifndef OAIGenerateMealPlan_200_response_H
#define OAIGenerateMealPlan_200_response_H

#include <QJsonObject>

#include "OAIGenerateMealPlan_200_response_nutrients.h"
#include "OAIGetSimilarRecipes_200_response_inner.h"
#include <QSet>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIGetSimilarRecipes_200_response_inner;
class OAIGenerateMealPlan_200_response_nutrients;

class OAIGenerateMealPlan_200_response : public OAIObject {
public:
    OAIGenerateMealPlan_200_response();
    OAIGenerateMealPlan_200_response(QString json);
    ~OAIGenerateMealPlan_200_response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QSet<OAIGetSimilarRecipes_200_response_inner> getMeals() const;
    void setMeals(const QSet<OAIGetSimilarRecipes_200_response_inner> &meals);
    bool is_meals_Set() const;
    bool is_meals_Valid() const;

    OAIGenerateMealPlan_200_response_nutrients getNutrients() const;
    void setNutrients(const OAIGenerateMealPlan_200_response_nutrients &nutrients);
    bool is_nutrients_Set() const;
    bool is_nutrients_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QSet<OAIGetSimilarRecipes_200_response_inner> m_meals;
    bool m_meals_isSet;
    bool m_meals_isValid;

    OAIGenerateMealPlan_200_response_nutrients m_nutrients;
    bool m_nutrients_isSet;
    bool m_nutrients_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGenerateMealPlan_200_response)

#endif // OAIGenerateMealPlan_200_response_H
