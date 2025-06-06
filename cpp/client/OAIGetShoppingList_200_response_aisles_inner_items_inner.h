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
 * OAIGetShoppingList_200_response_aisles_inner_items_inner.h
 *
 * 
 */

#ifndef OAIGetShoppingList_200_response_aisles_inner_items_inner_H
#define OAIGetShoppingList_200_response_aisles_inner_items_inner_H

#include <QJsonObject>

#include "OAIGetShoppingList_200_response_aisles_inner_items_inner_measures.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIGetShoppingList_200_response_aisles_inner_items_inner_measures;

class OAIGetShoppingList_200_response_aisles_inner_items_inner : public OAIObject {
public:
    OAIGetShoppingList_200_response_aisles_inner_items_inner();
    OAIGetShoppingList_200_response_aisles_inner_items_inner(QString json);
    ~OAIGetShoppingList_200_response_aisles_inner_items_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIGetShoppingList_200_response_aisles_inner_items_inner_measures getMeasures() const;
    void setMeasures(const OAIGetShoppingList_200_response_aisles_inner_items_inner_measures &measures);
    bool is_measures_Set() const;
    bool is_measures_Valid() const;

    bool isPantryItem() const;
    void setPantryItem(const bool &pantry_item);
    bool is_pantry_item_Set() const;
    bool is_pantry_item_Valid() const;

    QString getAisle() const;
    void setAisle(const QString &aisle);
    bool is_aisle_Set() const;
    bool is_aisle_Valid() const;

    double getCost() const;
    void setCost(const double &cost);
    bool is_cost_Set() const;
    bool is_cost_Valid() const;

    qint32 getIngredientId() const;
    void setIngredientId(const qint32 &ingredient_id);
    bool is_ingredient_id_Set() const;
    bool is_ingredient_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIGetShoppingList_200_response_aisles_inner_items_inner_measures m_measures;
    bool m_measures_isSet;
    bool m_measures_isValid;

    bool m_pantry_item;
    bool m_pantry_item_isSet;
    bool m_pantry_item_isValid;

    QString m_aisle;
    bool m_aisle_isSet;
    bool m_aisle_isValid;

    double m_cost;
    bool m_cost_isSet;
    bool m_cost_isValid;

    qint32 m_ingredient_id;
    bool m_ingredient_id_isSet;
    bool m_ingredient_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIGetShoppingList_200_response_aisles_inner_items_inner)

#endif // OAIGetShoppingList_200_response_aisles_inner_items_inner_H
