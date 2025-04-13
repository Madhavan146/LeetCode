bool isMonotonic(int* a, int n) {
int i,c,t,s;
i=0;
t=0;
c=0;
for(i=0;i<n-1;i++)
{
    if(a[i]==a[i+1])
     s=0;
     else
      {
        s=1;
        break;
      }
}
if (s==0)
  return true;


while(t==0)
{
    if(a[i]>a[i+1]) 
       {
        t=1;
        break;
    }
    if(a[i]<a[i+1])
    {
        t=2;
        break;
    }
    if(a[i]==a[i+1])
    {
        i+=1;
    }   
}
if(t==1)
{
    for(i=0;i<n-1;i++)
    {
        if(a[i]>=a[i+1])
        c=0;
    else
    {
        c=1;
        break;
    }
}
}
if(t==2)
{
    for(i=0;i<n-1;i++)
    {
      if(a[i]<=a[i+1])  
        c=0;
    else
    {
        c=1;
        break;
    }
    }
}
if(c==0 )
  return true;
else
  return false;
  return 0;   
}