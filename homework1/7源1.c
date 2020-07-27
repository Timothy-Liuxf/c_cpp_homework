#pragma warning(disable:4996)
#include <stdio.h>
inline fourTimes(int n) {
	return n * n * n * n * n;
}
int main() {
	for (int a = 1; a < 10; ++a)
		for (int b = 0; b < 10; ++b)
			for (int c = 0; c < 10; ++c)
				for (int d = 0; d < 10; ++d)
					for (int e = 0 ; e < 10 ; ++e)
						if (fourTimes(a) + fourTimes(b) + fourTimes(c) + fourTimes(d) == a * 10000 + b * 1000 + c * 100 + d * 10 + e) printf("%d%d%d%d%d\n", a, b, c, d , e);
}