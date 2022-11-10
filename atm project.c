#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,i,j,k,n,m=0,z,deposit,balance=0,y=20000;
do
{
printf("\t\tWELCOME TO JIIT BANK ATM\n");
printf("get 0%% downpayment when \t\t\tget education loan easily\n");
printf("you buy a new car on EMI\t\t\tshop by card and get discount\n");
printf("please enter your four digit pin:\t\t recharge by atm cards \n");
scanf("%d",&a);
if(a==1234||a==4321||a==3372||a==5983||a==2020)
{
printf("\tchoose one\n1)cash withdrawl\n2)balance enquiry\n3)mini statement\n4)change password\n5)Deposit money\n");
scanf("%d",&b);
switch(b)
{
case 1:
        printf("\tchoose one\n1)current\n2)saving\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
                printf("enter amount\n");
                scanf("%d",&m);
                printf("do you want receipt for this transactions \nfor yes type 1 or for no type 2\n");
                scanf("%d",&e);
                if(e==1)
                {
                printf("please collect your money and receipt \n");
                }
                if(e==2)
                {
                printf("please collect your money\n");
                }break;
    case 2:
                        printf("enter amount\n");
                scanf("%d",&z);


                printf("do you want receipt for this transactions \nfor yes type 1 or for no type 2\n");
                scanf("%d",&e);
                if(e==1)
                {
                printf("please collect your money and receipt and count\n");
                }
                if(e==2)
                {
                printf("please collect your money and count\n");
                }break;
            default:
            printf("please choose correct options\n");
            }
            break;
case 2:
        printf("please choose a\t type\n 1)current\n2)saving\n");
        scanf("%d",&f);
        switch(f)
        {
        case 1:
                printf("your account balance is ...........%d\n",(y-m)+balance);
                break;
        case 2:
                printf("your account balance is %d \n",(y-z)+balance);
                break;
                default:
                printf("please enter correct option\n");
        }
         break;
case 3:
                printf("please choose a\t type\n 1)current\n2)saving\n");
        scanf("%d",&f);
        switch(f)
        {
        case 1:
                printf("mini statement of your account is ...........\n amount that was just modified :%d \n now the remaining balance is: %d", m , (y-m)+balance);
                break;
        case 2:
                printf("mini statement of your account is ...........\n amount that was just modified :%d \n now the remaining balance is: %d", z , (y-z)+balance);
                break;
                default:
                printf("please enter correct option\n");
        }
         break;
case 4:
        printf("please enter your current pin\n");
        scanf("%d",&g);
        if(g==a)
        {
        printf("please enter your new password\n");
        scanf("%d",&h);
        i=h;
        printf("re-enter your new password to confirm\n");
        scanf("%d",&j);
        if(j==i)
        printf("your new password is %d\n",i);
    else
        printf("wrong password entered\n");
        }
        else
        printf("please enter correct password\n");
        break;
   case 5:
        printf("\nEnter deposit amount: ");
        scanf("%d", &deposit);
        balance = balance + deposit;
        break;
default:
printf("please enter correct option\n");
}}
else
{
printf("your password is incorrect\n");
}
printf("\t\tTHANK YOU\nFOR MORE DETAIL CALL 1800 1234 666\n");


printf("\nfor more use press 1\n");
scanf("%d",&n);
}
while(n==1);


return 0;
}