int findSpecialInteger(int* a, int n) {
int i,j,r=0,c=0,t=0;
  for(i=0;i<n;i++)
  {   
        c=0;     
        for(j=i;j<n;j++)       
            if(a[i]==a[j])
                c+=1;          
            else{
            break;}     
      if(c>r){
            r=c;
            t=a[i];}}
        return t;}
 