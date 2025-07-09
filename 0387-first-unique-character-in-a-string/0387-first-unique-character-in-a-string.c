int firstUniqChar(char* a) {

int i,n,j,f,t,c;

i=0;
n=0;
f=0;
t=-1;
while(a[i]!= 0 )
{
    n++;
    i++;
}

for(i=0;i<n;i++)
{
    f=1;
    for(j=0;j<i;j++)
    {
       if(a[i]==a[j])
       {
        f=0;
        break;
       }
    }
if(f==1)
{
    c=0;
  for(j=i;j<n;j++)
  {
    if(a[i]==a[j])
    {
        c++;
    }
  }
      if(c==1)
      {
        t=i;
        break;
       }
}

      
}
return t;
}       
