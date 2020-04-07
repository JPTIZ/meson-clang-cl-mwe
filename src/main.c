#include <stdio.h>

#include <mylib.h>

int main(void) {
    printf("wtf?\n");
    fflush(stdout);
    printf("Hello, world!\nFoo = %d\n", foo());
}
