#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

정수(1 ~ 100) 1개가 입력되었을 때 카운트다운을 출력해보자.


while(조건)
{
  ...
}
구조를 사용하자.

예시
int n;
scanf("%d", &n);
while(n!=0)
{
  printf("%d", n);
  n=n-1; //n--;와 같다.
}


입력
정수 1개가 입력된다.
(1 ~ 100)


출력
1씩 줄이면서 한 줄에 하나씩 1이 될 때까지 출력한다.


입력 예시
5

출력 예시
5
4
3
2
1

*/

int main()
{
	int cnt;
	scanf("%d", &cnt);

	for (; cnt > 0; cnt--)
	{
		printf("%d\n", cnt);
	}

	while (1)
	{
		printf("%d\n", cnt--);
		if (cnt <= 0) break; 
	}

	return 0;
}