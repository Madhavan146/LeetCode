

char * defangIPaddr(char * a){
char *b=(char*)malloc(1000*sizeof(char));
int i,j;

i=0;
j=0;
 while(a[i]!= '\0')
{
    if(a[i]=='.')
    {
        b[j++]='[';
        b[j++]='.';
        b[j++]=']';
    }
    else
    {
        b[j]=a[i];
        j++;
    }
    i++;
}
       b[j]='\0';
     return b;

}