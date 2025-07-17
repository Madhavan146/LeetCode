/**
 * @param {number} a
 * @return {number}
 */
var alternateDigitSum = function(a) {

a=a.toString();
n=a.length;
k=0;

for(i=0;i<n;i++)
{
    d=parseInt(a[i])
    if(i%2==0)
    {
        k+=d;
    }
    else
    {
        k-=d;
    }
}

    return k;
};