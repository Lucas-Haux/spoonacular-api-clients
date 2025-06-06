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

#include "OAIGetShoppingList_200_response_aisles_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGetShoppingList_200_response_aisles_inner::OAIGetShoppingList_200_response_aisles_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGetShoppingList_200_response_aisles_inner::OAIGetShoppingList_200_response_aisles_inner() {
    this->initializeModel();
}

OAIGetShoppingList_200_response_aisles_inner::~OAIGetShoppingList_200_response_aisles_inner() {}

void OAIGetShoppingList_200_response_aisles_inner::initializeModel() {

    m_aisle_isSet = false;
    m_aisle_isValid = false;

    m_items_isSet = false;
    m_items_isValid = false;
}

void OAIGetShoppingList_200_response_aisles_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGetShoppingList_200_response_aisles_inner::fromJsonObject(QJsonObject json) {

    m_aisle_isValid = ::OpenAPI::fromJsonValue(m_aisle, json[QString("aisle")]);
    m_aisle_isSet = !json[QString("aisle")].isNull() && m_aisle_isValid;

    m_items_isValid = ::OpenAPI::fromJsonValue(m_items, json[QString("items")]);
    m_items_isSet = !json[QString("items")].isNull() && m_items_isValid;
}

QString OAIGetShoppingList_200_response_aisles_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGetShoppingList_200_response_aisles_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_aisle_isSet) {
        obj.insert(QString("aisle"), ::OpenAPI::toJsonValue(m_aisle));
    }
    if (m_items.size() > 0) {
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(m_items));
    }
    return obj;
}

QString OAIGetShoppingList_200_response_aisles_inner::getAisle() const {
    return m_aisle;
}
void OAIGetShoppingList_200_response_aisles_inner::setAisle(const QString &aisle) {
    m_aisle = aisle;
    m_aisle_isSet = true;
}

bool OAIGetShoppingList_200_response_aisles_inner::is_aisle_Set() const{
    return m_aisle_isSet;
}

bool OAIGetShoppingList_200_response_aisles_inner::is_aisle_Valid() const{
    return m_aisle_isValid;
}

QSet<OAIGetShoppingList_200_response_aisles_inner_items_inner> OAIGetShoppingList_200_response_aisles_inner::getItems() const {
    return m_items;
}
void OAIGetShoppingList_200_response_aisles_inner::setItems(const QSet<OAIGetShoppingList_200_response_aisles_inner_items_inner> &items) {
    m_items = items;
    m_items_isSet = true;
}

bool OAIGetShoppingList_200_response_aisles_inner::is_items_Set() const{
    return m_items_isSet;
}

bool OAIGetShoppingList_200_response_aisles_inner::is_items_Valid() const{
    return m_items_isValid;
}

bool OAIGetShoppingList_200_response_aisles_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_aisle_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_items.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGetShoppingList_200_response_aisles_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_aisle_isValid && true;
}

} // namespace OpenAPI
