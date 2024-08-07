#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int user;
    int r,c=1,s=0;
    printf("enter the integer to check the armstrong no.:  ");
    scanf("%d",&user);
    int user1=user , user2=user;
    while(1){
        if (user==0 || user==1 || user==2 || user==3 || user==4 || user==5 || user==6 || user== 7 || user== 8 || user==9)
        {
            break;
        }
        else{
            user=user/10;
            c++;
        }  
    }
    for (int i = 0; i < c; i++)
    {
        r=user1%10;
        s=pow(r,c)+s;
        user1=user1/10;
    }
    if (user2 == s)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not a palindrome number");
    }
    return 0;
}