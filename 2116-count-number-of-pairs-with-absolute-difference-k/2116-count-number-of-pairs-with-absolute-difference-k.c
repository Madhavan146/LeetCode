int countKDifference(int* a, int n, int k) {
int i,j,c,t;
c=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(a[i]-a[j]==k||a[j]-a[i]==k )
               c=c+1;
        }
    if(c>0)
       t=c/2;
       return t;
}