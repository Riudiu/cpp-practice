#include </Users/jiwooyun/bits/stdc++.h>
using namespace std; 

// string을 마치 배열처럼 a[0] 이런식으로 접근할 수도 있다.
// 한글로 선언한 a의 경우 a[0]을 출력했을 때 이상한 문자가 나타난 것을 볼 수 있다. 
// 이는 문자열을 선언하고 a[0], a[1] 이렇게 접근한다는 의미는 0번째, 1번째 1바이트씩 출력한다는 것을 의미한다. 
// 영어는 한 글자당 1바이트지만 한글은 한 글자당 3바이트다.
int main(){
    string a = "나는야";
    cout << a[0] << "\n";
    cout << a[0] << a[1] << a[2] << '\n'; 
    cout << a << "\n";

    string b = "abc";
    cout << b[0] << "\n";
    cout << b << "\n";
    return 0;
}

/*
?
나 
나는야 
a
abc 
*/