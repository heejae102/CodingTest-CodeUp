#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

/*

두 가지의 참(1) 또는 거짓(0)이 입력될 때,
참/거짓이 서로 다를 때에만 참을 출력하는 프로그램을 작성해보자.


참고
이러한 논리연산을 XOR(exclusive or, 배타적 논리합)연산이라고도 부른다.
집합의 의미로는 합집합에서 교집합을 뺀 것을 의미한다. 모두 같은 의미이다.

논리연산자는 사칙연산자와 마찬가지로 여러 번 중복해서 사용할 수 있는데,
연산의 순서를 만들어주기 위해 괄호 ( )를 사용해 묶어 주면 된다.

수학에서는 괄호, 중괄호, 대괄호를 사용하지만 C언어에서는 소괄호 ( )만을 사용한다.

예시
printf(“%d”, (a&&!b)||(!a&&b)); //참/거짓이 서로 다를 때에만 1로 계산


입력
1 또는 0의 값만 가지는 2개의 정수가 공백을 두고 입력된다.


출력
참/거짓이 서로 다를 때에만 1을 출력하고, 그 외의 경우에는 0을 출력한다.


입력 예시
1 1

출력 예시
0

*/

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", (!a && b) || (a && !b));
	printf("%d", a^b);


	cin >> a >> b;
	cout << ((!a&&b) || (a && !b)) << endl;
	cout << (a^b) << endl; 

	return 0;
}