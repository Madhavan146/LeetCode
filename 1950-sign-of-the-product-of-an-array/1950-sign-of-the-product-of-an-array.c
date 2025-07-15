int arraySign(int* a, int n) {



int r,k,f,i,j;
k=0;
f=0;
for(i=0;i<n;i++)
{
    if(a[i]==0)
    {
        f=1;
        r=0;
        break;
    }
}
if(f==0)
{
for(i=0;i<n;i++)
{
    if(a[i]<0)
    {
        k+=1;
    }
}
}
if(f==0)
{
    if(k%2==0)
    {
        r=1;
    }
    else
    {
        r=-1;
    }
}
      return r;  
}