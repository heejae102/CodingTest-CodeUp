#include<stdio.h>
#include<iostream>
using namespace std;

/*

������(char)���� ������ �ϳ� �����ϰ�, ������ ���ڸ� ������ ��
������ ����Ǿ� �ִ� ���ڸ� �״�� ����غ���.

����
char x;
scanf("%c", &x);
printf("%c", x);

�� ���� ������� �����ϴ�.

*/

int main()
{
	char ch;

	scanf_s("%c", &ch);
	printf("%c", ch);

	cin >> ch; 
	cout << ch << endl; 

	return 0; 
}