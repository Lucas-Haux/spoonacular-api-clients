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
 * OAIClassifyGroceryProduct_request.h
 *
 * 
 */

#ifndef OAIClassifyGroceryProduct_request_H
#define OAIClassifyGroceryProduct_request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIClassifyGroceryProduct_request : public OAIObject {
public:
    OAIClassifyGroceryProduct_request();
    OAIClassifyGroceryProduct_request(QString json);
    ~OAIClassifyGroceryProduct_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QString getUpc() const;
    void setUpc(const QString &upc);
    bool is_upc_Set() const;
    bool is_upc_Valid() const;

    QString getPluCode() const;
    void setPluCode(const QString &plu_code);
    bool is_plu_code_Set() const;
    bool is_plu_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;

    QString m_upc;
    bool m_upc_isSet;
    bool m_upc_isValid;

    QString m_plu_code;
    bool m_plu_code_isSet;
    bool m_plu_code_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIClassifyGroceryProduct_request)

#endif // OAIClassifyGroceryProduct_request_H
