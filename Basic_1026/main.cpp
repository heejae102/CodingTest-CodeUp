#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

입력되는 시:분:초 에서 분만 출력해보자.

참고
int h, m, s;
scanf("%d:%d:%d", &h, &m, &s);

를 실행하면 콜론을 사이에 둔 형식으로 입력되어, h, m, s에 각각 정수값만 저장된다.


입력
시 분 초가
시:분:초 형식으로 입력된다.


출력
분만 출력한다.


입력 예시
17:23:57

출력 예시
23

*/

int main()
{
	int h, m, s;
	char ch;

	scanf("%d:%d:%d", &h, &m, &s);
	printf("%d", m);
	
	cin >> h >> ch >> m >> ch >> s;
	cout << m << endl; 

	return 0; 
}