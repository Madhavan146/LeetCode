/**
 * @param {number[]} a
 * @return {number}
 */
var smallestEqual = function(a) {

let g,i,n;

g=-1;
i=0;
n=a.length;
 for(i=0;i<n;i++)
 {
    if(i%10 ==a[i])
    {
       g=i;
       break;
    }
 }

      return g;
    
};