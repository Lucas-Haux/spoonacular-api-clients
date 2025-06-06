<?php
/**
 * GetComparableProducts200ResponseComparableProducts
 *
 * PHP version 7.4
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * spoonacular API
 *
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over thousands of recipes, thousands of ingredients, 800,000 food products, over 100,000 menu items, and restaurants. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 2.0.2
 * Contact: mail@spoonacular.com
 * Generated by: https://openapi-generator.tech
 * Generator version: 7.8.0-SNAPSHOT
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * GetComparableProducts200ResponseComparableProducts Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 * @implements \ArrayAccess<string, mixed>
 */
class GetComparableProducts200ResponseComparableProducts implements ModelInterface, ArrayAccess, \JsonSerializable
{
    public const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'getComparableProducts_200_response_comparableProducts';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'calories' => '\OpenAPI\Client\Model\ComparableProduct[]',
        'likes' => '\OpenAPI\Client\Model\ComparableProduct[]',
        'price' => '\OpenAPI\Client\Model\ComparableProduct[]',
        'protein' => '\OpenAPI\Client\Model\ComparableProduct[]',
        'spoonacular_score' => '\OpenAPI\Client\Model\ComparableProduct[]',
        'sugar' => '\OpenAPI\Client\Model\ComparableProduct[]'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      * @phpstan-var array<string, string|null>
      * @psalm-var array<string, string|null>
      */
    protected static $openAPIFormats = [
        'calories' => null,
        'likes' => null,
        'price' => null,
        'protein' => null,
        'spoonacular_score' => null,
        'sugar' => null
    ];

    /**
      * Array of nullable properties. Used for (de)serialization
      *
      * @var boolean[]
      */
    protected static array $openAPINullables = [
        'calories' => false,
        'likes' => false,
        'price' => false,
        'protein' => false,
        'spoonacular_score' => false,
        'sugar' => false
    ];

    /**
      * If a nullable field gets set to null, insert it here
      *
      * @var boolean[]
      */
    protected array $openAPINullablesSetToNull = [];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of nullable properties
     *
     * @return array
     */
    protected static function openAPINullables(): array
    {
        return self::$openAPINullables;
    }

    /**
     * Array of nullable field names deliberately set to null
     *
     * @return boolean[]
     */
    private function getOpenAPINullablesSetToNull(): array
    {
        return $this->openAPINullablesSetToNull;
    }

    /**
     * Setter - Array of nullable field names deliberately set to null
     *
     * @param boolean[] $openAPINullablesSetToNull
     */
    private function setOpenAPINullablesSetToNull(array $openAPINullablesSetToNull): void
    {
        $this->openAPINullablesSetToNull = $openAPINullablesSetToNull;
    }

    /**
     * Checks if a property is nullable
     *
     * @param string $property
     * @return bool
     */
    public static function isNullable(string $property): bool
    {
        return self::openAPINullables()[$property] ?? false;
    }

