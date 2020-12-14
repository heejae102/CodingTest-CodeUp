#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

16진수(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F)를 배운
영일(01)이는 16진수끼리 곱하는 16진수 구구단?에 대해서 궁금해졌다.

A, B, C, D, E, F 중 하나가 입력될 때,
1부터 F까지 곱한 16진수 구구단의 내용을 출력해보자.
(단, A ~ F 까지만 입력된다.)


입력
16진수로 한 자리 수가 입력된다.
단, A ~ F 까지만 입력된다.


출력
입력된 16진수에 1~F까지 순서대로 곱한, 16진수 구구단을 줄을 바꿔 출력한다.
계산 결과도 16진수로 출력해야 한다.


입력 예시
B

출력 예시
B*1=B
B*2=16
B*3=21
B*4=2C
B*5=37
B*6=42
B*7=4D
B*8=58
B*9=63
B*A=6E
B*B=79
B*C=84
B*D=8F
B*E=9A
B*F=A5

*/

int main()
{
	int num;
	scanf("%x", &num);

	//1~F까지만 곱하므로 16은 제외
	for (int i = 1; i < 16; i++)
	{
		printf("%X*%X=%X\n", num, i, num*i);
	}

	//----------------------------------------------//

	//B*1=B
	cin >> hex >> num;

	for (int i = 1; i < 16; i++)
	{
		cout.setf(ios::uppercase);
		cout << hex << num << '*' << i << '=' << num * i << endl; 
	}

	return 0;
}