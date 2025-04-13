int minElement(int* a, int n) {
    int i,s,t,r;

for(i=0;i<n;i++)
{
    s=0;
while(a[i]!=0)
{
    r=a[i]%10;
    s=s+r;
    a[i]=a[i]/10;
}
   a[i]=s; 
}
 t=a[0];
 for(i=0;i<n;i++)
 {
    if(a[i]<t)
     t=a[i];
 }
    return t;
}