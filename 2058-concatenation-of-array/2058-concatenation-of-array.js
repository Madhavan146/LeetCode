/**
 * @param {number[]} s
 * @return {number[]}
 */
var getConcatenation = function(s) {

let k,b,c,i;

k=[];
b=[];
c=[];
    for(i=0;i<s.length;i++)
    {
      b.push(s[i]);
      c.push(s[i]);
    }
       k= b.concat(c); 
        return k;
    
};