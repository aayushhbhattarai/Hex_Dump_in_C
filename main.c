#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *ptr;
    ptr = fopen("test.txt", "rb");

    if (ptr != NULL)
    {
        int ch;
        int count = 0;
        int add = 0;
        unsigned char tray[16];
        printf("%08X: ", add);
        while ((ch = fgetc(ptr)) != EOF)
        {
            printf("%02X ", ch);
            tray[count] = ch;
            count++;

            if (count == 16)
            {
                printf(" | ");
                for (int i = 0; i < 16; i++)
                {
                    if (tray[i] >= 32 && tray[i] <= 126)
                    {
                        printf("%c", tray[i]);
                    }
                    else
                    {
                        printf(" . ");
                    }
                }
                printf("\n");
                add += 16;
                printf("%08X: ", add);
                count = 0;
            }
        }
        fclose(ptr);
    }
    else
    {
        printf("Couldn't find the file!");
    }
    return 0;
}