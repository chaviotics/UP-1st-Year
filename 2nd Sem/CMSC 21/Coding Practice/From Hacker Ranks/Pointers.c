#include <stdio.h>

void update(int *a,int *b) {
    int temp1 = *a;
    int temp2 = *b;

    *a = *a + *b;
    *b = abs(temp1 - temp2);
    // Complete this function
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
