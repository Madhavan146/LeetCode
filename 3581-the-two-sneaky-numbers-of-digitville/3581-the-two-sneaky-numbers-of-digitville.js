/**
 * @param {number[]} a
 * @return {number[]}
 */
var getSneakyNumbers = function(a) {

let b,n,k,i,j,c,f;

b=[];
n=a.length;
k=0;
 for(i=0;i<n;i++)
 {
    c=0;
    f=0;
    for(j=0;j<i;j++)
    {
        if(a[i]==a[j])
        {
            f=1;
            break;
        }
    }
   if(f==0)
   {
    for(j=0;j<n;j++)
    {
        if(a[i]==a[j])
        {
          c+=1;
        }
    }
      if(c==2)
      {
        b.push(a[i]);
        k+=1;
      }
     
   }

     if(k==2)
      {
        break;
      }


 }
             return b;
    
};