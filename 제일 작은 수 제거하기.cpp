#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if(arr.size()==1) answer.push_back(-1);
    else{
        answer=arr;
        int min=*min_element(arr.begin(), arr.end());
        for(int i=0 ; i<answer.size() ; i++){
            if(answer[i]==min){
                answer.erase(answer.begin()+i);
                break;
            }
        }
    }
    
    return answer;
}
