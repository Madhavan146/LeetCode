int countNegatives(int** a, int r, int* c) {

int i,j,k;
k=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<*c;j++)
        {
            if(a[i][j]<0)
            k=k+1;
        }
    }
    return k; 
}