/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var count = init;
    function increment(){
        return ++count;
    }
    function reset(){
        return ( count=init);
    }
    function decrement(){
        return --count;
    }
   return {increment,reset,decrement} ;
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */