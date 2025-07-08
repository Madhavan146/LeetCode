void merge(int* a, int n1, int m, int* b, int n2, int n) {


int c[1000],t,i,j,d;
d=0;
for(i=0;i<m;i++)
{
    c[d++]=a[i];
}
for(i=0;i<n2;i++)
{
    c[d++]=b[i];
  
}
for(i=0;i<d-1;i++)
{
    for(j=i+1;j<d;j++)
    {
    if(c[i]>c[j])
    {
         t=c[i];
         c[i]=c[j];
         c[j]=t;
    }
    }
}

for (i = 0; i < d; i++) {
        a[i] = c[i];
    }








    
}