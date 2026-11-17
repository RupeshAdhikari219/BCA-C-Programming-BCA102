#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char text[200];
    int left = 0, right;

    printf("Enter a word: ");
    if (scanf("%199s", text) != 1) return 1;

    right = (int)strlen(text) - 1;
    while (left < right) {
        if (tolower((unsigned char)text[left]) !=
            tolower((unsigned char)text[right])) {
            printf("Not a palindrome.\n");
            return 0;
        }
        left++;
        right--;
    }

    printf("Palindrome.\n");
    return 0;
}
