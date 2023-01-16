#include </Users/jiwooyun/bits/stdc++.h>  
using namespace std;  

//scanf는 형식을 지정해서 입력을 받는다.
//주로 입력형식이 까다롭거나 이를 이용해야할 때 사용하는게 좋으며 보통은 cin을 쓰는게 좋다.
// %s는 string 타입.
// %d는 int 타입.
// %lf는 double 타입.
// %c는 char 타입.
int a;
double b;
char c;

int main(){
    scanf("%d %lf %c", &a, &b, &c);
    printf("%d\n", a); 
    printf("%lf\n", b);
    printf("%c\n", c);
    
    return 0;
}
/*
입력
23330
2.333
asd

출력
23330
2.333000
a
*/