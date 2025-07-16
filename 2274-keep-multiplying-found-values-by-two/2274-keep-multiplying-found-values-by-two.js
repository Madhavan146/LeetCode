/**
 * @param {number[]} a
 * @param {number} t
 * @return {number}
 */
var findFinalValue = function(a, t) {


let i;

  for(i=0;i<a.length;i++)
  {
    if(a[i]==t)
    {
        t=a[i]*2;
        i=-1;
    }
  }
    return t;
    
};