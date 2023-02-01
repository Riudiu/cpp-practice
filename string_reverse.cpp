#include </Users/jiwooyun/bits/stdc++.h>
using namespace std; 

// 문자열 string은 reverse()라는 메서드를 지원하지 않는다. 
// 문자열을 거꾸로 뒤집고 싶다면 STL에서 지원하는 함수인 reverse()를 쓰면 된다.
// reverse() 함수는 void 타입으로 아무것도 반환하지 않는다. 그리고 원본 문자열도 바꿔버린다.
// template <class BidirectionalIterator> 
// void reverse (BidirectionalIterator first, BidirectionalIterator last);

int main(){
    string wise = "Done is better than perfect";

    reverse(wise.begin(), wise.end());
    cout << wise << '\n';

    reverse(wise.begin(), wise.end());
    cout << wise << '\n';

    reverse(wise.begin() + 5, wise.end());
    cout << wise << '\n';
    
    return 0; 
}

/*
tcefrep naht retteb si enoD
Done is better than perfect
Done tcefrep naht retteb si
*/