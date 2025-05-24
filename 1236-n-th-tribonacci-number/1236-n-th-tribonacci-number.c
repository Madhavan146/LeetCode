int tribonacci(int n) {

int i,a,b,c,d;
   if(n==0)
   return 0;
   else if(n==2)
   return 1;
   a=0;
   b=1;
   c=1;
   for(i=3;i<=n;i++)
   {
   d=a+b+c;
   a=b;
   b=c;
   c=d;
          } 
        return d;




    
}