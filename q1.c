#include<stdio.h>
#include<string.h>
int main()
{
    char n[30];
    int flag=0,floatpoint=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n[i++]!='\0')
    {
        if(!flag && n[i]=='.')
        {
            flag=1;
        }
        else if(flag && (n[i]<'0' && n[i]>'9'))
        {
            floatpoint=0;
        }
        else if(flag && (n[i]>='0' && n[i]<='9'))
        {
            floatpoint=1;
        }
    }
    if(floatpoint)
    {
        printf("Number %s is a valid floating point \n",n);
    }
    else
    {
        printf("Number %s isn't a valid floating point \n",n);
    }
    return 0;
}
