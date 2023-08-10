#include <string.h>
#include <unistd.h>
/**
 * main - print string
 *
 * Return: 1
 */
int main(void)
{
	const char* message="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	size_t len=strlen(message);
	write(1, message, len);
	return (1);
}
