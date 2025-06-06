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

#include "OAISearchGroceryProductsByUPC_200_response_servings.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISearchGroceryProductsByUPC_200_response_servings::OAISearchGroceryProductsByUPC_200_response_servings(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISearchGroceryProductsByUPC_200_response_servings::OAISearchGroceryProductsByUPC_200_response_servings() {
    this->initializeModel();
}

OAISearchGroceryProductsByUPC_200_response_servings::~OAISearchGroceryProductsByUPC_200_response_servings() {}

void OAISearchGroceryProductsByUPC_200_response_servings::initializeModel() {

    m_number_isSet = false;
    m_number_isValid = false;

    m_size_isSet = false;
    m_size_isValid = false;

    m_unit_isSet = false;
    m_unit_isValid = false;
}

void OAISearchGroceryProductsByUPC_200_response_servings::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISearchGroceryProductsByUPC_200_response_servings::fromJsonObject(QJsonObject json) {

    m_number_isValid = ::OpenAPI::fromJsonValue(m_number, json[QString("number")]);
    m_number_isSet = !json[QString("number")].isNull() && m_number_isValid;

    m_size_isValid = ::OpenAPI::fromJsonValue(m_size, json[QString("size")]);
    m_size_isSet = !json[QString("size")].isNull() && m_size_isValid;

    m_unit_isValid = ::OpenAPI::fromJsonValue(m_unit, json[QString("unit")]);
    m_unit_isSet = !json[QString("unit")].isNull() && m_unit_isValid;
}

QString OAISearchGroceryProductsByUPC_200_response_servings::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISearchGroceryProductsByUPC_200_response_servings::asJsonObject() const {
    QJsonObject obj;
    if (m_number_isSet) {
        obj.insert(QString("number"), ::OpenAPI::toJsonValue(m_number));
    }
    if (m_size_isSet) {
        obj.insert(QString("size"), ::OpenAPI::toJsonValue(m_size));
    }
    if (m_unit_isSet) {
        obj.insert(QString("unit"), ::OpenAPI::toJsonValue(m_unit));
    }
    return obj;
}

double OAISearchGroceryProductsByUPC_200_response_servings::getNumber() const {
    return m_number;
}
void OAISearchGroceryProductsByUPC_200_response_servings::setNumber(const double &number) {
    m_number = number;
    m_number_isSet = true;
}

bool OAISearchGroceryProductsByUPC_200_response_servings::is_number_Set() const{
    return m_number_isSet;
}

bool OAISearchGroceryProductsByUPC_200_response_servings::is_number_Valid() const{
    return m_number_isValid;
}

double OAISearchGroceryProductsByUPC_200_response_servings::getSize() const {
    return m_size;
}
void OAISearchGroceryProductsByUPC_200_response_servings::setSize(const double &size) {
    m_size = size;
    m_size_isSet = true;
}

bool OAISearchGroceryProductsByUPC_200_response_servings::is_size_Set() const{
    return m_size_isSet;
}

bool OAISearchGroceryProductsByUPC_200_response_servings::is_size_Valid() const{
    return m_size_isValid;
}

QString OAISearchGroceryProductsByUPC_200_response_servings::getUnit() const {
    return m_unit;
}
void OAISearchGroceryProductsByUPC_200_response_servings::setUnit(const QString &unit) {
    m_unit = unit;
    m_unit_isSet = true;
}

bool OAISearchGroceryProductsByUPC_200_response_servings::is_unit_Set() const{
    return m_unit_isSet;
}

bool OAISearchGroceryProductsByUPC_200_response_servings::is_unit_Valid() const{
    return m_unit_isValid;
}

bool OAISearchGroceryProductsByUPC_200_response_servings::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_unit_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISearchGroceryProductsByUPC_200_response_servings::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_number_isValid && m_size_isValid && m_unit_isValid && true;
}

} // namespace OpenAPI
