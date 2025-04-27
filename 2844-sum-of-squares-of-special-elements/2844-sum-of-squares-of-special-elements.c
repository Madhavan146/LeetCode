int sumOfSquares(int* a, int n) {
int i,s,k,g;
g=0;
    for(i=0;i<n;i++)
    {
       if(n%(i+1)==0)
       {
         s=a[i]*a[i];
         g=g+s;
       }
    }
       return g;
}