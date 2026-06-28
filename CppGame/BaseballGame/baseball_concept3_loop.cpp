#include <iostream>

using namespace std;

int main_loop() {
    int count = 0;
    
    // while(true)를 이용하면 의도적으로 탈출할 때까지 계속 반복(무한 루프)됩니다.
    while (true) {
        count++;
        cout << "현재 반복 횟수: " << count << endl;
        
        // 5번 반복하면 if문 조건이 참이 되어 루프를 종료합니다.
        if (count == 5) {
            cout << "5번에 도달하여 루프를 탈출(break)합니다." << endl;
            break; // 가장 가까운 반복문(while)을 빠져나감
        }
    }
    
    return 0;
}