    /**
     * Checks if a nullable property is set to null.
     *
     * @param string $property
     * @return bool
     */
    public function isNullableSetToNull(string $property): bool
    {
        return in_array($property, $this->getOpenAPINullablesSetToNull(), true);
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'calories' => 'calories',
        'likes' => 'likes',
        'price' => 'price',
        'protein' => 'protein',
        'spoonacular_score' => 'spoonacular_score',
        'sugar' => 'sugar'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'calories' => 'setCalories',
        'likes' => 'setLikes',
        'price' => 'setPrice',
        'protein' => 'setProtein',
        'spoonacular_score' => 'setSpoonacularScore',
        'sugar' => 'setSugar'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'calories' => 'getCalories',
        'likes' => 'getLikes',
        'price' => 'getPrice',
        'protein' => 'getProtein',
        'spoonacular_score' => 'getSpoonacularScore',
        'sugar' => 'getSugar'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }


    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->setIfExists('calories', $data ?? [], null);
        $this->setIfExists('likes', $data ?? [], null);
        $this->setIfExists('price', $data ?? [], null);
        $this->setIfExists('protein', $data ?? [], null);
        $this->setIfExists('spoonacular_score', $data ?? [], null);
        $this->setIfExists('sugar', $data ?? [], null);
    }

    /**
    * Sets $this->container[$variableName] to the given data or to the given default Value; if $variableName
    * is nullable and its value is set to null in the $fields array, then mark it as "set to null" in the
    * $this->openAPINullablesSetToNull array
    *
    * @param string $variableName
    * @param array  $fields
    * @param mixed  $defaultValue
    */
    private function setIfExists(string $variableName, array $fields, $defaultValue): void
    {
        if (self::isNullable($variableName) && array_key_exists($variableName, $fields) && is_null($fields[$variableName])) {
            $this->openAPINullablesSetToNull[] = $variableName;
        }

        $this->container[$variableName] = $fields[$variableName] ?? $defaultValue;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['calories'] === null) {
            $invalidProperties[] = "'calories' can't be null";
        }
        if ($this->container['likes'] === null) {
            $invalidProperties[] = "'likes' can't be null";
        }
        if ($this->container['price'] === null) {
            $invalidProperties[] = "'price' can't be null";
        }
        if ($this->container['protein'] === null) {
            $invalidProperties[] = "'protein' can't be null";
        }
        if ($this->container['spoonacular_score'] === null) {
            $invalidProperties[] = "'spoonacular_score' can't be null";
        }
        if ($this->container['sugar'] === null) {
            $invalidProperties[] = "'sugar' can't be null";
        }
        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets calories
     *
     * @return \OpenAPI\Client\Model\ComparableProduct[]
     */
    public function getCalories()
    {
        return $this->container['calories'];
    }

    /**
     * Sets calories
     *
     * @param \OpenAPI\Client\Model\ComparableProduct[] $calories calories
     *
     * @return self
     */
    public function setCalories($calories)
    {
        if (is_null($calories)) {
            throw new \InvalidArgumentException('non-nullable calories cannot be null');
        }
        $this->container['calories'] = $calories;

        return $this;
    }

    /**
     * Gets likes
     *
     * @return \OpenAPI\Client\Model\ComparableProduct[]
     */
    public function getLikes()
    {
        return $this->container['likes'];
    }

    /**
     * Sets likes
     *
     * @param \OpenAPI\Client\Model\ComparableProduct[] $likes likes
     *
     * @return self
     */
    public function setLikes($likes)
    {
        if (is_null($likes)) {
            throw new \InvalidArgumentException('non-nullable likes cannot be null');
        }
        $this->container['likes'] = $likes;

        return $this;
    }

    /**
     * Gets price
     *
     * @return \OpenAPI\Client\Model\ComparableProduct[]
     */
    public function getPrice()
    {
        return $this->container['price'];
    }

    /**
     * Sets price
     *
     * @param \OpenAPI\Client\Model\ComparableProduct[] $price price
     *
     * @return self
     */
    public function setPrice($price)
    {
        if (is_null($price)) {
            throw new \InvalidArgumentException('non-nullable price cannot be null');
        }
        $this->container['price'] = $price;

        return $this;
    }

    /**
     * Gets protein
     *
     * @return \OpenAPI\Client\Model\ComparableProduct[]
     */
    public function getProtein()
    {
        return $this->container['protein'];
    }

    /**
     * Sets protein
     *
     * @param \OpenAPI\Client\Model\ComparableProduct[] $protein protein
     *
     * @return self
     */
    public function setProtein($protein)
    {
        if (is_null($protein)) {
            throw new \InvalidArgumentException('non-nullable protein cannot be null');
        }
        $this->container['protein'] = $protein;

        return $this;
    }

    /**
     * Gets spoonacular_score
     *
     * @return \OpenAPI\Client\Model\ComparableProduct[]
     */
    public function getSpoonacularScore()
    {
        return $this->container['spoonacular_score'];
    }

    /**
     * Sets spoonacular_score
     *
     * @param \OpenAPI\Client\Model\ComparableProduct[] $spoonacular_score spoonacular_score
     *
     * @return self
     */
    public function setSpoonacularScore($spoonacular_score)
    {
        if (is_null($spoonacular_score)) {
            throw new \InvalidArgumentException('non-nullable spoonacular_score cannot be null');
        }
        $this->container['spoonacular_score'] = $spoonacular_score;

        return $this;
    }

    /**
     * Gets sugar
     *
     * @return \OpenAPI\Client\Model\ComparableProduct[]
     */
    public function getSugar()
    {
        return $this->container['sugar'];
    }

    /**
     * Sets sugar
     *
     * @param \OpenAPI\Client\Model\ComparableProduct[] $sugar sugar
     *
     * @return self
     */
    public function setSugar($sugar)
    {
        if (is_null($sugar)) {
            throw new \InvalidArgumentException('non-nullable sugar cannot be null');
        }
        $this->container['sugar'] = $sugar;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset): bool
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed|null
     */
    #[\ReturnTypeWillChange]
    public function offsetGet($offset)
    {
        return $this->container[$offset] ?? null;
    }

    /**
     * Sets value based on offset.
     *
     * @param int|null $offset Offset
     * @param mixed    $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value): void
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset): void
    {
        unset($this->container[$offset]);
    }

    /**
     * Serializes the object to a value that can be serialized natively by json_encode().
     * @link https://www.php.net/manual/en/jsonserializable.jsonserialize.php
     *
     * @return mixed Returns data which can be serialized by json_encode(), which is a value
     * of any type other than a resource.
     */
    #[\ReturnTypeWillChange]
    public function jsonSerialize()
    {
       return ObjectSerializer::sanitizeForSerialization($this);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }

    /**
     * Gets a header-safe presentation of the object
     *
     * @return string
     */
    public function toHeaderValue()
    {
        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


