#include <stdio.h>
#include <stdlib.h>

int global_a = 5;

void func(void) {
    return;
}

int main(void) {
    int local_a = 5;
    int *heap = (int *)malloc(sizeof(int));
    void (*pfunc)(void) = func;

    printf("text: %p\n", pfunc);
    printf("global: %p\n", &global_a);
    printf("local: %p\n", &local_a);
    printf("heap: %p\n", heap);

    free(heap);
    return 0;
}
