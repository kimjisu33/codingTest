#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a[5]={1, 2, 3, 4, 5};
    int b[8]={2, 1, 2, 3, 2, 4, 2, 5};
    int c[10]={3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    vector<int> supos(3); 
    for(int i=0 ; i<answers.size() ; i++){
        if(a[i%5]==answers[i])supos[0]++;
        if(b[i%8]==answers[i])supos[1]++;
        if(c[i%10]==answers[i])supos[2]++;
        
    }
    
    int max=0;
    for(int i=0 ; i<3 ; i++){
        if(supos[i]>max){
            max=supos[i];
            answer.clear();
            answer.push_back(i+1);
        }
        else if(supos[i]==max)answer.push_back(i+1);
    }
    
    sort(answer.begin(), answer.end());
    
    
    return answer;
}
