// 1.헤더파일을 include 시킨다. 
// bits/stdc++.h는 C++의 모든 표준 라이브러리가 포함된 헤더파일이다. 
// 이를 include라는 지시문을 통해 이 프로그램에 포함시킨다라는 의미.
#include </Users/jiwooyun/bits/stdc++.h>  

// std라는 네임스페이스(namespace)를 사용한다는 뜻이다.
// 네임스페이스란 많은 라이브러리를 불러서 사용하다보면 변수명 중복이 발생할 수 있는데 이를 방지하기 위해서 변수명에 범위를 걸어놓는 것을 의미한다.
// cin이나 cout 등을 사용할 때 원래는 std라는 네임스페이스를 통해 std::cin 이렇게 호출을 해야 하는데 std를 기본으로 설정해서 cin, cout으로 호출할 수 있게 합니다. 
using namespace std;  


string a;
int main() {
    cin >> a;
    cout << a << "\n";
    return 0; 
}