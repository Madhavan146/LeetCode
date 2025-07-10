int findMaxConsecutiveOnes(int* a, int n) {

int i,j,k,c,f;

  k=0;
  c=0;
  for(i=0;i<n;i++)
  {
    f=1;
    if(a[i]== 1 )
    {
        c+=1;
    }
     if(a[i]!= 1 || i==n-1)
    {
         f=0;
        if(c>k)
        {
            k=c;
        }
        c=0;
    }



  }

    
       return k; 
}