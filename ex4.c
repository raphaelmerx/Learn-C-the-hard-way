#include <stdio.h>

int main()
{
    int age = 10;
    int height;

    // valgrind: Address 0x10080b5ce is 14 bytes inside a block of size 4,096 alloc'd
    printf("His age is %d\n");
    // valgrind: Syscall param write(buf) points to uninitialised byte(s)
    printf("His height is %d\n", height);

    return 0;
}
