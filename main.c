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
        while ((ch = fgetc(ptr)) != EOF)
        {
            printf("%02X ", ch);
            count++;
            if (count == 16)
            {
                printf("\n");
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