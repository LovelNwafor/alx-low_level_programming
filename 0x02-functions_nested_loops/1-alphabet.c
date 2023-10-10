#include <unistd.h>

int main(void)
{
    char str[] = "_putchar\n";
    write(STDOUT_FILENO, str, sizeof(str) - 1);
    return (0);
}
