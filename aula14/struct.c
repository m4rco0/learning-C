#include <stdio.h>
#include <string.h>
struct st
{
	unsigned char id;
	unsigned int num;
};

int main(void)
{
	struct st s;

	s.num = 2017;
	s.id = 0x41;
	s.id = 0x90;
	printf("s.num: %d\n", s.num);
	memset(&s, 1, sizeof(struct st));

	printf("s.id: %d\n", s.id);
	printf("s.num: %d\n", s.num);

	printf("sizeof(struct st): %d\n", sizeof(struct st));
	return 0;
}