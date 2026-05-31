#include <iostream>
#include <windows.h> // 한글 깨짐 방지를 위한 Windows API

using namespace std;

// solution 함수는 반드시 한 번만 작성해야 합니다.
int solution(int n) {
    int pizza = 1;
    
    while ((pizza * 6) % n != 0) {
        pizza++;
    }
    
    return pizza;
}

int main() {
    // 콘솔창 출력 인코딩을 UTF-8로 강제 설정 (한글 깨짐 방지)
    SetConsoleOutputCP(CP_UTF8);

    // 문제에 주어진 입출력 예시 테스트
    int test1 = solution(6);
    int test2 = solution(10);
    int test3 = solution(4);
    
    // 결과 출력
    cout << "입출력 예 #1 결과: " << test1 << " (기댓값: 1)" << "\n";
    cout << "입출력 예 #2 결과: " << test2 << " (기댓값: 5)" << "\n";
    cout << "입출력 예 #3 결과: " << test3 << " (기댓값: 2)" << "\n";
    
    return 0;
}