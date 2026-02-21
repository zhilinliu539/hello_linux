#include <stdio.h>
#include <unistd.h>
#include "tools.h" 
int main() {
    int count = 0;
    while(1) {
        int result = add(count, 10);
        printf("Count: %d, Result of add 10: %d\n", count++, result);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}
