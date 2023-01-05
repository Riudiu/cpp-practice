// 1.헤더파일을 include 시킨다. 
// bits/stdc++.h는 C++의 모든 표준 라이브러리가 포함된 헤더파일이다. 
// 이를 include라는 지시문을 통해 이 프로그램에 포함시킨다라는 의미.
#include </Users/jiwooyun/bits/stdc++.h>  

// std라는 네임스페이스(namespace)를 사용한다는 뜻이다.
// 네임스페이스란 많은 라이브러리를 불러서 사용하다보면 변수명 중복이 발생할 수 있는데 이를 방지하기 위해서 변수명에 범위를 걸어놓는 것을 의미한다.
// cin이나 cout 등을 사용할 때 원래는 std라는 네임스페이스를 통해 std::cin 이렇게 호출을 해야 하는데 std를 기본으로 설정해서 cin, cout으로 호출할 수 있게 한다. 
using namespace std;  

string a;

int main() {
    ///변수 a를 입력 받는다. 대표적으로 cin, scanf가 있다.
    cin >> a;

    ///변수 a를 출력한다. 대표적으로 cout과 printf가 있다.
    cout << a << "\n"; 

    ///main함수를 종료시키는 return 0이다. 프로세스를 정상적으로 마무리한다는 의미이다.(process exit call success) 
    ///또한 C++은 cpp 파일당 하나의 main함수만을 만들 수 있다. 하나의 main함수를 기반으로 로직을 구성해야 한다.
    return 0; 
}