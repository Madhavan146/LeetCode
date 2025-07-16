int finalValueAfterOperations(char** a, int n) {


 int k,i;

k=0;
 for(i=0;i<n;i++)
 {
   // if(strcmp(a[i]=="--x")==0 || strcmp(a[i]=="x--")==0)
   if(strcmp(a[i], "--X") == 0 || strcmp(a[i], "X--") == 0)
    {
        k=k-1;
    }
  // else if(strcmp(a[i]=="x++")==0 || strcmp(a[i]=="++x")==0)
  else if(strcmp(a[i], "++X") == 0 || strcmp(a[i], "X++") == 0)
    {
        k=k+1;
    }
 }

   return k;

}