#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

1, 2, 3 ... �� ������� ��� ���س��� ��,
�� ���� �Է��� �������� ���� ���ȸ� ��� ���ϴ� ���α׷��� �ۼ��غ���.

��, 1���� n���� ������ ��� ���Ѵٰ� �� ��,
������ ���ؾ� �Է��� ������ ���ų� Ŀ������ �˾ƺ����� �ϴ� �����̴�.

������, �̹����� �� ���� ���� ����ؾ� �Ѵ�.

���� ��� 57�� �Է��ϸ�
1+2+3+...+8+9+10=55�� �ٽ� 11�� ���� 66�� �� ��,
�� �� 66�� ��µǾ�� �Ѵ�.


����
���ǹ��̳� �ݺ����� �ڵ���� �ȿ��� break;�� ����Ǹ�
���� ����� �ݺ� �ڵ���� ������ ������ ����������.


����
int n, i, s=0;
scanf("%d", &n);
for(i=1; ; i++) //for �ݸ񹮿��� ����� ������ ���� ��� ���� �ݺ��ȴ�.
{
  s+=i;
  if(s>=n)
	break; //���̸�, ���� ����� �ݺ� �ڵ������ ������ ����������.
} //break; �� ����Ǹ� �ݺ��� �ߴ��ϰ� ����� ���� ���´�.
printf("%d", s);

���� �ݺ��� �Ǵ� �ڵ��
while(1) {...}, do {...}while(1); � �����ϴ�.
0�� �ƴϸ� ��� ��(true)���� �νĵǱ� �����̴�.


�Է�
�������� ���� ����� ��, ���� 1���� �Է¹޴´�.
��, �ԷµǴ� �ڿ����� 100,000,000�����̴�.


���
1, 2, 3, 4, 5 ... ������� ��� ���ذ��ٰ�, �� ���� �Էµ� �������� Ŀ���ų� �������� ���,
�׶������� ���� ����Ѵ�.


�Է� ����
57

��� ����
66

*/

int main()
{
	int num, sum = 0;
	scanf("%d", &num);

	for (int i = 1; ; i++)
	{
		sum += i;
		if (sum >= num) break; 
	}

	printf("%d\n", sum);

	return 0;
}