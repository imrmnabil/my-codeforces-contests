#include <stdio.h>
#include <stdlib.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l1, r1, l2, r2;

        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);

        if (l1 > l2)
        {
            if (l1 > r2)
            {
                printf("%d", l1 + l2);
            }
            else
            {
                printf("%d",l1);
            }
        }
        else
        {
            if (l2 > r1)
            {
                printf("%d", l1 + l2);
            }
            else
            {
                printf("%d",l2);
            }
        }
        printf("\n");
    }

    return 0;
}