int climbStairs(int n) {

int i,c,a,b;


    if(n==1)
    return 1;
    
 a=1;
 b=1;

for(i=2;i<=n;i++)
{
    c=a+b;
    a=b;
    b=c;
}
    return c;
}