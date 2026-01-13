/**
 * @param {number[]} a
 * @return {number}
 */
var maxProfit = function(a) {

k=0;
    for(i=0;i<a.length-1;i++){
       
       if(a[i+1]>a[i]){
          k+=a[i+1]-a[i];
       }
         

    }
               return k;
};