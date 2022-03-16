#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(const char* s) {
    bool answer = true;
    
    int len=strlen(s);
    if(len==4 || len==6){
        //printf("%s",s);
        for(int i=0 ; s[i] ; i++){
            if(s[i]<'0'||s[i]>'9'){
                answer=false;
                break;
            }
        }
    }else{
        answer=false;
    }
    
    return answer;
}
