int countPairs(int* a, int n, int t) {


int i,j,k,c;
c=0;
for(i=0;i<n-1;i++)
{
    k=0;
  for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            k=i*j;       
        if(k%t==0)
            c+=1;
        }
    }
}
        return c;

        return 0;
}