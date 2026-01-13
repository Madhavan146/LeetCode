/**
 * @param {number[]} a
 * @return {number}   k,i,n,t,l
 */
var maxProfit = function(a) {

k=0;
n=a.length;
    for(i=0;i<n-1;i++){
         t=a[i+1];
         l=a[i];
       if(t>l){
          k+=t-l;
       }
         

    }
               return k;
};