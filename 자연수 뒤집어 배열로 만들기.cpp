#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    long tmp=n;
    while(tmp>0){
        answer.push_back(tmp%10);
        tmp/=10;
    }
    
    return answer;
}
