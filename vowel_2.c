
    // In the English language, examples of consonant sounds include:

    // b, c, d, f, g, h, j, k, l, m, n, p, q, r, s, t, v, w, x, y, z
    // sh, ch, th, ng
    // Consonant blends such as "bl", "str", "dr", etc.
 

// ! I think it is not important bec we have no knowledge about ctype.h header fil 
#include <stdio.h>
#include <ctype.h>

int is_vowel(char character) {
    char vowels[] = "aeiouAEIOU";
    int i;

    for (i = 0; vowels[i] != '\0'; i++) {
        if (character == vowels[i]) {
            return 1;  // Return true if character is a vowel
        }
    }
    return 0;  // Return false if character is not a vowel
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (isalpha(character) && character != '\n') {
        if (is_vowel(character)) {
            printf("%c is a vowel.\n", character);
        } else {
            printf("%c is a consonant.\n", character);
        }
    } else {
        printf("Please enter a single alphabet character.\n");
    }

    return 0;
}
