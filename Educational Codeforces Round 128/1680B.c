#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int positionofR (char arr[])
{
    int len;
    len = strlen(arr);
    for(int i = 0; i < len; i++)
    {
        if(arr[i] == 'R')
        {
            return i;
        }
    }
    return 100;
}

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        char fld[10][10];
        int firstRpos = 100, minRpos = 100;
        scanf("%d%d",&n,&m);
        for(int i = 0; i < n; i++)
        {
            int rpos;
            scanf("%s",fld[i]);
            rpos = positionofR(fld[i]);
            if(firstRpos == 100)
            {
                firstRpos = rpos;
            }
            if(minRpos > rpos)
            {
                minRpos = rpos;
            }
        }

        if(minRpos == firstRpos)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}