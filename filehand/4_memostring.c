#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char *)malloc(20 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter a string: ");
    scanf("%19s", str);
    printf("You entered: %s\n", str);
    free(str);
    return 0;
}