#include<stdio.h>
#include<iostream>
using namespace std; 

/*

�ֹι�ȣ�� ������ ���� �����ȴ�.

XXXXXX-XXXXXXX

���� 6�ڸ��� �������(yymmdd)�̰� �� 7�ڸ��� ����, ����, ���������ڵ��̴�.
�ֹι�ȣ�� �Է¹޾� ���¸� �ٲ� ����غ���.

�Է�
�ֹι�ȣ �� 6�ڸ��� �� 7�ڸ��� '-'�� ���еǾ� �Էµȴ�.
(�Է°��� ������ �ֹι�ȣ�̴�.)
ex)110011-0000000

���
'-'�� ������ �ֹι�ȣ 13�ڸ��� ��� �ٿ� ����Ѵ�.

�Է� ����
000907-1121112

��� ����
0009071121112

*/

int main()
{
	int a, b;
	char ch; 

	scanf_s("%d-%d", &a, &b);
	printf("%06d%07d", a, b);

	cin >> a >> ch >> b;

	cout.width(6);
	cout.fill('0');
	cout << a;

	cout.width(7);
	cout.fill('0');
	cout << b << endl; 

	return 0; 
}