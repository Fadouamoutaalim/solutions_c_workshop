#include <stdio.h>

void sayHello();
int sum(int a, int b);





int main() {
    int result = sum(6,7);
    int result2 = sum(3,5);
    printf("test d'une fonction %d et deuxieme result %d\n", result, result2);
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    return 0;
}
int sum(int a, int b) {
    int result = 0;
    result = a+b;
    return result;
}
void sayHello() {
    printf("Hello world! \n");
}