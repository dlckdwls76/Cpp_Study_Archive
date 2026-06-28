#include <iostream>

using namespace std;

int main_compare() {
    // 문제 예시와 동일한 상황 가정
    int answer[3] = {7, 3, 8}; // 정답
    int input[3]  = {7, 8, 6}; // 사용자가 입력한 값
    
    int strike = 0;
    int ball = 0;
    
    // 배열 비교를 통해 스트라이크와 볼 계산
    for (int i = 0; i < 3; i++) {       // 사용자가 입력한 숫자 기준 (0, 1, 2)
        for (int j = 0; j < 3; j++) {   // 정답 숫자 기준 (0, 1, 2)
            if (input[i] == answer[j]) { 
                // 값(숫자)이 일치할 때
                if (i == j) {
                    strike++; // 값도 같고 인덱스(위치)도 같으면 스트라이크
                } else {
                    ball++;   // 값은 같지만 인덱스(위치)가 다르면 볼
                }
            }
        }
    }
    
    // 결과 출력
    if (strike == 0 && ball == 0) {
        cout << "Out" << endl;
    } else {
        cout << strike << "strike " << ball << "ball" << endl;
    }
    
    return 0;
}
