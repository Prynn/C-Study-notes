#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,s=1;
    char c;
    c=getchar();
    while(c=='')
    {
        c=getchar();
    }
    if(c=='+')
        s=1;        //用好标志量；
    else if(c=='-')
        s=-1;
    while(c!='\n')
    {
        if(c<'0'||c>'9')
        break;
        n=n*10+c-'0';
        c=getchar();
    }
    printf("")
    return 0;
}