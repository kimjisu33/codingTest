#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int len=s.length();
    //cout<<len;
    answer= (len%2==0) ? s.substr((len/2)-1,2) : s.substr((len/2),1);
    
    return answer;a
}
