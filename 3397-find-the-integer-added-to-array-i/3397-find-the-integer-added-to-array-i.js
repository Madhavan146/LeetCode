/**
 * @param {number[]} a
 * @param {number[]} b
 * @return {number}
 */
var addedInteger = function(a, b) {

c=0;
d=0;
n=a.length;
for(i=0;i<n;i++)
{
    c+=a[i];
}
for(i=0;i<n;i++)
{
    d+=b[i];
}

if(c==d)
{
    k=0;
}



if(c<d)
{
     k = (d - c)/ n;
}
if(d<c)
{
     k = (d - c);
     k=k/n;  
}

   return k;
    
};