#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1
    char c = 'a';
    int i = 6;
    long l = 14586933059;

    // 2
    printf("Char address: %p\n", &c);
    printf("Int address: %p\n", &i);
    printf("Long address: %p\n", &l);

    // 3
    char* cp = &c;
    int* ip = &i;
    long* lp = &l;

    // 4
    printf("Char value: %c\n", *cp);
    printf("Int value: %d\n", *ip);
    printf("Long value: %ld\n", *lp);

    // 5
    *cp = 'c';
    *ip = 2;
    *lp = 123456543456543;

    printf("New char value: %c\n", *cp);
    printf("New int value: %d\n", *ip);
    printf("New long value: %ld\n", *lp);

    // 6
    unsigned int u = 66;
    int *uip = &u;
    char *ucp = &u;

    // 7
    printf("uip: %p uip points to: %d\n", uip, *uip);
    printf("ucp: %p ucp points to: %c\n", ucp, *ucp);

    // 8
    printf("Decimal: %u, Hex: %x\n", u, u);

    // 9
    printf("Decimal bytes: ");
    for (i = 0; i < 3; i++) {
        printf("%hhu", ucp[i]);
    }

    printf(" Hex bytes: ");
    for (i = 0; i < 3; i++) {
        printf("%hhx", ucp[i]);
    }
    printf("\n");

    // 10
    printf("Adding 1: \n");
    int j;
    for(j = 0; j < 3; j++) {
        ucp[j]++;
        printf("Decimal: %u, Hex: %x\n", u, u);
    }
    printf("Adding 16:\n");

    // 11
    u = 66;
    *ucp = &u;
    for(j = 0; j < 3; j++) {
        ucp[j] += 16;
        printf("Decimal: %u, Hex: %x\n", u, u);
    }

    return 0;
}