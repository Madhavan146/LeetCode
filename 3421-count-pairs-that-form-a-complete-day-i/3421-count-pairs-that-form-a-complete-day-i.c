int countCompleteDayPairs(int* a, int n) {


 
int i,c,j;
c=0;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    if((a[i]+a[j])%24==0)
    c++;
}   
return c;
}
    
