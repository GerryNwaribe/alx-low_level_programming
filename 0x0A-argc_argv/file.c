#include <stdio.h>
#include <stdlib.h>

void putchar_num(long num)
{
        if (num < 0 )
        {
                putchar('-');
                num = num * -1;
        }

        if (num/10)
                putchar_num(num/10);
        putchar(num%10 + '0');

}

int isvalidV1(char *arg)
{
int i;
        for (i = 0; arg[i] != '\0'; i++)
        {
                if (arg[i] >= '0' && arg[i] <= '9')
                {
                        continue;
                }
                else
                {
                return (-1);
                }
        }

        return (0);

}

int isvalidV2(char **arg)
{
int i, j;

for (i = 1; arg[i]; i++)
{
        for (j = 0; arg[i][j]; j++)
        {
                if (arg[i][j] >= '0' && arg[i][j] <= '9')
                {
                        continue;
                }
                else
                {
                        printf("Error, argument \"%s\" is invalid\n", arg[i]);
                        exit(2);
                return (-1);
                }
        }
}

        return (0);

}
int main(int argc, char **argv)
{
        int i;
        int total;
        (void)argv;


        if (argc <= 1)
                return (-1);

/* handle validation first */
        if (isvalidV2(argv) != 0)
        {
                ;
        }



        for (i = 1; i < argc; i++)
        {
                if (isvalidV1(argv[i]) == 0)
                {
                        total = total +  atoi(argv[i]);
                }
                else
                {
                        printf("Error, argument \"%s\" is invalid\n", argv[i]);
                        exit(2);
                }
        }
        putchar_num(total);
        putchar('\n');

return (0);
}
