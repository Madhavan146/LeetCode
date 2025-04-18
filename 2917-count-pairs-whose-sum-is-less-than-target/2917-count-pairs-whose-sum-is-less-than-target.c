int countPairs(int* a, int n, int t) {

int c,i,j,s;
c=0;
 for(i=0;i<n;i++)
 {
    for(j=i+1;j<n;j++)
    {
        s=a[i]+a[j];
    if(s<t)
     c+=1;
    }
 }
     return c;   
}