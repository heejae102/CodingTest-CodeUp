#include<stdio.h>
#include<iostream>
using namespace std; 

/*

���� ���ڰ� ���ԵǾ� �ִ� ������ �Է¹ް� �״�� ����ϴ� ������ �غ���.

����
char data[2001];
fgets(data, 2000, stdin);
printf("%s", data);

���� ���� �����ϸ� ������ ���Ե� ������ Ű����(stdin)�� �Է¹޾�
�ִ� 2000�ڱ��� data[ ] ������ �����ϰ� ����� �� �ִ�.

%s �� ���ڿ�(string, �Ƿ� ����� ���ڵ�. ����)�� ����϶�� �ǹ��̴�.

����
fgets( ) �� ����ϸ� ���鹮�ڰ� ���ԵǾ��մ� ������ �Է¹޾� ������ �� �ִ�.
����, �Ʒ�ó��
scanf("%s", ... ) �� �̿��� ������ �Է¹�����, ù ��° �ܾ������ ����ȴ�.

char data[51] = ""; //�ִ� 50���ڱ��� ���� ����
scanf("%s", data);


�Է�
������ ���ԵǾ� �ִ� �� ������ �Էµȴ�.
��, �ԷµǴ� ������ ���� ���� �ܾ�� �����ǰ�, ���ͷ� ������,
�ִ� ���̴� 2000 ���ڸ� ���� �ʴ´�.

���
�Էµ� ������ �״�� ����Ѵ�.

�Է� ����
Programming is very fun!!

��� ����
Programming is very fun!!

*/

int main()
{
	char data[2001];

	//NULL ���ڰ� �� �ڸ��� �������� �ϹǷ� size -1 

	fgets(data, sizeof(data) - 1, stdin);
	printf("%s", data);

	cin.getline(data, sizeof(data) - 1);
	cout << data << endl; 

	return 0;
}