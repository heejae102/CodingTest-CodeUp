#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

단어를 1개 입력받는다.

입력받은 단어(영어)의 각 문자를

한줄에 한 문자씩 분리해 출력한다.


참고
C언어에서는 문장을 저장하기 위해 특별한 방법을 사용하지 않고,
배열이라는 연속된 공간에 문자들을 연속으로 한 개씩 저장하는 방법을 사용한다.
단, 문자열(문자가 연속적으로 연결된 줄이라는 의미. 즉 문장)의 마지막임을 나타내기 위해
문자열의 마지막에 널(NULL) 문자라는 특별한 의미를 가지는 문자를 삽입해 문장임을 나타낸다.

널(NULL)은 영어 단어 자체의 의미로는, 아무런 가치가 없는 또는 아무것도 없는, 

사용되지 않은 등의 의미를 가지는데,

문자로는 '\0', 아스키문자의 정수값은 0을 의미하며 NULL 로도 사용할 수 있다.

단어나 문장을 scanf("%s", ...); 로 입력받게 되면, 

그 마지막에 널문자가 자동으로 입력되는 것이다.

그러므로, 본 문제는 그렇게 저장되어있는 영문자들을 한 개씩 순차적으로 검사해서,

문장의 마지막을 나타내는 널문자가 나올 때까지 모양을 만들어 출력하면 되는 것이다.

나중에 조건실행문, 반복문, 배열에 대해서 배우면 명확히 이해할 수 있게 된다.

printf("%s", ...); 는 결국, 저장되어있는 문자의 마지막까지, 

즉 널문자가 나올 때까지 형식에 맞추어 출력해 주라는 의미를 가진다.


예시
char d[30]; //최대 30문자를 저장할 수 있는 저장 공간 준비. 마지막에 널문자 고려해야함
scanf("%s", d); //그 공간에 키보드로 입력된 내용을 저장. 
단 공백이 있으면 거기까지만 입력됨.
for(i=0; d[i]!='\0'; i++) //저장된 내용을 하나하나씩 검사해서 널문자가 아닐 동안 아래 실행
{
   printf("\'%c\'", d[i]);
}


입력
단어(영어) 하나를 입력받는다.
(단, 단어의 길이는 20자 이하이다.)


출력
단어의 문자(영어)를 하나씩 나누어 한 줄에 한 개씩
' '로 묶어서 출력한다.


입력 예시
Boy

출력 예시
'B'
'o'
'y'

*/

int main()
{
	char ch[21];

	scanf("%s", ch);

	for (int i = 0; ch[i] != NULL; i++)
	{
		printf("\'%c\'\n", ch[i]);
	}

	cin >> ch; 

	for (int i = 0; i < ch[i] != NULL; i++)
	{
		cout << '\'' << ch[i] << '\'' << endl; 
	}

	return 0;
}