#include<stdio.h>
#include<iostream>
using namespace std; 

/*

1���� �ܾ �Է¹޾� �״�� ����غ���.


�Է�
�� �ܾ �Էµȴ�.(��, �ܾ��� ���̴� 50�� �����̴�.)

���ڸ� 50�� �����ϱ� ���ؼ��� char data[51] �� �����ϸ� �ȴ�.

char data[51]="";
scanf("%s", data);

�� �����ϸ�, data[51] �� �� �ܾ ����ȴ�.


���
�Էµ� �ܾ �״�� ����Ѵ�.


�Է� ����
Informatics

��� ����
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