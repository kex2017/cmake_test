#include <stdio.h>

static char g_str[10] = {0};

void init_test_str(void)
{
    for (int i = 0; i < 10; i++)
    {
        g_str[i] = '!';
    }
}

void show_test_str(void)
{
    printf("g_str is %s\r\n", g_str);
}

void sscanf_test1(void)
{
    sscanf("9999999999", "%s", g_str);
}

