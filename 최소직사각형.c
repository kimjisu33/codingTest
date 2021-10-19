#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    
    for(int i=0 ; i<sizes_rows ; i++){
        if(sizes[i][0]<sizes[i][1]){
            int temp=sizes[i][0];
            sizes[i][0]=sizes[i][1];
            sizes[i][1]=temp;
        }
    }
    int max_row=0, max_col=0;
    for(int i=0 ; i<sizes_rows ; i++){
        if(max_row<sizes[i][0]) max_row=sizes[i][0];
        if(max_col<sizes[i][1]) max_col=sizes[i][1];
    }
    int answer = max_row*max_col;
    return answer;
}
