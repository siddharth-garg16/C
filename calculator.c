#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 main()
{
    float a,b;
    char op;
/*basic calculator */
    do{
        printf("please select the operator(+,-,*,/,q): ");
        scanf("%c",&op);

        switch(op)
        {
            case'+':
                    printf("enter two numbers: ");
                    scanf("%f%f",&a,&b);
                    printf("sum:%f",a+b); break;
            case'-':
                    printf("enter two numbers: ");
                    scanf("%f%f",&a,&b);
                    printf("difference:%f",a-b); break;
            case'*':
                    printf("enter two numbers: ");
                    scanf("%f%f",&a,&b);
                    printf("product:%f",a*b); break;
            case'/':
                    printf("enter two numbers: ");
                    scanf("%f%f",&a,&b);
                    printf("division:%f",a/b); break;
            case'q': return 0; break;
            default: printf("invalid operator"); break;
        }
        printf("\n");
     }while(op!='q');
}
