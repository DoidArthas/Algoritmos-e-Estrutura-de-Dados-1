#include <stdio.h>
#include <string.h>

int main()
{
    int n, c, l, q = 0;
    char led[10000];

    scanf("%d", &n);

    for(c = 0; c < n; c++)
    {
        q = 0;
        scanf(" %[^\n]c", led);

        for(l = 0; l < strlen(led); l++)
        {
            switch(led[l])
            {
                case '0': q = q + 6; break; case '1': q = q + 2; break;
                case '2': q = q + 5; break;
                case '3': q = q + 5; break;
                case '4': q = q + 4; break;
                case '5': q = q + 5; break;
                case '6': q = q + 6; break;
                case '7': q = q + 3; break;
                case '8': q = q + 7; break;
                case '9': q = q + 6; break;
                default: break;
            }

            led[l] = 'a';
        }
        printf("%d leds\n", q);
    }

    return 0;
}

/*
***********************************************************************
* 
***********************************************************************
*/
