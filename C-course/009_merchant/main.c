#include <stdio.h>

int main(void)
{
	int rub, kop, n, rest, all_kop;

	scanf("%d %d", &rub, &kop);

	all_kop = rub * 100 + kop;
	n = all_kop / 106;
	rest = all_kop - (n * 106);

	printf("%d %d", n, rest);

	return 0;
}
