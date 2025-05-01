int findFinalValue(int* a, int n, int t) {

int i;

    for(i=0;i<n;i++)
    {
       if(a[i]==t)
         {
            t=t*2;
            i=-1;
         }
    }

       return t;
    
}