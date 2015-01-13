//C hello world example
#include <stdio.h>

int main(int argc, char *argv[])
{
    //int i = getInt();
    printf("%d\n", argc);
    printf("Hello world \n");
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    printf("%s\n", argv[1]);

    return 0;
}

int getInt()
{
    return 1;
}