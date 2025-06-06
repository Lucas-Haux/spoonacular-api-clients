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
 * OAIMapIngredientsToGroceryProducts_200_response_inner.h
 *
 * 
 */

#ifndef OAIMapIngredientsToGroceryProducts_200_response_inner_H
#define OAIMapIngredientsToGroceryProducts_200_response_inner_H

#include <QJsonObject>

#include "OAIMapIngredientsToGroceryProducts_200_response_inner_products_inner.h"
#include <QList>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMapIngredientsToGroceryProducts_200_response_inner_products_inner;

class OAIMapIngredientsToGroceryProducts_200_response_inner : public OAIObject {
public:
    OAIMapIngredientsToGroceryProducts_200_response_inner();
    OAIMapIngredientsToGroceryProducts_200_response_inner(QString json);
    ~OAIMapIngredientsToGroceryProducts_200_response_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getOriginal() const;
    void setOriginal(const QString &original);
    bool is_original_Set() const;
    bool is_original_Valid() const;

    QString getOriginalName() const;
    void setOriginalName(const QString &original_name);
    bool is_original_name_Set() const;
    bool is_original_name_Valid() const;

    QString getIngredientImage() const;
    void setIngredientImage(const QString &ingredient_image);
    bool is_ingredient_image_Set() const;
    bool is_ingredient_image_Valid() const;

    QList<QString> getMeta() const;
    void setMeta(const QList<QString> &meta);
    bool is_meta_Set() const;
    bool is_meta_Valid() const;

    QSet<OAIMapIngredientsToGroceryProducts_200_response_inner_products_inner> getProducts() const;
    void setProducts(const QSet<OAIMapIngredientsToGroceryProducts_200_response_inner_products_inner> &products);
    bool is_products_Set() const;
    bool is_products_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_original;
    bool m_original_isSet;
    bool m_original_isValid;

    QString m_original_name;
    bool m_original_name_isSet;
    bool m_original_name_isValid;

    QString m_ingredient_image;
    bool m_ingredient_image_isSet;
    bool m_ingredient_image_isValid;

    QList<QString> m_meta;
    bool m_meta_isSet;
    bool m_meta_isValid;

    QSet<OAIMapIngredientsToGroceryProducts_200_response_inner_products_inner> m_products;
    bool m_products_isSet;
    bool m_products_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMapIngredientsToGroceryProducts_200_response_inner)

#endif // OAIMapIngredientsToGroceryProducts_200_response_inner_H
