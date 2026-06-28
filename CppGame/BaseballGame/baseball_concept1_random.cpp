#include <iostream>
#include <cstdlib> // rand(), srand() 함수 포함
#include <ctime>   // time() 함수 포함

using namespace std;

int main_random() {
    // 1. 난수 시드(seed) 설정: 매번 다른 패턴의 난수가 나오게 하기 위함
    // 랜덤뽑기가 매번 똑같은 패턴으로 나오지 않게 처음에 섞어주는 작업
    srand((unsigned int)time(NULL)); 
    
    int answer[3]; 
    
    // 2. 1~9 사이의 난수를 3개 뽑기
    for (int i = 0; i < 3; i++) {
        answer[i] = (rand() % 9) + 1; // 1~9 사이의 난수 생성
        
        // 3. 중복 검사: 이전에 뽑은 숫자와 방금 뽑은 숫자를 비교
        for (int j = 0; j < i; j++) {
            if (answer[i] == answer[j]) {
                i--; // 중복되면 인덱스를 감소시켜 현재 자리를 다시 뽑도록 함
                break;
            }
        }
    }
    
    cout << "생성된 중복 없는 난수: " << answer[0] << " " << answer[1] << " " << answer[2] << endl;
    
}
