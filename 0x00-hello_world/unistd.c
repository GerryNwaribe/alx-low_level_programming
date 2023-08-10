#include <unistd.h>

int main() {
    const char *str = "Hello, World!\n";
    write(1, str, sizeof(str) - 1);  // -1 to exclude the null terminator
    return 0;
}

