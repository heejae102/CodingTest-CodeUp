#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std; 

/*

������ 1���� �Է¹޾� �ƽ�Ű �ڵ�ǥ�� 10���� ������ ����غ���.

����
�ƽ�Ű �ڵ��
(ASCII, �̱�ǥ���ڵ�, American Standard Code for Information Interchange)
������, Ư�� ���� ���� ������ �� ����ϴ� ǥ�� �ڵ��̴�.

��ǻ�ͷ� ����Ǵ� ��� �����ʹ� 2�� ����ȭ�Ǿ� ����Ǵµ�,
�����ڿ� Ư����ȣ ���� �����ϴ� ������� �ƽ�Ű�ڵ尡 �⺻������ ���ȴ�.

���� ��� ���� �빮�� "A"�� 10���� 65�� �ǹ��ϴ� 2���� ������ ����ȴ�.


�Է�
������ 1���� �Էµȴ�.


���
�ƽ�Ű�ڵ� ���� 10������ ����Ѵ�.


�Է� ����
A

��� ����
65

*/

int main()
{
	char ch; 

	scanf("%c", &ch);
	printf("%d", ch);


	cin >> ch;
	cout << int(ch) << endl; 

	return 0;
}