#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

/*

다섯 자리의 정수 1개를 입력받아 각 자리별로 나누어 출력한다.

참고
scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
를 사용하면 1개의 숫자로 각각 구분되어 저장된다.

예시
읽어들인 값을 적당히 바꿔 출력하기 위해서

printf("[%d]", a*10000);

과 같은 방법도 가능하다.


입력
다섯 자리로 이루어진 1개의 정수를 입력받는다.
(단, 10,000 <= 입력받는 수 <= 99,999 )


출력
각 자리의 숫자를 분리해 한 줄에 하나씩 [ ]속에 넣어 출력한다.


입력 예시
75254

출력 예시
[70000]
[5000]
[200]
[50]
[4]

*/

int main()
{
	//C-1. 각 숫자를 나누어 저장해서 출력 
	int a, b, c, d, e;

	//%nd n개의 숫자만큼만 값을 입력받기 
	scanf("%1d %1d %1d %1d %1d", &a, &b, &c, &d, &e);

	printf("[%d]\n", a * 10000);
	printf("[%d]\n", b * 1000);
	printf("[%d]\n", c * 100);
	printf("[%d]\n", d * 10);
	printf("[%d]\n", e);


	//C-2. 하나의 숫자를 입력받아 자릿수마다 출력 
	int num; 
	scanf("%d", &num);

	for (int i = 10000; i >= 1; i /= 10)
	{
		printf("[%d]\n", (num / i)*i);
		num -= (num / i)*i;
	}

	//CPP-1. 각 숫자를 char로 저장해서 출력 
	char a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	cout << '[' << (a - '0') * 10000 << ']' << endl; 
	cout << '[' << (b - '0') * 1000 << ']' << endl;
	cout << '[' << (c - '0') * 100 << ']' << endl;
	cout << '[' << (d - '0') * 10 << ']' << endl;
	cout << '[' << (e - '0') << ']' << endl;

	//CPP-2. 하나의 숫자를 입력받아 자릿수마다 출력 
	int num;
	cin >> num;

	for (int i = 10000; i >= 1; i /= 10)
	{
		cout << '[' << (num / i)*i << ']' << endl; 
		num -= (num / i)*i;
	}

	return 0; 
}