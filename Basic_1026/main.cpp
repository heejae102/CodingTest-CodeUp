#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

�ԷµǴ� ��:��:�� ���� �и� ����غ���.

����
int h, m, s;
scanf("%d:%d:%d", &h, &m, &s);

�� �����ϸ� �ݷ��� ���̿� �� �������� �ԷµǾ�, h, m, s�� ���� �������� ����ȴ�.


�Է�
�� �� �ʰ�
��:��:�� �������� �Էµȴ�.


���
�и� ����Ѵ�.


�Է� ����
17:23:57

��� ����
23

*/

int main()
{
	int h, m, s;
	char ch;

	scanf("%d:%d:%d", &h, &m, &s);
	printf("%d", m);
	
	cin >> h >> ch >> m >> ch >> s;
	cout << m << endl; 

	return 0; 
}