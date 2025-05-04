int findMin(int* a, int n) {


int s,i;

    s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<s)
        {
            s=a[i];
        }
    }
    return s;
    
}