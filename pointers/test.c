#include <stdio.h>

void change(int **ptr) {
    static int x = 5;
    *ptr = &x;
}

int main() {
    int y = 10;
    int *p = &y;
    change(&p);// i use change with address of p which allow to modify where p points.
    printf("%d", *p);
return 0;
}
