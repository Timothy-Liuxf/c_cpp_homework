/*#include <stdio.h>
int Ack(int n, int x, int y) {
	if (!n) return (x + 1);
	if (!y) {
		if (n == 1 ) return x;
		if (n == 2 ) return 0;
		if (n == 3 ) return 1;
		return 2;
	}
	return Ack(n - 1, Ack(n, x, y - 1), x);
}
int main() {
	printf("%d", Ack(3, 4, 5));
	return 0;
}*/