#include <stdio.h>
/**
*main - main entry point
*return : always 0 (success)
*/
int main(void)
{
	printf("size of char: %lu byte(s)", sizeof(char));
    printf("size of an int: %lu byte(s)", sizeof(int));
    printf("size of a long int: %lu byte(s)", sizeof(long int));
    printf("size of a long long int: %lu byte(s)", sizeof(long long int));
    printf("size of a float: %lu byte(s)",sizeof(float));
	return (0);
}