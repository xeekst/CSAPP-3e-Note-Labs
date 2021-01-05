#include <stdio.h>
 
double fun(int i);

int main()
{
    double d = fun(4);
    /* 我的第一个 C 程序 */
    printf("d:%f \n",d);
 
    return 0;
}

typedef struct{
    int a[2];
    double d;
} struct_t;

double fun(int i){
    volatile struct_t s;
    s.d = 3.14;
    s.a[i] = 1073741824;
    return s.d;
}