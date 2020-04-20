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
    printf("g_str is :");
    for(int i = 0; i < 10; i++){
        printf("%c", g_str[i]);
    }
    printf("\r\n");
}

void sscanf_test1(void)
{
    sscanf("123456", "%s", g_str);
}

void sscanf_test2(void)
{
    sscanf("123456", "%3s", g_str);
}

void sscanf_test3(void)
{
    sscanf("aaaAAA", "%[a-z]", g_str);
}

void sscanf_test4(void)
{
    //当碰到不满足条件的字符后，sscanf就会停止执行，不再扫描之后的字符
    // sscanf("aaaAAAbbbBBB", "%[^a-z]", g_str);//[out]: !!!!!!!!!!
    sscanf("AAAbbbBBB", "%[^a-z]", g_str);//[out]: AAA!!!!!!
}

void sscanf_test5(void)
{
    //%*表示过滤 满足条件的字符,如果只有%*，没有%的话，sscanf不会拷贝任何字符到str
    // sscanf("aaaAAAbbbBBB", "%*[A-Z]%[a-z]", g_str);//%*遇到不满足条件的直接停止扫描之后的字符,[out]:!!!!!!!!!!
    sscanf("AAAbbbBBB", "%*[A-Z]%[a-z]", g_str);
}

void sscanf_test6(void)
{
    //注意1：%只能使用一次，但%*可以使用多次，比如在这个实验里面，先用%*[A-Z]过滤大写字母，然后用%*[a-z]过滤小写字母。
    //注意2：^后面可以带多个条件，且这些条件都受^的作用，比如^a-z=表示^a-z且^=(既不是小写字母，也不是等于号)。
    sscanf("AAAbbbBBBC=", "%*[A-Z]%*[a-z]%[^a-z=]", g_str);
}

void sscanf_test7(void)
{
    int k = 0, b = 0;
    sscanf("AAA123bbb456BBBC=", "%*[^0-9]%d%*[^0-9]%d", &k, &b);
    printf("k is %d, b is %d\r\n", k, b);
}
