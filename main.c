#include <stdio.h>

void main(void)
{
    char str[10];

    for(int i = 0; i < 10; i++){
        str[i] = '!';
    }

    sscanf("123456", "%s", str);
    printf("str is %s\r\n", str);
}
