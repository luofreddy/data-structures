#include "stdio.h"

int pointer(){
    int i, *pi;
    pi = &i;

    i = 10;

    printf("%d", *pi);

    return 0;
}

int main() {
    pointer();
}