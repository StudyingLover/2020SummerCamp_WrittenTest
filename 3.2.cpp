#include<stdio.h>
inline int Square_i(int x)
{
    return x*x;
}
#define Square_m(x) x*x
int main(void)
{
    int a=4;
    printf("%d,%d,%d,%d",Square_m(a+2)\
	,Square_m((a+2)),Square_i(a+2),Square_i((a+2)));
}
