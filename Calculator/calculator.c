#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int main()
{
    int a, b;
    int choice;
    while (1)
    {
        puts("Press : 1 Calculate Addition !");
        puts("Press : 2 Calculate subtract !");
        puts("Press : 3 Calculate multiply !");
        puts("Press : 4 Calculate division !");
        puts("Press : 5 exit");
        puts("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            puts("Enter Two Number !");
            scanf("%d %d", &a, &b);
            printf("%d + %d = %d\n", a, b, add(a, b));
            break;

        case 2:
            puts("Enter Two Number !");
            scanf("%d %d", &a, &b);
            printf("%d - %d = %d\n", a, b, sub(a, b));
            break;

        case 3:
            puts("Enter Two Number !");
            scanf("%d %d", &a, &b);
            printf("%d * %d = %d\n", a, b, mul(a, b));
            break;

        case 4:
            puts("Enter Two Number !");
            scanf("%d %d", &a, &b);
            printf("%d / %d = %d\n", a, b, div(a, b));
            break;

        case 5:
            return;
        default:
            puts("Invalid Choice !");
        }
    }
}