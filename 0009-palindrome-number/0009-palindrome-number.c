bool isPalindrome(int x) {
int y,r;
long s;
 y=x;
 s=0;
 if(x<0)
    return false;
    else
    {
    while(x!=0)
    {
     r=x%10;
     s=s*10 +r;
     x=x/10;
    }
    if(s==y)
    return true;   
    else
    return false;
    }
}