#include </Users/jiwooyun/bits/stdc++.h>  
using namespace std;  

//cin은 개행문자(띄어쓰기나 엔터)까지 입력을 받는다.
//문제에서 형식을 기반으로 입력이 주어지지 않은 경우 scanf보다는 cin을 쓰는 것이 좋다. 
string a, b;
int main() {
    ///1번쨰 입력 -> 띄어쓰기 이후로는 입력 안 받음, 개행문자까지만
    cin >> a;
    cout << a << "\n";

    ///2번쨰 입력 -> 개행문자를 넣어서 2개의 문자열을 입력하면 모든 문자열이 올바르게 입력 받아짐
    cin >> a >> b;
    cout << a << "\n";
    cout << b << "\n";

    return 0;
}
/*
  - 1번째
  입력
  윤지우 바보
  
  출력 
  윤지우

  - 2번째  
  입력
  윤지우 바보
  
  출력
  윤지우 
  바보
*/