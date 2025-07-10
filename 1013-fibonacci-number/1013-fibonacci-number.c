int fib(int n){


int a,b,c,i;

if(n==0)
return 0;

    a=1;
    b=0;
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
           return c;
}