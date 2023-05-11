/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    
    var mappedarray= [];
    for (var i=0;i<arr.length;i++){
        mappedarray.push(fn (arr[i],i));
    }
    return mappedarray;
};