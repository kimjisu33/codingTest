#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    //3진법 만들기
    int len=0, temp=1;
    string change="";
    while(n>0){
        change=to_string(n%3)+change;
        n/=3;
        len++;
    }
    cout<<change;
    
    // 앞뒤 반전 및 10진법 표현
    for(int i=len-1 ; i>=0 ; i--){
        answer+= pow(3,i)*(change[i]-'0');
    }
    
    return answer;
}
