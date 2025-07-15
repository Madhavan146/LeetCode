int sumOfUnique(int* a, int n) {

  int i,j,k,c;
  k=0;
  for(i=0;i<n;i++)
  {
    c=0;
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
            c+=1;
        }
    }
    if(c<2)
    {
        k+=a[i];
    }
  }

       return k;
    
}