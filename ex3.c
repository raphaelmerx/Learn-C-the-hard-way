#include <stdio.h>

int main()
{
    int age = 10;
    int height = 72;

    // Depending on the type, can work as expected, print nothing, or issue a warning during compilation
    // Once it issues a warning, can output like "0.00000"
    printf("His age is %d\n", age);
    printf("His height is %d\n", height);

    return 0;
}
