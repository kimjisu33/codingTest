#include <string>
#include <vector>

using namespace std;

int fun_a(int num, int position){
    //거리구하기
    int a[12][2]={
        {3,1},
        {0,0},{0,1},{0,2},
        {1,0},{1,1},{1,2},
        {2,0},{2,1},{2,2},
        {3,0},{3,2}
    };
    int answer=abs(a[num][0]-a[position][0])+abs(a[num][1]-a[position][1]);
    
    return answer;
}
string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left=10;
    int right=11;
    for (int i = 0; i < numbers.size(); ++i) {
        if(numbers[i]==1||numbers[i]==4||numbers[i]==7){
            answer+="L";
            left=numbers[i];
        }else if(numbers[i]==3||numbers[i]==6||numbers[i]==9){
            answer+="R";
            right=numbers[i];
        }else{
            int l=fun_a(numbers[i],left);
            int r=fun_a(numbers[i],right);
            if(l<r){
                answer+="L";
                left=numbers[i];
            } 
            else if(l>r){
                answer+="R";
                right=numbers[i];
            }
            else{
                char upper=toupper(hand[0]);
                answer+=upper;
                if(upper=='L')left=numbers[i];
                else right=numbers[i];
            } 
        }
    }
    return answer;
}
