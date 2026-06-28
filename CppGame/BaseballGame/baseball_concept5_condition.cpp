#include <iostream>

using namespace std;

int main_condition() {
    int num1 = 1;
    int num2 = 0;
    int num3 = 5;
    
    // 논리 연산자 || (OR 연산)를 사용하여 조건 검사
    // '||' 기호는 양쪽 조건 중 하나라도 참(true)이면 전체를 참으로 판단합니다.
    // 따라서 셋 중 하나라도 0이면 if문의 내용이 실행됩니다.
    if (num1 == 0 || num2 == 0 || num3 == 0) {
        cout << "입력된 숫자 중에 0이 하나 이상 포함되어 있습니다." << endl;
        cout << "게임 종료 조건 충족!" << endl;
    } else {
        cout << "0이 포함되어 있지 않습니다." << endl;
    }
    
    return 0;
}
