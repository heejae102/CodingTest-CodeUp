#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

/*

정수 2개(a, b)를 입력받아 합, 차, 곱, 몫, 나머지, 나눈 값을 자동으로 계산해보자.
단 0 <= a, b <= 2147483647, b는 0이 아니다.


입력
정수 2개가 공백을 두고 입력된다.


출력
첫 줄에 합
둘째 줄에 차,
셋째 줄에 곱,
넷째 줄에 몫,
다섯째 줄에 나머지,
여섯째 줄에 나눈 값을 순서대로 출력한다.
(실수, 소수점 이하 셋째 자리에서 반올림해 둘째 자리까지 출력)


입력 예시
10 3

출력 예시
13
7
30
3
1
3.33

*/

int main()
{
	long long a, b;

	scanf("%lld %lld", &a, &b);

	printf("%lld\n", a + b);
	printf("%lld\n", a - b);
	printf("%lld\n", a * b);
	printf("%lld\n", a / b);
	printf("%lld\n", a % b);
	printf("%.2lf\n", (double)a / b);


	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	cout << fixed << setprecision(2) << (double)a / b << endl;

	return 0;
}