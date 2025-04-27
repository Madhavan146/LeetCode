int minOperations(int* a, int n, int k) {

int i,s,t;
    s=0;
   for(i=0;i<n;i++)
   {
       s=s+a[i];
   }
    t=s%k;

    return t;
}