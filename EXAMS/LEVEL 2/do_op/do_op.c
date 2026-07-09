#include "do_op.h"

int main(int argc, char **argv)
{
    int a;
    int b;
    int op;

    if(argc != 4)
    {
        write(1, "\n", 1);
        return(0);
    }
    a = atoi(argv[1]);
    b = atoi(argv[3]);
    op = argv[2][0];
    if(op == '+')
        printf("%d\n", a + b);
    else if(op == '-')
        printf("%d\n", a - b);
    else if(op == '*')
        printf("%d\n", a * b);
    else if(op == '/')
        printf("%d\n", a / b);
    else if(op == '%')
        printf("%d\n", a % b);
    return(0);
}