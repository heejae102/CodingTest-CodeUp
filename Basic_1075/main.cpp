#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

정수(1 ~ 100) 1개가 입력되었을 때 카운트다운을 출력해보자.


예시
int n;
scanf("%d", &n);
while(n!=0)
{
  n=n-1; //n--; 와 같다.
  printf("%d", n);
}


입력
정수 1개가 입력된다.
(1 ~ 100)

출력
1씩 줄이면서 한 줄에 하나씩 0이 될 때까지 출력한다.


입력 예시
5

출력 예시
4
3
2
1
0

*/

int main()
{
	int cnt;
	scanf("%d", &cnt);

	//while (1)
	//{
	//	printf("%d\n", --cnt);
	//	if (cnt <= 0) break;
	//}

	for (int i = cnt - 1; i >= 0; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}