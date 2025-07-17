/**
 * @param {number[]} a
 * @return {boolean}
 */
var isArraySpecial = function (a) {

n=a.length;

e=5;
o=6;

if(a[0]%2==0)
{
    s=e;
}
else
{
    s=o;
}

if(s==e)
{
for(i=0;i<n;i++)
{
  if(i%2==0)
    {
        if(a[i]%2==0)
        {
         f=0;
        }
        else
        {
            f=1;
            break;
        }
    }

    else if(i%2!=0)
    {
        if(a[i]%2!=0)
        {
            f=0;
        }
        else
        {
            f=1;
            break;
        }
    }
}
}
if(s==o)
{
    for(i=0;i<n;i++)
{
  if(i%2==0)
    {
        if(a[i]%2!=0)
        {
         f=0;
        }
        else
        {
            f=1;
            break;
        }
    }

    else if(i%2!=0)
    {
        if(a[i]%2==0)
        {
            f=0;
        }
        else
        {
            f=1;
            break;
        }

}


}


}

if(f==0 || n==1)
return true;

else
return false;




};