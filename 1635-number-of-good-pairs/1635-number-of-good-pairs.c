int numIdenticalPairs(int* a, int n) {


int i,c,j;
c=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            c+=1;
        }
    }
        return c;    
}