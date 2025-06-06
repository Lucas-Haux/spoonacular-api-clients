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

#include "OAIGetIngredientSubstitutes_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGetIngredientSubstitutes_200_response::OAIGetIngredientSubstitutes_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGetIngredientSubstitutes_200_response::OAIGetIngredientSubstitutes_200_response() {
    this->initializeModel();
}

OAIGetIngredientSubstitutes_200_response::~OAIGetIngredientSubstitutes_200_response() {}

void OAIGetIngredientSubstitutes_200_response::initializeModel() {

    m_ingredient_isSet = false;
    m_ingredient_isValid = false;

    m_substitutes_isSet = false;
    m_substitutes_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;
}

void OAIGetIngredientSubstitutes_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGetIngredientSubstitutes_200_response::fromJsonObject(QJsonObject json) {

    m_ingredient_isValid = ::OpenAPI::fromJsonValue(m_ingredient, json[QString("ingredient")]);
    m_ingredient_isSet = !json[QString("ingredient")].isNull() && m_ingredient_isValid;

    m_substitutes_isValid = ::OpenAPI::fromJsonValue(m_substitutes, json[QString("substitutes")]);
    m_substitutes_isSet = !json[QString("substitutes")].isNull() && m_substitutes_isValid;

    m_message_isValid = ::OpenAPI::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;
}

QString OAIGetIngredientSubstitutes_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGetIngredientSubstitutes_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_ingredient_isSet) {
        obj.insert(QString("ingredient"), ::OpenAPI::toJsonValue(m_ingredient));
    }
    if (m_substitutes.size() > 0) {
        obj.insert(QString("substitutes"), ::OpenAPI::toJsonValue(m_substitutes));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::OpenAPI::toJsonValue(m_message));
    }
    return obj;
}

QString OAIGetIngredientSubstitutes_200_response::getIngredient() const {
    return m_ingredient;
}
void OAIGetIngredientSubstitutes_200_response::setIngredient(const QString &ingredient) {
    m_ingredient = ingredient;
    m_ingredient_isSet = true;
}

bool OAIGetIngredientSubstitutes_200_response::is_ingredient_Set() const{
    return m_ingredient_isSet;
}

bool OAIGetIngredientSubstitutes_200_response::is_ingredient_Valid() const{
    return m_ingredient_isValid;
}

QList<QString> OAIGetIngredientSubstitutes_200_response::getSubstitutes() const {
    return m_substitutes;
}
void OAIGetIngredientSubstitutes_200_response::setSubstitutes(const QList<QString> &substitutes) {
    m_substitutes = substitutes;
    m_substitutes_isSet = true;
}

bool OAIGetIngredientSubstitutes_200_response::is_substitutes_Set() const{
    return m_substitutes_isSet;
}

bool OAIGetIngredientSubstitutes_200_response::is_substitutes_Valid() const{
    return m_substitutes_isValid;
}

QString OAIGetIngredientSubstitutes_200_response::getMessage() const {
    return m_message;
}
void OAIGetIngredientSubstitutes_200_response::setMessage(const QString &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIGetIngredientSubstitutes_200_response::is_message_Set() const{
    return m_message_isSet;
}

bool OAIGetIngredientSubstitutes_200_response::is_message_Valid() const{
    return m_message_isValid;
}

bool OAIGetIngredientSubstitutes_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_ingredient_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_substitutes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGetIngredientSubstitutes_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_ingredient_isValid && m_substitutes_isValid && m_message_isValid && true;
}

} // namespace OpenAPI
