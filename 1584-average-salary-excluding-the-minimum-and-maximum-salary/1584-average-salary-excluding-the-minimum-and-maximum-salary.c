double average(int* a, int n) {

int k,f,s,g,t,c,i,r;
double l;

r=0;
g=0;
k=0;
f=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>f)
    {
        f=a[i];
    }
}

if(k==0)
{
    s=a[0];
    for(i=0;i<n;i++)
    {
        if( a[i]<s  )
        {
            s=a[i];
        }
    }
}
    for(i=0;i<n;i++)
    {
        if(a[i]!=f && a[i]!=s)
        {
            g=g+a[i];
            r=r+1;
        }
    }

 l = (double) g / r;


    
 return l;
    
}