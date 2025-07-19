/**
 * @param {number[]} s
 * @return {number[]}
 */
var getConcatenation = function(s) {
k=[];
c=[];
    for(i=0;i<s.length;i++)
      c.push(s[i]);
       k= s.concat(c); 
        return k;    
};