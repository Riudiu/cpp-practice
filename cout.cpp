#include </Users/jiwooyun/bits/stdc++.h>  
using namespace std;  

string a = "이직하고 싶다..!";
string b = "오늘 오후 반차 개꿀 ㅎㅎ";
double c = 1.23456789;

// cout << 출력할 것 <<"\n"해서 하는게 일반적입니다. 이렇게 “한줄” 띄어쓰기를 넣어도 되고
// “한칸” 띄어쓰기를 원한다면 cout << 출력할 것 << " "; 이렇게 넣어도 된다. << 이어서 입력할 문자열이나 문자도 넣을 수 있다. 

int main() {
    cout << a << '\n';
    cout << a << " " << " " << b << '\n';
    
    // 실수 타입의 경우 cout.precision(자릿수); 를 걸어 반올림할 수 있다.
    cout << c << '\n';
    cout.precision(7);
    cout << c << '\n';

    return 0;
}
/*
이직하고 싶다..!
이직하고 싶다..!  오늘 오후 반차 개꿀 ㅎㅎ

1.23457
1.234568
*/