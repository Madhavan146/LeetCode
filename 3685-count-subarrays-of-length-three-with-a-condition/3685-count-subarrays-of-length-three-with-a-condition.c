int countSubarrays(int* a, int n) {

    int i,c;
    c=0;

    for(i=0;i<n-2;i++)
    {
    if(a[i]+a[i+2]==a[i+1]/(2.0))
    c=c+1;
    }

    return c;
    
}