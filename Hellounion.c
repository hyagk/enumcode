#include <stdio.h>

union wo {
	int i;
	float f;
};

int main() {
	union wo s;

	s.i = 33;

	printf("s.i는 %d이다\n",s.i);

	s.f = 27.2;

	printf("s.f는 %f이다\n", s.f);

	return 0;
}