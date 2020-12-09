#include<stdio.h>
#include<iostream>
using namespace std; 

/*

int형 정수 1개를 입력받아 공백을 사이에 두고 3번 출력해보자.

참고
printf("%d %d %d", a, a, a);

와 같은 방법으로 출력할 수 있다.

입력 예시
125

출력 예시
125 125 125

*/

int main()
{
	int num;

	scanf_s("%d", &num);
	printf("%d %d %d", num, num, num);

	cin >> num;
	cout << num << " " << num << " " << num << endl; 

	return 0; 
}