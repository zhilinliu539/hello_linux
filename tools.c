#include <stdio.h> // 记得加这个
#include "tools.h"

int add(int a, int b) {
    printf("--- Debug: add function called! ---\n"); 
    fflush(stdout); // 强制把这句话从内存“推”向屏幕
    return a + b;
}
