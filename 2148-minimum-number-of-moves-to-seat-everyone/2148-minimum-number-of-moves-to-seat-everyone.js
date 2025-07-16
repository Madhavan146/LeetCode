/**
 * @param {number[]} a
 * @param {number[]} b
 * @return {number}
 */
var minMovesToSeat = function(a, b) {

let i,g,k
i=0;
g=0;
a.sort((a,b)=>a-b);
b.sort((a,b)=>a-b);
for(i=0;i<a.length;i++)
{
   
    k = Math.abs(b[i] - a[i]);
    g+=k;
}
  

return g;
    
};