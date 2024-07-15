#include <iostream>
using namespace std;
class Book {
public:
    string title;
    string author;
    string isbn;
    int publicationYear;
    Book(string t, string a, string i, int pYear){
        title = t;
        author = a;
        isbn = i;
        publicationYear = pYear;
    }
};
class BorrowDetails {
public:
    string borrowDate;
    string returnDate;
    double lateFees;
    BorrowDetails(string bDate, string rDate, double lFees){
        borrowDate = bDate;
        returnDate = rDate;
        lateFees = lFees;
    }
};
class Member {
public:
    string memberName;
    int memberId;
    int age;
    Book book;
    BorrowDetails borrowDetails;
    Member(string name, int id, int a, Book& b, BorrowDetails& bd) :
            book(b), borrowDetails(bd){
        memberName = name;
        memberId = id;
        age = a;
    }
    void displayBorrowDetails(){
        cout << "The borrow details of the member are:" << endl;
        cout << "Member name: "<< memberName << endl;
        cout << "Member ID: "<< memberId << endl;
        cout << "Member Age: "<< age << endl;
        cout << "The book details are: " << endl;
        cout << "Title: " << book.title << endl;
        cout << "Author: " << book.author << endl;
        cout << "ISBN: " << book.isbn << endl;
        cout << "Publication Year: " << book.publicationYear << endl;
        cout << "The book borrow details are: " << endl;
        cout << "Borrow Date: " << borrowDetails.borrowDate << endl;
        cout << "Return Date: " << borrowDetails.returnDate << endl;
        cout << "Late Fees: " << borrowDetails.lateFees << endl;
    }
};
int main() {
    // Syntax 1
    Book book1 = Book(
            "The Fifth Mountain", "Paule Coelho", "1GH23DEH6", 2001);
    // Syntax 2
    Book book(
            "The Fifth Mountain", "Paule Coelho", "1GH23DEH6", 2001);
    BorrowDetails borrowDetails
    ("2024-07-01", "2024-07-15", 60.00);
    Member member = Member
            ("Sahana", 120, 29, book, borrowDetails);
    member.displayBorrowDetails();
    return 0;
}
