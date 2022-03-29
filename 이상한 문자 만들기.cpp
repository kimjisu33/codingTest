#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int i=0;
    bool a=true;
    
    while(s[i]!=0){
        if(a){ //짝수이다
            answer+=toupper(s[i]);
            a=false;
        } 
        else { //홀수이다
            answer+=tolower(s[i]);
            a=true;
        }
        if(s[i]==' ') a=true;
        i++;
    }
    
    return answer;
}
