#include <iostream>
#include <string.h>
using namespace std;
struct Store {
    double price;
    // Book
    union {
        struct {
            int num_pages;
            char design[20];
            char author[20];
        } book;
        // Shirt
        struct {
            char colour[20];
            char size;
        } shirt;
    }item;
};
int main() {
    char design[20] = "Ebook"; // Static array
    struct Store s;
    s.price = 250.50;
    s.item.book.num_pages = 500;
    strcpy(s.item.book.design, "Ebook");
    strcpy(s.item.book.author, "Bjarne Stroustrup");
    printf("SIze of book is: %llu bytes.", sizeof(s));
    return 0;
}
