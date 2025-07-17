/**
 * @param {number[]} a
 * @return {number[]}
 */
var transformArray = function(a) {

let n,b,e,o,i;

n=a.length;
b=[];
e=0;
o=0;
for(i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
        e+=1;
    }
    else
    {
        o+=1;
    }
}
for(i=0;i<e;i++)
{
    b.push(0);
}
for(i=e;i<n;i++)
{
    b.push(1);
}
       return b ;
    
};