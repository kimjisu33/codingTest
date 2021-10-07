#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int i,j;
    for(i=0 ; i<=9 ; i++){
        for(j=0 ; j<numbers_len ; j++){
            if(i==numbers[j]){break;}
        }
        if(j==numbers_len) answer+=i;
    }
    
    return answer;
}
