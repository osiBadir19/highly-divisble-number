#include <stdio.h>


int triangle_number(long n){
    long sum = 0;
    for (long i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
    }


int divisors(long n){
    long count = 0;
    for (long i = 1; i <= n; i++){
        if (n%i == 0){
            count++;
        }
    }

    return count;
}


int main() {
    long TriNum;
    // iterate until we get over hundred divisors
    for (long i = 1; ; i++){
        TriNum = triangle_number(i);
        if (divisors(TriNum) >= 100){
            printf("the number that has over hundred divisors is: %ld\n", TriNum);
            break;
        }
    }
    return 0;
}
