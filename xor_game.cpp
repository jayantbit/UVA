#include <stdio.h>
const int nmax = 500;
 
int a[nmax + 18], b[nmax + 18];
int n, k, t;
 
int main()
{
    scanf("%d", &t);
    while (t--)
    {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) scanf("%d", a + i);
    for (int m = 1; k; m <<= 1, k >>= 1)
	if (k & 1)
	{
	    for (int j = 1; j <= n; ++j) b[j] = a[j];
	    for (int l = ((-m % n + n) % n) + 1, r = (m % n) + 1, j = 1; j <= n; ++j)
	    {
		a[j] ^= b[l++] ^ b[r++];
		if (l > n) l = 1;
		if (r > n) r = 1;
	    }
	}
    for (int i = 1; i <= n; ++i) printf("%d ", a[i]);
    printf("\n");
    }
    return 0;
}
