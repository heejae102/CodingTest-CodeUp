#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<iostream>
using namespace std; 

/*

실수 1개를 입력받아 정수 부분과 실수 부분으로 나누어 출력한다.

** 여러 가지 방법들로 해결할 수 있다.

만약 실수 부분이 0으로 시작하지 않는다면(예를 들어 1.000009)
scanf("%d.%d", &a, &b)도 하나의 방법이 될 수 있다.


입력
실수 1개가 입력된다.
(단, 입력값은 절댓값이 10000을 넘지 않으며, 소수점 이하 자릿수는 최대 6자리까지이고
0이 아닌 숫자로 시작한다.)


출력
첫 번째 줄에 정수 부분을, 두 번째 줄에 실수 부분을 출력한다.


입력 예시
1.414213

출력 예시
1
414213

*/

int main()
{
	int a, b;
	char ch; 

	scanf("%d.%d", &a, &b);
	printf("%d\n%d", a, b);

	cin >> a >> ch >> b;
	cout << a << endl << b << endl; 

	return 0;
}