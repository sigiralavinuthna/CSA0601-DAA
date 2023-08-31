#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Please enter at least 2 numbers.\n");
        return 1;
    }

    int min1 = INT_MAX; 
    int min2 = INT_MAX; 

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2 && num != min1) {
            min2 = num;
        }
    }

    printf("First minimum value: %d\n", min1);
    printf("Second minimum value: %d\n", min2);

    return 0;
}
 