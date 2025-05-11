bool threeConsecutiveOdds(int* a, int n) {

int i,f;

f=0;

    for(i=0;i<n-2;i++)
    {
        if(a[i]%2!=0 && a[i+1]%2!=0 && a[i+2]%2!=0)
        {
          f=1;
          break;
        }
        else
          f=0;

    }

    if(f==1)
    return true;
    else
     return false;
    
}