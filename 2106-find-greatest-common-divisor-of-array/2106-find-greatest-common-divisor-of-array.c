int findGCD(int* a, int n) {

int l,s,t,i;
l=a[0];
s=a[0];
t=0;
  for(i=0;i<n;i++)
  {
    if(a[i]>l)
     l=a[i];
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<s)
    s=a[i];
  }
     for(i=2;i<=s;i++)
     {
        if(s%i==0  && l%i==0)
          t=i;
     }
     if(t==0)
     {
        t=t+1;
     }

     return t;

}