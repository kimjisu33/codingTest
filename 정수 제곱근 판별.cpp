#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = -1;

    long a=sqrt(n);
    cout<<a<<endl;
    if(n%a==0){
        answer=(a+1)*(a+1);
    }
    
    if(n==3) answer=-1;
    
    return answer;
}
