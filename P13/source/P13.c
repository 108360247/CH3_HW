#include<stdio.h>
#include<stdlib.h>

double Power(double, int);
int main(void)
{
	int k; double Ans;
	printf("計算3.5的K次方?請輸入K=");
	scanf_s("%d", &k); Ans = Power(3.5,k);
	printf("3.5的%d次方=%f\n", k, Ans);
	system("pause");
}

double Power(double x, int n)
{
	int i; double Powerxn = 1;
	for (i = 1; i <= n; i++)
		Powerxn = Powerxn * x;
	return Powerxn;
}