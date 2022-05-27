#include "stdio.h"
#include "cstdlib"

int pointer(){
    int i, *pi;
    pi = &i;

    i = 10;

    printf("%d", *pi);

    return 0;
}

int dynamicMemoryAllocation(){
    int i, *pi;
    float f, *pf;
    pi = (int *) malloc(sizeof (int));
    pf = (float *) malloc(sizeof (float ));
    *pi = 1024;
    *pf = 3.14;
    printf("an integer = %d, a float = %f\n", *pi, *pf);
    free(pi);
    free(pf);
}

int main() {
//    pointer();
dynamicMemoryAllocation();
}