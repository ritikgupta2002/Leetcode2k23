/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
	return function(x) {
       return functions.reduceRight((acc,fun)=>{
        return fun(acc);
       },x);
    } 
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */