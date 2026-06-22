/**
 * @param {number[]} a
 * @param {number} b
 * @return {boolean[]}
 */
var kidsWithCandies = function(a,b) {
k=Math.max(...a);
c=[];
for(i=0;i<a.length;i++)
{
    g=a[i]+b;
    
    if(g>k ||g==k)
    {
       
        c[i]=true;
    }
    else{
        c[i]=false;
    }
}
    return c;
    
};