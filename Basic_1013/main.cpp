#include<stdio.h>
#include<iostream>
using namespace std; 

/*

����(int) 2���� �Է¹޾� �״�� ����غ���.

����

int a, b;
scanf("%d%d", &a, &b);  //����/�������� �Է� �����Ͱ� ���еǾ� �Է�
printf("%d %d", a, b);

�� ���� ������� �����ϴ�.

*/

int main()
{
	int a, b;

	scanf_s("%d %d", &a, &b);
	printf("%d %d", a, b);

	cin >> a >> b;
	cout << a << " " << b << endl; 

	return 0; 
}