/*#include <stdio.h>
int main()
{
	char a, b, c, d, e, f;
	for (a = 0; a < 2; ++a)
		for (b = 0; b < 2; ++b)
			for (c = 0; c < 2; ++c)
				for (d = 0; d < 2; ++d)
					for (e = 0; e < 2; ++e)
						for (f = 0; f < 2; ++f)
							//If C don't go, neither do B; one of C and D will go; D and E are consistent.
							if ((c + b == 0 || c) && (c + d == 1) && (d + e == 2 || d + e == 0) &&
								//Two of A, C and F will go; C and F can't go together; at least one of E and F will go.
								a + b + f == 2 && c + f < 2 && e + f > 0)
							{
								if (a)
									printf("A ");
								if (b)
									printf("B ");
								if (c)
									printf("C ");
								if (d)
									printf("D ");
								if (e)
									printf("E ");
								if (f)
									printf("F ");
								printf("is supposed to go.\n");
							}
	return 0;
}
*/
