int commonFactors(int a, int b) {

int i,c;
c=0;
for(i=1;i<=a;i++)
{
    if(a%i==0 && b%i==0)
    c+=1;
} 
   return c;
}