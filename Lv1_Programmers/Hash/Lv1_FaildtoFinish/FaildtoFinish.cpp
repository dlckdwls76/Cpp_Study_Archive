#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

// 프로그래머스 템플릿 기반 solution 함수
string solution(vector<string> participant, vector<string> completion) {
    string answer = ""; 
    unordered_map<string, int> runner_counts;

    //Step 1: 참가자 등록
    for (const string& name : participant) {
        runner_counts[name]++;
    }

    //Step 2: 완주자 제외
    for (const string& name : completion) {
        runner_counts[name]--;
    }

    //Step 3: answer 변수에 정답 세팅
    for (const auto& pair : runner_counts) {
        if (pair.second > 0) {
            answer = pair.first; 
            break; 
        }
    }

    return answer; 
}

int main() {
    // 빠른 입출력 세팅
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 테스트용 데이터 구성
    vector<string> participant = {"marina", "josipa", "nikola", "vinko", "filipa"};
    vector<string> completion = {"josipa", "filipa", "marina", "nikola"};

    // 결과 출력
    string final_result = solution(participant, completion);
    cout << "완주하지 못한 선수: " << final_result << "\n";

    return 0;
}