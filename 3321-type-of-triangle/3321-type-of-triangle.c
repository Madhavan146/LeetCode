char* triangleType(int* a, int n) {


    if(a[0]==a[1] && a[1]==a[2])
      return "equilateral";

   
   else if( a[0]+a[1]<=a[2] || a[1]+a[2]<=a[0] || a[0]+a[2]<=a[1])
       return "none";

       else if(a[0]==a[1] || a[1]==a[2] || a[0]==a[2])
      return "isosceles";
    
    else
     return "scalene" ;
    
}