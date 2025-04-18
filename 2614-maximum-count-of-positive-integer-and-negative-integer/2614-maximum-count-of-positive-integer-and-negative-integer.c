int maximumCount(int* a, int n) {


int i,gc,lc;
gc=0;
lc=0;
 for(i=0;i<n;i++)
 {
    if(a[i]>0)
     gc+=1;
 }
 for(i=0;i<n;i++)
 {
    if(a[i]<0)
     lc+=1;
 }

   if(gc>lc)
    return gc;
   else
   return lc;



}