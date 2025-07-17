/**
 * @param {string} s
 * @return {boolean}
 */
var doesAliceWin = function(s) {


for(i=0;i<s.length;i++)
{
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
    {
        f=0;
        break;
    }
    else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' )
    {
        f=0;
        break;
    }
    else
    {
        f=1;
        
    }
}

if(f==0)
return true;
else
return false;
    
};