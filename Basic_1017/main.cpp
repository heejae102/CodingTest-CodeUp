#include<stdio.h>
#include<iostream>
using namespace std; 

/*

int�� ���� 1���� �Է¹޾� ������ ���̿� �ΰ� 3�� ����غ���.

����
printf("%d %d %d", a, a, a);

�� ���� ������� ����� �� �ִ�.

�Է� ����
125

��� ����
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