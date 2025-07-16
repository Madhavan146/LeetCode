/**
 * @param {number} num1
 * @param {number} num2
 * @return {number}
 */
var countOperations = function(a, b) {

k=0;
c=0;

i=0;
while(a>0 && b>0)
{

   if(a>b)
   {
    k=a-b;
    a=k;
    c++;
   }    
   else
   {
    k=b-a;
    b=k;
    c++;
   }
   i++;
}

    return c;
    
};