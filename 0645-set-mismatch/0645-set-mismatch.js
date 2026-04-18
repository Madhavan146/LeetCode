/**
 * @param {number[]} n
 * @return {number[]}
 */
var findErrorNums = function(n) {
b=[];
k=0;
    for(i=1;i<=n.length;i++)
    {
       if(n.includes(i))
       {
        f=1;
       }
       else
       {
        b[1]=i;
        break;
       }
    }

    for(i=0;i<n.length;i++)
    {
        c=1;
        for(j=0;j<i;j++)
        {
           if(n[i]==n[j])
           {
              c++;
              b[0]=n[i];
              break;
           }
        }
    }

     return b; 
};