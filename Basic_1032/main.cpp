#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

10진수를 입력받아 16진수(hexadecimal)로 출력해보자.

참고
%d(10진수 형태)로 입력받고
%x로 출력하면 16진수(hexadecimal) 소문자로 출력된다.

10진법은 한 자리에 10개(0 1 2 3 4 5 6 7 8 9)의 문자를 사용하고,
16진법은 한 자리에 16개(0 1 2 3 4 5 6 7 8 9 a b c d e f)의 문자를 사용한다.
16진수의 a는 10진수의 10, b는 11, c는 12 ... 와 같다.


입력
10진수 1개가 입력된다.


출력
16진수(소문자)로 출력한다.


입력 예시
255

출력 예시
ff

*/

int main()
{
	int num;

	scanf("%d", &num);
	printf("%x", num);


	cin >> num;
	cout << hex << num;

	return 0;
}