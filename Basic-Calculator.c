#include<stdio.h>
int main()
{
        char op;
        float a,b;
        printf("Enter the operation to be done:");
        scanf("%c",&op);
        printf("Enter 2 numbers:");
        scanf("%f%f",&a,&b);
        switch(op)
        {
        case '+':
        { 
            printf("Sum of given numbers=%f",a+b);
            break;
        }
        case '-':
        {
             printf("Difference of given numbers=%f",a-b); 
            break;
        }
        case '*':
        { 
            printf("Product of given numbers=%f",a*b);
            break;
        }
        case '/':
        {
            printf("division of given numbers=%f",a/b); 
            break;
        }
        default: printf("Invalid operator");
        }
        return 0;
}