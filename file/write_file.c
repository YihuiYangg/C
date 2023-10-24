#include <stdio.h>

int main() {
    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        perror("");
        return 1;
    }

    int number, n;
    printf("Add numbers from 1 to %d: ",n);
    for (int i = 1; i < n; i++) {
        scanf("%d", &i);
        fprintf(file, "%d\n", i);
    }

    fclose(file);
    return 0;
}