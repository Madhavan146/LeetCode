/**
 * @param {number} a
 * @param {number} b
 * @return {number}
 */
var findDelayedArrivalTime = function(a, b) {
    c=a+b;
    c=c%24;
    return c;
    
};