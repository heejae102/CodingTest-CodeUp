#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*

1부터 n까지, 1부터 m까지 숫자가 적힌
서로 다른 주사위 2개를 던졌을 때 나올 수 있는 모든 경우를 출력해보자.

참고
중첩의 원리...
반복 실행 구조도 조건 실행 구조와 마찬가지로 중첩의 원리가 적용된다.
반복 실행 구조를 중첩하면 원하는 반복 구조를 다양하게 만들어 낼 수 있다.

예시
int i, j;
int n=3, m=6;
for(i=1; i<=n; i++)
{
  for(j=1; j<=m; j++)
  {
	printf("%d %d ", i, j);
  }
}

의 코드는
바깥쪽의 i가 1부터 n까지로 바뀌는 각각의 동안에
안쪽의 j가 1부터 m까지 변하며 출력된다.

중첩 반복되는 코드블록의 내용이 논리적으로 한 개의 단위이기 때문에
코드블록 기호를 생략하면 아래와 같이 작성할 수도 있다.

int i, j;
int n=3, m=6;
for(i=1; i<=n; i++)
  for(j=1; j<=m; j++)
	printf("%d %d ", i, j);

반복 실행구조를 사용할 때에는
반복횟수를 기록해 두기 위해 i, j와 같은 변수를 선언해 사용해야 한다.


입력
주사위 2개의 면의 개수 n, m이 공백을 두고 입력된다.
단, n, m은 10이하의 자연수


출력
나올 수 있는 주사위의 숫자를 한 세트씩 줄을 바꿔 모두 출력한다.
첫 번째 수는 n, 두 번째 수는 m으로 고정해 출력하도록 한다.


입력 예시
2 3

출력 예시
1 1
1 2
1 3
2 1
2 2
2 3

*/

int main()
{
	int n, m, i = 1, j = 1;
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf("%d %d\n", i, j);
		}
	}

	while (i <= n)
	{
		j = 1;
		while (j <= m)
		{
			printf("%d %d\n", i, j);
			j++;
		}
		i++;
	}

	return 0;
}