#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int th = 1000, tt = 1000, tf = 1000, ttt = 1000; // global variable (th = 100,tt=200,tf=500,ttt=2000)
int main()
{
    int rs100, rs200, rs500, rs2000, amount; // local variable
    long int avlmoney;
    printf("Enter Amount : ");
    scanf("%d", &amount);
    if (amount % 100 != 0)
    {
        puts("Error : You have entered invalid amount !");
        exit(1);
    }
    avlmoney = th * 100 + tt * 200 + tf * 500 + ttt * 2000;
    if (amount > avlmoney)
    {
        puts("Sorry ! Insufficient Found !");
        return;
    }

    // 2000
    rs2000 = amount / 2000;
    if (rs2000 > ttt)
    {
        rs2000 = ttt;
    }
    ttt = ttt - rs2000;
    amount = amount - rs2000 * 2000;

    // 500
    rs500 = amount / 500;
    if (rs500 > ttt)
    {
        rs500 = ttt;
    }
    ttt = ttt - rs500;
    amount = amount - rs500 * 500;

    // 200
    rs200 = amount / 200;
    if (rs200 > ttt)
    {
        rs200 = ttt;
    }
    ttt = ttt - rs200;
    amount = amount - rs200 * 200;

    // 100
    rs100 = amount / 100;
    if (rs100 > ttt)
    {
        rs100 = ttt;
    }
    ttt = ttt - rs100;
    amount = amount - rs100 * 100;

    // amount is avalible same value then true this condition
    if (amount > 0)
    {
        puts("Error : Transaction  failed please try again !");
        ttt = ttt + rs2000;
        tf = tf + rs500;
        tt = tt + rs200;
        th = th + rs100;
        return;
    }

    // amount is availble ATM machine to number of rs print
    printf("2000 * %d\n", rs2000);
    printf("500 * %d\n", rs500);
    printf("200 * %d\n", rs200);
    printf("100 * %d\n", rs100);
}
