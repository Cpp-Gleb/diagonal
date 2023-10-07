#include <stdio.h>
int main()
{
int N, i;
scanf("%d", &N);
int a[N][N];
int sum1 = 0;
for(i = 0; i < N; i++)
{
	for(int j = 0; j < N; j++)
	{
		scanf("%d", &a[i][j]);
		if(i == j)
		{
			sum1 += a[i][j];
		}
	}
}
int sum2 = 0;
for(i = 0; i < N; i ++)
{
	sum2 += a[N - 1 - i][i];
}
printf("%d %d", sum1, sum2);
return 0;
}
