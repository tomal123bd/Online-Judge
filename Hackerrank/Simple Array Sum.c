#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int simpleArraySum(int n, int ar_size, int* ar) {
    int i,sum=0;
    for (i=0;i<n;i++){
        sum=sum+ar[i];
    }
    return sum;
}

int main() {
    int n;
    int ar_i;
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = simpleArraySum(n, n, ar);
    printf("%d\n", result);
    return 0;
}
