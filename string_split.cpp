#include </Users/jiwooyun/bits/stdc++.h>
using namespace std; 

// 코딩테스트에서는 문자열을 split() 하는 로직이 많이 등장한다.
// split()함수란 다른 프로그래밍 언어에서도 문자열을 특정 문자열을 기준으로 쪼개어서 배열화시키는 함수라는 의미로 사용되는데 
// C++에서는 STL에서 split() 함수를 지원하지 않는다. 그래서 직접 만들어야 함.
// split은 보통 다음과 같이 구현한다. 시간복잡도는 O(n)의 시간복잡도를 가진다.
vector<string> split(string input, string delimiter) { 
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimiter)) != string::npos) { 
        token = input.substr(0, pos); 
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    } 
    ret.push_back(input); 
    return ret;
}

int main() {
    string s = "안녕하세요 큰돌이는 킹갓제너럴 천재입니다 정말이에요!", d = " "; 
    vector<string> a = split(s, d);

    // 범위기반 for 루프, C++11부터 추가되었다. 아래 코드는 vector a내의 있는 요소인 string타입의 요소를 탐색한다는 뜻
    for(string b : a) 
        cout << b << "\n";
}

/*
안녕하세요 
큰돌이는 
킹갓제너럴 
천재입니다 
정말이에요! 
*/