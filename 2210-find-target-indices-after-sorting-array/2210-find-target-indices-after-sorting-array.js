/**
 * @param {number[]} a
 * @param {number} t
 * @return {number[]}
 */
var targetIndices = function(a, t) {

let b,i,j;

 b=[];
i=0;
j=0;
 a.sort((a,b)=>a-b);

     for(i=0;i<a.length;i++)
     {
        if(a[i]==t)
        {
            b[j]=i;
            j++;
        }
     }
 
         return b;
};