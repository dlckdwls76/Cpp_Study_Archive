#include <iostream>

using namespace std;


int solution(int age) {
    int answer = 2022 - age + 1;
    return answer;
}


int main() {
    int age;
    
  
    cin >> age;
    

    if (age <= 0 || age > 120) {
        cout <<  << endl;
        return 0; 
    }
    

    int birth_year = solution(age);
    
  
    cout << "2022" << age  << birth_year << endl;

    return 0;
}
