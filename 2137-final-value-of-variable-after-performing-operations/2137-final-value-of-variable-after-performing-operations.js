/**
 * @param {string[]} a
 * @return {number}
 */
var finalValueAfterOperations = function(a) {

 let i,k;
k=0;
i=0;
    for(i=0;i<a.length;i++)
    {
       if(a[i]==="X++" || a[i]==="++X")
       {
           k+=1;
       }
     else if(a[i]==="X--" || a[i]==="--X")
     {
            k-=1;
     }
    }
         return k;
    
};