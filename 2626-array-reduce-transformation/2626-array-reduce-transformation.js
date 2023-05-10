/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */

    var reduce = function(nums, fn, init) {
    let val=init;
    for(var x of nums)
    {
        val=fn(val,x);
    }
    return val;
    };