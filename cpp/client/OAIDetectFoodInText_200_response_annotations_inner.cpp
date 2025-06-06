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

#include "OAIDetectFoodInText_200_response_annotations_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDetectFoodInText_200_response_annotations_inner::OAIDetectFoodInText_200_response_annotations_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDetectFoodInText_200_response_annotations_inner::OAIDetectFoodInText_200_response_annotations_inner() {
    this->initializeModel();
}

OAIDetectFoodInText_200_response_annotations_inner::~OAIDetectFoodInText_200_response_annotations_inner() {}

void OAIDetectFoodInText_200_response_annotations_inner::initializeModel() {

    m_annotation_isSet = false;
    m_annotation_isValid = false;

    m_image_isSet = false;
    m_image_isValid = false;

    m_tag_isSet = false;
    m_tag_isValid = false;
}

void OAIDetectFoodInText_200_response_annotations_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDetectFoodInText_200_response_annotations_inner::fromJsonObject(QJsonObject json) {

    m_annotation_isValid = ::OpenAPI::fromJsonValue(m_annotation, json[QString("annotation")]);
    m_annotation_isSet = !json[QString("annotation")].isNull() && m_annotation_isValid;

    m_image_isValid = ::OpenAPI::fromJsonValue(m_image, json[QString("image")]);
    m_image_isSet = !json[QString("image")].isNull() && m_image_isValid;

    m_tag_isValid = ::OpenAPI::fromJsonValue(m_tag, json[QString("tag")]);
    m_tag_isSet = !json[QString("tag")].isNull() && m_tag_isValid;
}

QString OAIDetectFoodInText_200_response_annotations_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDetectFoodInText_200_response_annotations_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_annotation_isSet) {
        obj.insert(QString("annotation"), ::OpenAPI::toJsonValue(m_annotation));
    }
    if (m_image_isSet) {
        obj.insert(QString("image"), ::OpenAPI::toJsonValue(m_image));
    }
    if (m_tag_isSet) {
        obj.insert(QString("tag"), ::OpenAPI::toJsonValue(m_tag));
    }
    return obj;
}

QString OAIDetectFoodInText_200_response_annotations_inner::getAnnotation() const {
    return m_annotation;
}
void OAIDetectFoodInText_200_response_annotations_inner::setAnnotation(const QString &annotation) {
    m_annotation = annotation;
    m_annotation_isSet = true;
}

bool OAIDetectFoodInText_200_response_annotations_inner::is_annotation_Set() const{
    return m_annotation_isSet;
}

bool OAIDetectFoodInText_200_response_annotations_inner::is_annotation_Valid() const{
    return m_annotation_isValid;
}

QString OAIDetectFoodInText_200_response_annotations_inner::getImage() const {
    return m_image;
}
void OAIDetectFoodInText_200_response_annotations_inner::setImage(const QString &image) {
    m_image = image;
    m_image_isSet = true;
}

bool OAIDetectFoodInText_200_response_annotations_inner::is_image_Set() const{
    return m_image_isSet;
}

bool OAIDetectFoodInText_200_response_annotations_inner::is_image_Valid() const{
    return m_image_isValid;
}

QString OAIDetectFoodInText_200_response_annotations_inner::getTag() const {
    return m_tag;
}
void OAIDetectFoodInText_200_response_annotations_inner::setTag(const QString &tag) {
    m_tag = tag;
    m_tag_isSet = true;
}

bool OAIDetectFoodInText_200_response_annotations_inner::is_tag_Set() const{
    return m_tag_isSet;
}

bool OAIDetectFoodInText_200_response_annotations_inner::is_tag_Valid() const{
    return m_tag_isValid;
}

bool OAIDetectFoodInText_200_response_annotations_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_annotation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_image_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tag_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDetectFoodInText_200_response_annotations_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_annotation_isValid && m_image_isValid && m_tag_isValid && true;
}

} // namespace OpenAPI
