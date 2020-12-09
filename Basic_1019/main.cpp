#include<stdio.h>
#include<iostream>
using namespace std; 

/*

년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자.


입력
연, 월, 일이 ".(닷)"으로 구분되어 입력된다.


출력
입력받은 연, 월, 일을 yyyy.mm.dd 형식으로 출력한다.
(%02d를 사용하면 2칸을 사용해 출력하는데, 한 자리 수인 경우 앞에 0을 붙여 출력한다.)


입력 예시
2013.8.5

출력 예시
2013.08.05

*/

int main()
{
	int y, m, d;
	char ch; 

	scanf_s("%d.%d.%d", &y, &m, &d);
	printf("%04d.%02d.%02d", y, m, d);

	cin >> y >> ch >> m >> ch >> d;

	//width(n) : n칸만큼 출력 
	//fill(n)  : 남은 칸은 n을 붙여서 출력 
	//※fill의 n에 정수를 입력하면 빈칸으로 출력됨. 
	cout.width(4);
	cout.fill('0');
	cout << y << ch;

	cout.width(2);
	cout.fill('0');
	cout << m << ch;

	cout.width(2);
	cout.fill('0');
	cout << d << endl; 

	return 0; 
}