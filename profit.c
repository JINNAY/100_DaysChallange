//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int profit(int cp, int sp);
void main()
{
    int cost_price, selling_price;
    printf("enter the cost price and selling price to be checked \n");
    scanf("%d %d",&cost_price,&selling_price);
    profit(cost_price,selling_price);
}
int profit(int cp, int sp)
{
    int amount, percentage;
    if(sp > cp)
    {
        amount = sp - cp;
        percentage = (amount * 100) / cp;
        printf("the profit is %d%%\n",percentage);
    }
    else if(cp > sp)
    {
        amount = cp - sp;
        percentage = (amount * 100) / cp;
        printf("the loss is %d%%\n",percentage);
    }
    else
    {
        printf("no profit no loss\n");
    }
}
