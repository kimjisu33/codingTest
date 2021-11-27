#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int n_copy=n;
    while(n_copy>0){
        answer+=n_copy%10;
        n_copy/=10;
    }
    return answer;
}
