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

#include "OAIComputeGlycemicLoad_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIComputeGlycemicLoad_200_response::OAIComputeGlycemicLoad_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIComputeGlycemicLoad_200_response::OAIComputeGlycemicLoad_200_response() {
    this->initializeModel();
}

OAIComputeGlycemicLoad_200_response::~OAIComputeGlycemicLoad_200_response() {}

void OAIComputeGlycemicLoad_200_response::initializeModel() {

    m_total_glycemic_load_isSet = false;
    m_total_glycemic_load_isValid = false;

    m_ingredients_isSet = false;
    m_ingredients_isValid = false;
}

void OAIComputeGlycemicLoad_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIComputeGlycemicLoad_200_response::fromJsonObject(QJsonObject json) {

    m_total_glycemic_load_isValid = ::OpenAPI::fromJsonValue(m_total_glycemic_load, json[QString("totalGlycemicLoad")]);
    m_total_glycemic_load_isSet = !json[QString("totalGlycemicLoad")].isNull() && m_total_glycemic_load_isValid;

    m_ingredients_isValid = ::OpenAPI::fromJsonValue(m_ingredients, json[QString("ingredients")]);
    m_ingredients_isSet = !json[QString("ingredients")].isNull() && m_ingredients_isValid;
}

QString OAIComputeGlycemicLoad_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIComputeGlycemicLoad_200_response::asJsonObject() const {
    QJsonObject obj;
    if (m_total_glycemic_load_isSet) {
        obj.insert(QString("totalGlycemicLoad"), ::OpenAPI::toJsonValue(m_total_glycemic_load));
    }
    if (m_ingredients.size() > 0) {
        obj.insert(QString("ingredients"), ::OpenAPI::toJsonValue(m_ingredients));
    }
    return obj;
}

double OAIComputeGlycemicLoad_200_response::getTotalGlycemicLoad() const {
    return m_total_glycemic_load;
}
void OAIComputeGlycemicLoad_200_response::setTotalGlycemicLoad(const double &total_glycemic_load) {
    m_total_glycemic_load = total_glycemic_load;
    m_total_glycemic_load_isSet = true;
}

bool OAIComputeGlycemicLoad_200_response::is_total_glycemic_load_Set() const{
    return m_total_glycemic_load_isSet;
}

bool OAIComputeGlycemicLoad_200_response::is_total_glycemic_load_Valid() const{
    return m_total_glycemic_load_isValid;
}

QSet<OAIComputeGlycemicLoad_200_response_ingredients_inner> OAIComputeGlycemicLoad_200_response::getIngredients() const {
    return m_ingredients;
}
void OAIComputeGlycemicLoad_200_response::setIngredients(const QSet<OAIComputeGlycemicLoad_200_response_ingredients_inner> &ingredients) {
    m_ingredients = ingredients;
    m_ingredients_isSet = true;
}

bool OAIComputeGlycemicLoad_200_response::is_ingredients_Set() const{
    return m_ingredients_isSet;
}

bool OAIComputeGlycemicLoad_200_response::is_ingredients_Valid() const{
    return m_ingredients_isValid;
}

bool OAIComputeGlycemicLoad_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_glycemic_load_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ingredients.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIComputeGlycemicLoad_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_total_glycemic_load_isValid && m_ingredients_isValid && true;
}

} // namespace OpenAPI
