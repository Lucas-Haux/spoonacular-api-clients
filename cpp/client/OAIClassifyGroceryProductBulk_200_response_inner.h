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
 * OAIClassifyGroceryProductBulk_200_response_inner.h
 *
 * 
 */

#ifndef OAIClassifyGroceryProductBulk_200_response_inner_H
#define OAIClassifyGroceryProductBulk_200_response_inner_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIClassifyGroceryProductBulk_200_response_inner : public OAIObject {
public:
    OAIClassifyGroceryProductBulk_200_response_inner();
    OAIClassifyGroceryProductBulk_200_response_inner(QString json);
    ~OAIClassifyGroceryProductBulk_200_response_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCleanTitle() const;
    void setCleanTitle(const QString &clean_title);
    bool is_clean_title_Set() const;
    bool is_clean_title_Valid() const;

    QString getImage() const;
    void setImage(const QString &image);
    bool is_image_Set() const;
    bool is_image_Valid() const;

    QString getCategory() const;
    void setCategory(const QString &category);
    bool is_category_Set() const;
    bool is_category_Valid() const;

    QList<QString> getBreadcrumbs() const;
    void setBreadcrumbs(const QList<QString> &breadcrumbs);
    bool is_breadcrumbs_Set() const;
    bool is_breadcrumbs_Valid() const;

    qint32 getUsdaCode() const;
    void setUsdaCode(const qint32 &usda_code);
    bool is_usda_code_Set() const;
    bool is_usda_code_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_clean_title;
    bool m_clean_title_isSet;
    bool m_clean_title_isValid;

    QString m_image;
    bool m_image_isSet;
    bool m_image_isValid;

    QString m_category;
    bool m_category_isSet;
    bool m_category_isValid;

    QList<QString> m_breadcrumbs;
    bool m_breadcrumbs_isSet;
    bool m_breadcrumbs_isValid;

    qint32 m_usda_code;
    bool m_usda_code_isSet;
    bool m_usda_code_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIClassifyGroceryProductBulk_200_response_inner)

#endif // OAIClassifyGroceryProductBulk_200_response_inner_H
