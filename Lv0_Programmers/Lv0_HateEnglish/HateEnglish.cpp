#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    
    vector <string> numWords = 
        {"zero","one","two",
        "three","four","five",
        "six","seven","eight","nine"};

    for (int i = 0; i < 10; i++) //0~9까지 단어 찾기
    {
        while (numbers.find(numWords[i]) != string::npos)
        {
            int pos = numbers.find(numWords[i]);
            numbers.replace(pos, numWords[i].length(), to_string(i));
            
            
        }
        
        
    }

    answer = stoll(numbers);
    return answer;
}
int main()
{
    cout << solution("zero") << endl;
}