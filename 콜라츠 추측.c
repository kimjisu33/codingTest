#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    long copy_num=(long)num;
    while(copy_num!=1){
        if(answer>=500){
            answer=-1;
            break;
        }
        if(copy_num%2==0) copy_num/=2;
        else copy_num=copy_num*3+1;
        answer++;
    }
    return answer;
}
