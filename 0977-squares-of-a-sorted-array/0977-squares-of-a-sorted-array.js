/**
 * @param {number[]} a
 * @return {number[]}
 */
var sortedSquares = function(a) {


for(i=0;i<a.length;i++)
{
    if(a[i]<0)
    {
        a[i]=a[i]*-1;
    }
}

for(i=0;i<a.length;i++)
{
    a[i]=a[i]*a[i];
}

a.sort((j,b)=>j-b);

return a;

    
};