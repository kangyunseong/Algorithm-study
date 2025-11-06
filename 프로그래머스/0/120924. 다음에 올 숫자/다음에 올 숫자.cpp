#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int dis1 = common[1] - common[0];
    int dis2 = common[2] - common[1];
    int s = common.size();
    
    if(dis1 == dis2){
        answer = common[s - 1] + dis1;
    }
    else{
        int dis3 = common[2] / common[1];
        if(dis3 != 0){
            answer = common[s - 1] * dis3;
        }
    }
    return answer;
}

int main(){
    vector<int> cm;
    while(true){
        int i = 0;
        cin >> cm[i];
        i++;
        if(cm[i] == '\n') break;
    }
    solution(cm);
    return 0;
}