#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (int i = 0; i < my_string.length(); i++)
    {
        if (isupper(my_string[i]))
        {
            answer += tolower(my_string[i]);
            
        }else if (islower(my_string[i]))
        {
            answer += toupper(my_string[i]);
        }
    }
    return answer;
}
int main() {
    // 입출력 예시에 있는 테스트 문자열
    string my_string = "cccCCC"; 
    
    // solution 함수를 실행하고 결과를 콘솔에 출력
    cout << "변환 결과: " << solution(my_string) << endl;
    
    return 0;
}