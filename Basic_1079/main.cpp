#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

'q'가 입력될 때까지 입력한 문자를 계속 출력하는 프로그램을 작성해보자.


입력
문자들이 1개씩 계속해서 입력된다.


출력
'q'가 입력될 때까지 입력된 문자를 줄을 바꿔 한 줄씩 출력한다.


입력 예시
x b k d l q g a c

출력 예시
x
b
k
d
l
q

*/

int main()
{
	char ch;

	while (1)
	{
		//문자 뒤에 한칸 공백을 두지 않으면 출력 시 이상한 공백이 생김. 
		scanf("%c ", &ch);
		printf("%c\n", ch);
		if (ch == 'q') break;
	}

	return 0;
}