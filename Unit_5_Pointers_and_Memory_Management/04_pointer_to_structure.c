#include <stdio.h>

struct Book {
    int id;
    char title[50];
};

int main(void)
{
    struct Book book = {1, "C Programming"};
    struct Book *ptr = &book;

    printf("Book ID: %d\n", ptr->id);
    printf("Title: %s\n", ptr->title);
    return 0;
}
