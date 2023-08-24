#include <stdio.h>

/**
 * before_main - function executed before main
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
