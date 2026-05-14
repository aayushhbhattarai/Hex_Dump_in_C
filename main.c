#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *ptr;
    ptr = fopen("test.txt", "rb");

    if (ptr != NULL)
    {
        int ch;
        while ((ch = fgetc(ptr)) != EOF)
        {
            printf("%02X", ch);
        }
        fclose(ptr);
    }
    else
    {
        printf("Couldn't find the file!");
    }
    return 0;
}