/**
 * @param {number[]} a
 * @return {number}
 */
var countElements = function(a) {

let max,min,i,c;

max=Math.max(...a);
min=Math.min(...a);

c=0;
for(i=0;i<a.length;i++)
{
    if(a[i]!=max && a[i]!=min)
    {
        c+=1;
    }
}

       return c;
};