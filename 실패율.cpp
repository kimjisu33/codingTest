#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    map<int,double> fail; //실패율
    
    //실패율 구하기
    for(int i=0 ; i<N ; i++){
        int challenge_cnt=0;
        int cant_clear=0;
        for(int j=0 ; j<stages.size() ; j++){
            if(stages[j]>=i+1) challenge_cnt++;
            if(stages[j]==i+1) cant_clear++;
        }
        cout<< cant_clear <<"/"<<challenge_cnt<<endl;
        fail.insert(pair(i,(double)cant_clear/challenge_cnt));
    }
    
    for(int i=0 ; i<N ; i++){
        cout<<"   "<<fail[i];
    }
   
    //실패율 정렬
    for(int i=0 ; i<N ; i++){ //스테이지 만큼 돌리기
        bool is_insert=false;
        for(int j=0 ; j<answer.size() ; j++){ //answer에 들어간 스테이지 만큼 돌리기
            if(fail[i]>fail[answer[j]]){
                //값이 크면 앞에 삽입
                answer.insert(answer.begin()+j, fail.find(i)->first);
                is_insert=true;
                break;
            }
        }
        if(!is_insert) answer.push_back(fail.find(i)->first);
    }
    
    for(int i= 0 ; i<answer.size() ; i++) answer[i]++;
    
    return answer;
}
