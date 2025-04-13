bool detectCapitalUse(char* a) {
int i,s,n;
i=0;
    while(a[i]!=0)
    {
        i++;
    }
   n=i; 
    if(n==1)
    return true;

   i=0;
  for(i=0;i<n;i++)
  {
   if( a[i]>=97 && a[i]<=122 )
     s=0;
    else
    {
        s=1;
        break;
    }
  }

  if(s==0)
return true;
if(a[i]>=65 && a[i]<=90  && a[i+1]>=65 &&  a[i+1]<=90 )
{
    for(i=0;i<n;i++)
    {
      if( a[i]>=65 && a[i]<=90 ) 
        s=0;
      else
      {
       s=1;
       break;
      }
    }
}
if(a[i]>=65 && a[i]<=90  && a[i+1]>=97 &&  a[i+1]<=122 )
{
    for(i=1;i<n;i++)
    {
      if( a[i]>=97 && a[i]<=122 ) 
        s=0;
      else
      {
       s=1;
       break;
      }
    }
}
   if(s==0)
   return true;

   else
   return false;
}