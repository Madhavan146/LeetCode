int findPeakElement(int* a, int n) {
int g,i,k;
g=a[0];
 
for(i=0;i<n;i++)
{
    if(a[i]>g)
    {
      g=a[i];
      k=i;
    }
}
      return k; 
}