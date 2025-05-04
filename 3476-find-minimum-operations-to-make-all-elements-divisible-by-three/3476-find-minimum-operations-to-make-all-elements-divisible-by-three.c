int minimumOperations(int* a, int n) {

int c,i,f;
c=0;
    for(i=0;i<n;i++)
    {
        f=0;
        a[i]=a[i]-1;
        if(a[i]%3==0)
        {
            c+=1;
            f=1;
        }
        if(a[i]%3!=0)
        {
            a[i]+=2;
        }
        if(a[i]%3==0 && f==0)
        {
            c+=1;
        }
    }
        return c;
}