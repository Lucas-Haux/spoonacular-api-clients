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

#include "OAIGetComparableProducts_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGetComparableProducts_200_response::OAIGetComparableProducts_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGetComparableProducts_200_response::OAIGetComparableProducts_200_response() {
    this->initializeModel();
}

OAIGetComparableProducts_200_response::~OAIGetComparableProducts_200_response() {}

void OAIGetComparableProducts_200_response::initializeModel() {

    m_comparable_products_isSet = false;
    m_comparable_products_isValid = false;
}

void OAIGetComparableProducts_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGetComparableProducts_200_response::fromJsonObject(QJsonObject json) {

    m_comparable_products_isValid = ::OpenAPI::fromJsonValue(m_comparable_products, json[QString("comparableProducts")]);
    m_comparable_products_isSet = !json[QString("comparableProducts")].isNull() && m_comparable_products_isValid;
}

QString OAIGetComparableProducts_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGetComparableProducts_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_comparable_products.isSet()) {
        obj.insert(QString("comparableProducts"), ::OpenAPI::toJsonValue(m_comparable_products));
    }
    return obj;
}

OAIGetComparableProducts_200_response_comparableProducts OAIGetComparableProducts_200_response::getComparableProducts() const {
    return m_comparable_products;
}
void OAIGetComparableProducts_200_response::setComparableProducts(const OAIGetComparableProducts_200_response_comparableProducts &comparable_products) {
    m_comparable_products = comparable_products;
    m_comparable_products_isSet = true;
}

bool OAIGetComparableProducts_200_response::is_comparable_products_Set() const{
    return m_comparable_products_isSet;
}

bool OAIGetComparableProducts_200_response::is_comparable_products_Valid() const{
    return m_comparable_products_isValid;
}

bool OAIGetComparableProducts_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_comparable_products.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGetComparableProducts_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_comparable_products_isValid && true;
}

} // namespace OpenAPI
