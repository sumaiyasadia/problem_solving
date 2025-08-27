#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int game( char **ops,int n)
{
    int s[n];
    int top = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(ops[i], "+") == 0)
        {
            s[top] = s[top - 1] + s[top - 2];
            top++;
        }
        else if (strcmp(ops[i], "D") == 0)
        {
            s[top] = 2 * s[top - 1];
            top++;
        }
        else if (strcmp(ops[i], "C") == 0)
        {
            top--;
        }
        else
        {
            s[top] = atoi(ops[i]);
            top++;
        }
    }


    int sum = 0;
    for (int i = 0; i < top; i++)
    {
        sum += s[i];
    }

    return sum;
}

int main()
{
    char *ops[] = {"5", "2", "C", "D", "+"};
    int result = game( ops,5);
    printf("Total score: %d\n", result);
    return 0;
}
