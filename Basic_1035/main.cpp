#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

16진수로 입력된 정수 1개를 8진수로 바꾸어 출력해보자.

참고
%x(영문자 소문자) 나 %X(영문자 대문자)로 입력 받으면
16진수로 인식시켜 저장시킬 수 있다. %o로 출력하면 8진수로 출력된다.

C언어에서 소스 코드 작성시 0으로 시작하는 수는 8진수로 인식된다.


예시
int n;
scanf("%x", &n); //소문자로 16진수 입력
printf("%o", n);


입력
16진 정수 1개가 입력된다.
(단, 16진수는 영문 소문자로 입력된다.)


출력
8진수로 바꾸어 출력한다.


입력 예시
f

출력 예시
17

*/

int main()
{
	int num;

	scanf("%x", &num);
	printf("%o", num);


	cin >> hex >> num;
	cout << oct << num;

	return 0;
}