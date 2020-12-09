#include<stdio.h>
#include<iostream>
using namespace std; 

/*

1개의 단어를 입력받아 그대로 출력해보자.


입력
한 단어가 입력된다.(단, 단어의 길이는 50자 이하이다.)

문자를 50개 저장하기 위해서는 char data[51] 로 선언하면 된다.

char data[51]="";
scanf("%s", data);

를 실행하면, data[51] 에 한 단어가 저장된다.


출력
입력된 단어를 그대로 출력한다.


입력 예시
Informatics

출력 예시
Informatics

*/

int main()
{
	char data[51] = "";

	//scanf("%s", data);
	scanf_s("%s", data, sizeof(data));
	printf("%s", data);

	cin >> data;
	cout << data;

	return 0; 
}