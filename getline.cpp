#include </Users/jiwooyun/bits/stdc++.h>  
using namespace std;  

string s;
int T;
int main() {
    // cin이 개행문자까지 받기 때문에 문자열을 한번에 받기 위해서는 getline으로 받으면 된다.
    getline(cin, s);
    cout << s << '\n';

    //하지만 getline을 여러번 써야 되는 상황이 있다.
    //그럴 때는 특정 문자열을 기반으로 버퍼플래시를 하고 받으면 된다.
    cin >> T;
    string bufferflush;
    getline(cin, bufferflush);

    for(int i = 0; i < T; i++) {
        getline(cin, s);
        cout << s << "\n";
    }
    return 0;
}
/*
리우디우 화이팅 
리우디우 화이팅 
*/