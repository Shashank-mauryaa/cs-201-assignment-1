#include<stdio.h>
int main()
{
    char emailid[500];
    printf("enter email id to check whether it is valid or not: ");
    scanf("%s",emailid);
    int flag=0,atcounter=0,indexof_attherate=-1,indexof_dot=-1,i=0;
    while(emailid[i]!='\0')
    {
        if((emailid[i]>='A' && emailid[i]<='Z') || (emailid[i]>='a' && emailid[i]<='z') || (emailid[i]>='0' && emailid[i]<='9') || (emailid[i]=='.' || emailid[i]=='-' || emailid[i]=='_' || emailid[i]=='@') && (i!=0 && emailid[i+1]!='\0'))
        {
            flag=1;
        }
        else 
        {
            flag=0;
            break;
        }
        if(emailid[i]=='@')
        {
            atcounter++;
            indexof_attherate=i;
        }
        if(emailid[i]=='.')
        {
            indexof_dot=i;
        }
        i++;
    }
    if(flag && (indexof_dot - indexof_attherate)>3 && atcounter==1)
    {
        printf("Email id is valid\n");
    }
    else
    {
        printf("Email id is invalid\n");
    }
    return 0;
}
