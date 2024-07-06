#include <stdio.h>
#include <stdlib.h>


int add(int*, int);

int main() {
    int n, sum, i;
    int *ptr;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    ptr = (int*)calloc(n, sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    
    sum = add(ptr, n);
    
    printf("Sum of all prime elements is %d\n", sum);
    
    free(ptr);
    
    return 0;
}

int add(int *ptr, int n) {
    int i, j, is_prime, sum = 0;
    
    for (i = 0; i < n; i++) {
        if (ptr[i] <= 1) {
            is_prime=0;
        }
        else{
        is_prime = 1; 
        
        for (j = 2; j <= ptr[i]/2; j++) {
            if (ptr[i] % j == 0) {
                is_prime = 0; 
                break;
            }
        }
        }
        if (is_prime==1) {
            sum += ptr[i];
        }
    }
    
    return sum;
}

