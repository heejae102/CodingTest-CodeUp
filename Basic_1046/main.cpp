#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

/*

정수 3개를 입력받아 합과 평균을 출력해보자.
단, -2147483648 ~ +2147483647


입력
정수 3개가 공백을 두고 입력된다.
단, -2147483648 ~ +2147483647


출력
합과 평균을 줄을 바꿔 출력한다.
평균은 소수점 이하 둘째 자리에서 반올림해서 소수점 이하 첫째 자리까지 출력한다.


입력 예시
1 2 3

출력 예시
6
2.0

*/

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a + b + c);
	printf("%.1lf\n", (a + b + c) / 3.0);


	cin >> a >> b >> c;
	cout << a + b + c << endl; 
	cout << fixed << setprecision(1) << (a + b + c) / 3.0f << endl; 


	return 0; 
}