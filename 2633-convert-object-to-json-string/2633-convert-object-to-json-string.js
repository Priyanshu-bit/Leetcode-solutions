/**
 * @param {any} object
 * @return {string}
 */
var jsonStringify = function(object) {
  if (object === null) {
    return 'null';
  }
  if (typeof object === 'string') {
    // return the string value surrounded by double quotes.
    return '"' + object + '"';
  }
  if (typeof object === 'number' || typeof object === 'boolean') {
    // return its string representation.
    return String(object);
  }
  if (Array.isArray(object)) {
    // Recursively convert each item to a JSON string and join them with commas.
    const items = object.map(item => jsonStringify(item)).join(',');
    return '[' + items + ']';
  }
  // Recursively convert each value to a JSON string and pair it with the corresponding key.
  if (typeof object === 'object') {
    const keys = Object.keys(object);
    const items = keys.map(key => '"' + key + '":' + jsonStringify(object[key]));
    return '{' + items.join(',') + '}';
  }
};
