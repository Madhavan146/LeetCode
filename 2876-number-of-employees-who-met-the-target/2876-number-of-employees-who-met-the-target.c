int numberOfEmployeesWhoMetTarget(int* a, int n, int t) {


int i,c;
c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=t)
        c+=1;
    }
     return c;  
}