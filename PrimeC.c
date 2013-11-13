// PrimeC Prime Number Calculation Benchmark
//
// C Implementation
//
// v1.0 StatiX Industries
// All rights reserved
//

#include <stdio.h>
//#include <array.h>
#include <math.h>
#include <stdbool.h>

int main(void) {
    int n = 1000000;
    bool A[n];
    int i;
    for (i=0; i<n; i++) {
        A[i]=true;
    }

    for (i=2; i<=sqrt(n); i++) {
        if (A[i]==true) {
            for (int j=pow(i, 2); j<=n; j+=i) {
                A[j]=false;
            }
        }
    }

    for (int x=2; x<n; x++){
        if (A[x]==true)
            printf("%d", x);
    }
    printf("\n");
    return 0;
}
