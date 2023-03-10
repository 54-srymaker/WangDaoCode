#include <iostream>
#include <cstdlib>

void readString(char *&str) {
    str = (char *) malloc(100);
    fgets(str, 100, stdin);
}

int main() {
    char *p;
    readString(p);
    puts(p);
    free(p);
    return 0;
}
