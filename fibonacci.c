#include <stdio.h>

int fib(int f) {
    return f;
}


int main(int argc, char argv**) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <int>\n", argv[0]);
        return 1;
    }

    return fib(atoi(argv[1]));
}
