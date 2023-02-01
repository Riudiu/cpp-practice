#include </Users/jiwooyun/bits/stdc++.h>
using namespace std; 

// atoi()는 문자열을 int로 바꿔야 할 상황에 사용할 수 있다. 
// 문자열, string으로 입력을 받아 입력받은 글자가 문자열인지 숫자인지 확인해야 하는 로직이 필요할 때 
// 만약 입력받은 문자열이 문자라면 0을 반환하고, 그게 아니라면 숫자를 반환한다.
int main() {
    string s = "13";
    string s2 = "Danny";

    cout << atoi(s.c_str()) << '\n'; 
    cout << atoi(s2.c_str()) << '\n'; 

    return 0;
}

/*
13
0
*/