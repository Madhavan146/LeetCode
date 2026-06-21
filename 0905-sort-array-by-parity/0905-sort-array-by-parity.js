/**
 * @param {number[]} a
 * @return {number[]}
 */
var sortArrayByParity = function(a) {

d=[];
k=0;

for(i=0;i<a.length;i++)
{
    if(a[i]%2==0)
    {
        d[k]=a[i];
        k++;
    }
}

for(i=0;i<a.length;i++)
{
    if(a[i]%2!=0)
    {
        d[k]=a[i];
        k++;
    }
}
 return d;


};