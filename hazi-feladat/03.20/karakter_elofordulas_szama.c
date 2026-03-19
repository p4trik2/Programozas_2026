#include <stdio.h>

int char_count(char s[], char c) {
    int db = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            db++;
        }
    }

    return db;
}

int main() {
    char szo[] = "Abba";
    
    printf("char_count(\"Abba\", 'b') -> %d\n", char_count(szo, 'b'));
    printf("char_count(\"Abba\", 'a') -> %d\n", char_count(szo, 'a'));
    printf("char_count(\"Abba\", 'x') -> %d\n", char_count(szo, 'x'));

    return 0;
}