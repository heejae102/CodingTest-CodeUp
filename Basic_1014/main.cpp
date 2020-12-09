#include<stdio.h>
#include<iostream>
using namespace std; 

/*

2개의 문자(ASCII CODE)를 입력받아서 순서를 바꿔 출력해보자.

참고
char x, y;
scanf("%c %c", &x, &y);
printf("%c %c", y, x); //출력되는 순서를 작성
와 같은 방법으로 해결할 수 있다.

입력
2개의 문자가 공백으로 구분되어 입력된다.

출력
두 문자의 순서를 바꿔 출력한다.

*/

int main()
{
	char a, b;

	//scanf("%c %c", &a, &b);
	//scanf_s 함수로 문자를 입력받을 시, 문자의 사이즈를 매개변수로 넘겨야 함. 
	scanf_s("%c %c", &a, 1, &b, 1);
	printf("%c %c", b, a);

	cin >> a >> b;
	cout << b << " " << a << endl; 

	return 0; 
}