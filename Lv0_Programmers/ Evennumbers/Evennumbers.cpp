#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

// 코딩테스트 문제의 함수
vector<int> solution(int n) {
    vector<int> answer;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) { 
            answer.push_back(i); 
        }
    }
    
    return answer;
}

// 로컬 테스트를 위한 main 함수
int main() {
    // 테스트 케이스 1: n = 10
    int n1 = 10;
    vector<int> result1 = solution(n1);
    
    cout << "n이 " << n1 << "일 때 결과: [";
    for(int i = 0; i < result1.size(); i++) {
        cout << result1[i];
        if (i != result1.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    // 테스트 케이스 2: n = 15
    int n2 = 15;
    vector<int> result2 = solution(n2);
    
    cout << "n이 " << n2 << "일 때 결과: [";
    for(int i = 0; i < result2.size(); i++) {
        cout << result2[i];
        if (i != result2.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}