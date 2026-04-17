/**
 * @param {number[]} n
 * @return {number}
 */
var firstMissingPositive = function(n) {
var c=0;
g=0;
var k,i,j;
var v=[];
    if(n.includes(1))
    {
        c=1;
    }
    if(c==0)
    {
        return 1;
    }

else if(c==1)
{
    n = n.sort((a, b) => a - b);
    n = [...new Set(n)];
}

for(i=0;i<n.length;i++)
{
    if(n[i]>0)
    {
        v.push(n[i]);
    }
}
k=v.length-1;
j=0;
for(i=v[0];i<v[k];i++)
{
  if(v[j]!=i){
    m=1;
    g=i;
    break;
  }
  j++;
}
if(g==0)
{
    g=v[k]+1;
}


return g;

};