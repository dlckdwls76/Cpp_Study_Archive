#include <iostream>

using namespace std;

int main_input() {
    int num1, num2, num3;
    
    cout << "3개의 숫자를 띄어쓰기로 구분하여 입력하세요 (예: 1 2 3) : ";
    
    // cin을 연속으로 사용하여 여러 개의 변수를 한 번에 입력받을 수 있습니다.
    // 사용자가 스페이스(공백)이나 엔터를 기준으로 숫자를 입력하면 각각 저장됩니다.
    cin >> num1 >> num2 >> num3;
    
    cout << "첫번째 입력: " << num1 << endl;
    cout << "두번째 입력: " << num2 << endl;
    cout << "세번째 입력: " << num3 << endl;
    
    return 0;
}
