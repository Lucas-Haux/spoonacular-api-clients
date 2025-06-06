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

#include "OAISearchGroceryProductsByUPC_200_response_nutrition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISearchGroceryProductsByUPC_200_response_nutrition::OAISearchGroceryProductsByUPC_200_response_nutrition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISearchGroceryProductsByUPC_200_response_nutrition::OAISearchGroceryProductsByUPC_200_response_nutrition() {
    this->initializeModel();
}

OAISearchGroceryProductsByUPC_200_response_nutrition::~OAISearchGroceryProductsByUPC_200_response_nutrition() {}

void OAISearchGroceryProductsByUPC_200_response_nutrition::initializeModel() {

    m_nutrients_isSet = false;
    m_nutrients_isValid = false;

    m_caloric_breakdown_isSet = false;
    m_caloric_breakdown_isValid = false;
}

void OAISearchGroceryProductsByUPC_200_response_nutrition::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISearchGroceryProductsByUPC_200_response_nutrition::fromJsonObject(QJsonObject json) {

    m_nutrients_isValid = ::OpenAPI::fromJsonValue(m_nutrients, json[QString("nutrients")]);
    m_nutrients_isSet = !json[QString("nutrients")].isNull() && m_nutrients_isValid;

    m_caloric_breakdown_isValid = ::OpenAPI::fromJsonValue(m_caloric_breakdown, json[QString("caloricBreakdown")]);
    m_caloric_breakdown_isSet = !json[QString("caloricBreakdown")].isNull() && m_caloric_breakdown_isValid;
}

QString OAISearchGroceryProductsByUPC_200_response_nutrition::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISearchGroceryProductsByUPC_200_response_nutrition::asJsonObject() const {
    QJsonObject obj;
    if (m_nutrients.size() > 0) {
        obj.insert(QString("nutrients"), ::OpenAPI::toJsonValue(m_nutrients));
    }
    if (m_caloric_breakdown.isSet()) {
        obj.insert(QString("caloricBreakdown"), ::OpenAPI::toJsonValue(m_caloric_breakdown));
    }
    return obj;
}

QSet<OAISearchGroceryProductsByUPC_200_response_nutrition_nutrients_inner> OAISearchGroceryProductsByUPC_200_response_nutrition::getNutrients() const {
    return m_nutrients;
}
void OAISearchGroceryProductsByUPC_200_response_nutrition::setNutrients(const QSet<OAISearchGroceryProductsByUPC_200_response_nutrition_nutrients_inner> &nutrients) {
    m_nutrients = nutrients;
    m_nutrients_isSet = true;
}

bool OAISearchGroceryProductsByUPC_200_response_nutrition::is_nutrients_Set() const{
    return m_nutrients_isSet;
}

bool OAISearchGroceryProductsByUPC_200_response_nutrition::is_nutrients_Valid() const{
    return m_nutrients_isValid;
}

OAISearchGroceryProductsByUPC_200_response_nutrition_caloricBreakdown OAISearchGroceryProductsByUPC_200_response_nutrition::getCaloricBreakdown() const {
    return m_caloric_breakdown;
}
void OAISearchGroceryProductsByUPC_200_response_nutrition::setCaloricBreakdown(const OAISearchGroceryProductsByUPC_200_response_nutrition_caloricBreakdown &caloric_breakdown) {
    m_caloric_breakdown = caloric_breakdown;
    m_caloric_breakdown_isSet = true;
}

bool OAISearchGroceryProductsByUPC_200_response_nutrition::is_caloric_breakdown_Set() const{
    return m_caloric_breakdown_isSet;
}

bool OAISearchGroceryProductsByUPC_200_response_nutrition::is_caloric_breakdown_Valid() const{
    return m_caloric_breakdown_isValid;
}

bool OAISearchGroceryProductsByUPC_200_response_nutrition::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_nutrients.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_caloric_breakdown.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISearchGroceryProductsByUPC_200_response_nutrition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_nutrients_isValid && m_caloric_breakdown_isValid && true;
}

} // namespace OpenAPI
