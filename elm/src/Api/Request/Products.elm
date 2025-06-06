{-
   spoonacular API
   The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

   The version of the OpenAPI document: 2.0.2
   Contact: mail@spoonacular.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Products exposing
    ( autocompleteProductSearch
    , classifyGroceryProduct, Locale(..), localeVariants
    , classifyGroceryProductBulk
    , getComparableProducts
    , getProductInformation
    , productNutritionByIDImage
    , productNutritionLabelImage
    , productNutritionLabelWidget
    , searchGroceryProducts
    , searchGroceryProductsByUPC
    , visualizeProductNutritionByID
    )

import Api
import Api.Data exposing (..)
import Dict
import Http
import Json.Decode
import Json.Encode
import File exposing (File)


type Locale
    = LocaleUS
    | LocaleGB


localeVariants : List Locale
localeVariants =
    [ LocaleUS
    , LocaleGB
    ]


stringFromLocale : Locale -> String
stringFromLocale model =
    case model of
        LocaleUS ->
            "en_US"

        LocaleGB ->
            "en_GB"



{-| Generate suggestions for grocery products based on a (partial) query. The matches will be found by looking in the title only.
-}
autocompleteProductSearch : String -> Maybe Int -> Api.Request Api.Data.AutocompleteProductSearch200Response
autocompleteProductSearch query_query number_query =
    Api.request
        "GET"
        "/food/products/suggest"
        []
        [ ( "query", Just <| identity query_query ), ( "number", Maybe.map String.fromInt number_query ) ]
        []
        Nothing
        Api.Data.autocompleteProductSearch200ResponseDecoder


{-| This endpoint allows you to match a packaged food to a basic category, e.g. a specific brand of milk to the category milk.
-}
classifyGroceryProduct : Maybe Locale -> Api.Data.ClassifyGroceryProductRequest -> Api.Request Api.Data.ClassifyGroceryProduct200Response
classifyGroceryProduct locale_query classifyGroceryProductRequest_body =
    Api.request
        "POST"
        "/food/products/classify"
        []
        [ ( "locale", Maybe.map stringFromLocale locale_query ) ]
        []
        (Maybe.map Http.jsonBody (Just (Api.Data.encodeClassifyGroceryProductRequest classifyGroceryProductRequest_body)))
        Api.Data.classifyGroceryProduct200ResponseDecoder


{-| Provide a set of product jsons, get back classified products.
-}
classifyGroceryProductBulk : Maybe String -> List Api.Data.ClassifyGroceryProductBulkRequestInner -> Api.Request (List Api.Data.ClassifyGroceryProductBulk200ResponseInner)
classifyGroceryProductBulk locale_query classifyGroceryProductBulkRequestInner_body =
    Api.request
        "POST"
        "/food/products/classifyBatch"
        []
        [ ( "locale", Maybe.map identity locale_query ) ]
        []
        (Maybe.map Http.jsonBody (Just (Json.Encode.list encodeClassifyGroceryProductBulkRequestInner classifyGroceryProductBulkRequestInner_body)))
        (Json.Decode.list Api.Data.classifyGroceryProductBulk200ResponseInnerDecoder)


{-| Find comparable products to the given one.
-}
getComparableProducts : String -> Api.Request Api.Data.GetComparableProducts200Response
getComparableProducts upc_path =
    Api.request
        "GET"
        "/food/products/upc/{upc}/comparable"
        [ ( "upc", identity upc_path ) ]
        []
        []
        Nothing
        Api.Data.getComparableProducts200ResponseDecoder


{-| Use a product id to get full information about a product, such as ingredients, nutrition, etc. The nutritional information is per serving.
-}
getProductInformation : Int -> Api.Request Api.Data.ProductInformation
getProductInformation id_path =
    Api.request
        "GET"
        "/food/products/{id}"
        [ ( "id", String.fromInt id_path ) ]
        []
        []
        Nothing
        Api.Data.productInformationDecoder


{-| Visualize a product's nutritional information as an image.
-}
productNutritionByIDImage : Int -> Api.Request File
productNutritionByIDImage id_path =
    Api.request
        "GET"
        "/food/products/{id}/nutritionWidget.png"
        [ ( "id", String.fromInt id_path ) ]
        []
        []
        Nothing
        File.decoder


{-| Get a product's nutrition label as an image.
-}
productNutritionLabelImage : Int -> Maybe Bool -> Maybe Bool -> Maybe Bool -> Api.Request File
productNutritionLabelImage id_path showOptionalNutrients_query showZeroValues_query showIngredients_query =
    Api.request
        "GET"
        "/food/products/{id}/nutritionLabel.png"
        [ ( "id", String.fromInt id_path ) ]
        [ ( "showOptionalNutrients", Maybe.map (\val -> if val then "true" else "false") showOptionalNutrients_query ), ( "showZeroValues", Maybe.map (\val -> if val then "true" else "false") showZeroValues_query ), ( "showIngredients", Maybe.map (\val -> if val then "true" else "false") showIngredients_query ) ]
        []
        Nothing
        File.decoder


{-| Get a product's nutrition label as an HTML widget.
-}
productNutritionLabelWidget : Int -> Maybe Bool -> Maybe Bool -> Maybe Bool -> Maybe Bool -> Api.Request String
productNutritionLabelWidget id_path defaultCss_query showOptionalNutrients_query showZeroValues_query showIngredients_query =
    Api.request
        "GET"
        "/food/products/{id}/nutritionLabel"
        [ ( "id", String.fromInt id_path ) ]
        [ ( "defaultCss", Maybe.map (\val -> if val then "true" else "false") defaultCss_query ), ( "showOptionalNutrients", Maybe.map (\val -> if val then "true" else "false") showOptionalNutrients_query ), ( "showZeroValues", Maybe.map (\val -> if val then "true" else "false") showZeroValues_query ), ( "showIngredients", Maybe.map (\val -> if val then "true" else "false") showIngredients_query ) ]
        []
        Nothing
        Json.Decode.string


{-| Search packaged food products, such as frozen pizza or Greek yogurt.
-}
searchGroceryProducts : String -> Maybe Float -> Maybe Float -> Maybe Float -> Maybe Float -> Maybe Float -> Maybe Float -> Maybe Float -> Maybe Float -> Maybe Bool -> Maybe Int -> Maybe Int -> Api.Request Api.Data.SearchGroceryProducts200Response
searchGroceryProducts query_query minCalories_query maxCalories_query minCarbs_query maxCarbs_query minProtein_query maxProtein_query minFat_query maxFat_query addProductInformation_query offset_query number_query =
    Api.request
        "GET"
        "/food/products/search"
        []
        [ ( "query", Just <| identity query_query ), ( "minCalories", Maybe.map String.fromFloat minCalories_query ), ( "maxCalories", Maybe.map String.fromFloat maxCalories_query ), ( "minCarbs", Maybe.map String.fromFloat minCarbs_query ), ( "maxCarbs", Maybe.map String.fromFloat maxCarbs_query ), ( "minProtein", Maybe.map String.fromFloat minProtein_query ), ( "maxProtein", Maybe.map String.fromFloat maxProtein_query ), ( "minFat", Maybe.map String.fromFloat minFat_query ), ( "maxFat", Maybe.map String.fromFloat maxFat_query ), ( "addProductInformation", Maybe.map (\val -> if val then "true" else "false") addProductInformation_query ), ( "offset", Maybe.map String.fromInt offset_query ), ( "number", Maybe.map String.fromInt number_query ) ]
        []
        Nothing
        Api.Data.searchGroceryProducts200ResponseDecoder


{-| Get information about a packaged food using its UPC.
-}
searchGroceryProductsByUPC : String -> Api.Request Api.Data.SearchGroceryProductsByUPC200Response
searchGroceryProductsByUPC upc_path =
    Api.request
        "GET"
        "/food/products/upc/{upc}"
        [ ( "upc", identity upc_path ) ]
        []
        []
        Nothing
        Api.Data.searchGroceryProductsByUPC200ResponseDecoder


{-| Visualize a product's nutritional information as HTML including CSS.
-}
visualizeProductNutritionByID : Int -> Maybe Bool -> Api.Request String
visualizeProductNutritionByID id_path defaultCss_query =
    Api.request
        "GET"
        "/food/products/{id}/nutritionWidget"
        [ ( "id", String.fromInt id_path ) ]
        [ ( "defaultCss", Maybe.map (\val -> if val then "true" else "false") defaultCss_query ) ]
        []
        Nothing
        Json.Decode.string

