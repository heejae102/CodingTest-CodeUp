#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

�򰡸� ����(A, B, C, D, ...)�� �Է¹޾� ������ �ٸ��� ����غ���.

�� ����
�� : ����
A : best!!!
B : good!!
C : run!
D : slowly~
������ ���ڵ� : what?


����
����/���ù��� ���������� ������ ����� ���� ������,

switch(������)
{
  case 'A': //���� 'A'�� ������ 65('A'�� �ƽ�Ű ��)�� ����Ǳ� ������ �����ϴ�.
	...;
	break;
  case 'B':
	...;
	break;
  case 'C':
	...;
	break;
  default:
	...;
}

���� ���� switch( ) ... case... break; ����� ����� �� �ִ�.

** break; �� ������� ������ ������ ��ɵ鵵 ��� ����ȴ�.
default: �� ���õ� case �� ������ ������ ��� ��쿡 ����ȴ�.
switch( ) �� �־����� ���� ������"���� �����ϸ�,
���ڵ� �ƽ�Ű�ڵ� �������̱� ������ �����ϴ�.





�Է�
������ 1���� �Էµȴ�.
(A, B, C, D ���� �� ���ڰ� �Էµȴ�.)


���
�򰡳��뿡 ���� �ٸ� ������ ��µȴ�.


�Է� ����
A

��� ����
best!!!

*/

int main()
{
	char ch;

	scanf("%c", &ch);

	if (ch == 'A') printf("best!!!\n");
	else if(ch=='B') printf("good!!\n");
	else if (ch == 'C') printf("run!\n");
	else if (ch == 'D') printf("slowly~\n");
	else printf("what?\n");


	switch (ch)
	{
	case 'A':
		printf("best!!!\n");
		break;

	case 'B':
		printf("good!!\n");
		break;

	case 'C':
		printf("run!\n");
		break;

	case 'D':
		printf("slowly~\n");
		break;

	default:
		printf("what?\n");
		break;
	}

	return 0;
}