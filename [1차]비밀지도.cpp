#include <string>
#include <vector>
#include <iostream>

using namespace std;

string toB(int n, int d){
    string b;
    
    int a=d;
    for(int i=0 ; i<n ; i++){
        b=to_string(a%2)+b;
        a/=2;
    }
    
    return b;    
}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;    
    
    for(int i=0 ; i<n ; i++){
        string b1=toB(n, arr1[i]);
        string b2=toB(n, arr2[i]);
        
        string tmp="";
        for(int j=0 ; j<n ; j++){
            if(b1[j]=='1' || b2[j]=='1') tmp+="#";
            else tmp+=" ";
        }
        answer.push_back(tmp);
    }
    
    return answer;
}
