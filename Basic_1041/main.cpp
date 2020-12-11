#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

/*

영문자 1개를 입력받아 그 다음 문자를 출력해보자.

영문자 'A'의 다음 문자는 'B'이고, 영문자 '0'의 다음 문자는 '1'이다.

참고
숫자는 수를 표현하는 문자로서 '0' 은 문자 그 자체를 의미하고, 0은 값을 의미한다.

힌트
아스키문자표에서 'A'는 10진수 65로 저장되고 'B'는 10진수 66으로 저장된다.
따라서 문자도 값으로 덧셈을 할 수 있다.


입력
영문자 1개가 입력된다.


출력
다음 문자를 출력한다.


입력 예시
a

출력 예시
b

*/

int main()
{
	char ch; 

	scanf("%c", &ch);
	printf("%c", ch + 1);


	cin >> ch;
	
	//문자형 변수와 정수의 연산으로 출력 시, 정수형으로 출력됨.
	//문자형으로 출력하고자 한다면 char형으로 캐스팅 필요. 
	cout << char(ch + 1) << endl;

	return 0;
}