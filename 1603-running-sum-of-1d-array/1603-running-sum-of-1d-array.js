/**
 * @param {number[]} s
 * @return {number[]}
 */
var runningSum = function(s) {
b=[];
k=0;
          for(i=0;i<s.length;i++)
          {
            if(i==0)
            {
                k=s[i];
            }
            else
            {
            k=k+s[i];
            }
          //  k=parseInt(k);
            b.push(k);
          }
    return b;  
};