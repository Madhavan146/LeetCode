int missingNumber(int* a, int n) {
  int i,j,c,s;
  s=1;
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
  if(a[i]>a[j])
  {
    c=a[i];
    a[i]=a[j];
    a[j]=c;
  }
}
}
  for(i=0;i<n;i++)
  {
    if(a[i]!=i)
    {
        s=0;
        break;
    }
  }
  if(s==0)
    return i;

else
    return n;

       return 0;
}