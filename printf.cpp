#include </Users/jiwooyun/bits/stdc++.h>  
using namespace std;  

int homeTeamScore = 2;
int awayTeamScore = 1;

char c = 'a';
string str = "Avatar";
double b = 3.1485732;

// printf는 형식을 지정해서 출력하는 것이 좋다. 
// 다음 코드처럼 형식(format)을 정한 후 다음 매개변수로 변수를 넣으면 형식에 맞춰 출력된다.
int main() {
    printf("Chelsea %d : %d ManCity \n", homeTeamScore, awayTeamScore);

    printf("Who are you? : %c \n", c);
    printf("Who are you? : %s \n", str.c_str()); 
    printf("Who are you? : %lf \n", b);
    return 0;

    // 위 코드를 보면 string을 출력할 때는 c_str() 함수를 걸어서 출력하고 있는데 문자열을 printf로 출력할 때 주의할 점이다.
    // printf 문자열을 출력하려면 string을 문자열에 대한 포인터(char *) 타입으로 바꿔주어야 하기 때문이다.
    // 그래서 보통 문자열을 출력할 때는 간단히 cout을 사용하는 것이 좋다.
}
/*
Chelsea 2 : 1 ManCity 

Who are you? : a 
Who are you? : Avatar 
Who are you? : 3.148573 
*/