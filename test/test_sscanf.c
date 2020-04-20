#include <stdio.h>

void test_sscanf(void)
{
    char str[10];

    for (int i = 0; i < 10; i++)
    {
        str[i] = '!';
    }

    sscanf("9999999999", "%s", str);
    printf("str is %s\r\n", str);
}
