#include <iostream>
#include<string>
#include "Book.h"
#include "Library.h"
using namespace std;
//random comment
void userInterface(Library& lib) {
	while (true) {
	cout << "------Welcome to the Book Management System------\nEnter the task you would like to perform:\na)Add a new book.\nb)Remove a book\nc)Display list of books.\nd)Exit." << endl;
    char choice;
	string title, author;
	int date;
    cin >> choice;
	cin.ignore();
		switch (choice) {
		case 'a':
			cout << "Enter the title of the book you would like to add:" << endl;
			getline(cin, title);
			
			cout << "Enter the author of the book you would like to add:" << endl;
			getline(cin, author);
			
			cout << "Enter the date of publication of the book you would like to add:" << endl;
			cin >> date;
			cin.ignore();
			lib.addBook(Book(title, author, date));
			break;
		case 'b':
			cout << "Enter the title of the book you would like to Remove:" << endl;
			getline(cin, title);
			cin.ignore();
			lib.removeBook(title);
			break;
		case 'c':
			cout << "List of Books:\n";
			lib.listBooks();
			break;
		case 'd':
			cout << "Quiting...." << endl;
			return;
		default:
			cout << "Invalid." << endl;
			break;
		}
	}
}
int main() {
    Library library;
    userInterface(library);
    return 0;
}