#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

struct library {
	string book_name;
	string author;
	int pages;
	float price;
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	library lib[100];

	string ar_nm, bk_nm;

	int i, input, count;

	i = input = count = 0;

	while (input != 5) {

		cout << "\n-----ЛАСКАВО ПРОСИМО В ЕЛЕКТРОННУ БІБЛІОТЕКУ-----";
		cout << "\n\n1. Додайте інформацію про книгу\n2. Відображення інформації про книгу\n";
		cout << "3. Перелічіть усі книги даного автора\n";
		cout << "4. Перелічіть кількість книг у бібліотеці\n";
		cout << "5. Вихід\n";

		cout << "\nВиберіть функцію: ";
		cin >> input;

		switch (input) {

		case 1:

			cout << "Введіть назву книги = ";
			cin >> lib[i].book_name;

			cout << "Введіть ім'я автора = ";
			cin >> lib[i].author;

			cout << "Введіть сторінки = ";
			cin >> lib[i].pages;

			cout << "Введіть ціну = ";
			cin >> lib[i].price;
			count++;

			break;

		case 2:
			cout << "ви ввели наступну інформацію\n";
			for (i = 0; i < count; i++) {

				cout << "Назва книги = " << lib[i].book_name;
				cout << "\t Ім'я автора = " << lib[i].author;
				cout << "\t Кількість сторінок = " << lib[i].pages;
				cout << "\t Ціна = " << lib[i].price << endl;
			}
			break;

		case 3:
			cout << "Введіть ім'я автора : ";
			cin >> ar_nm;
			for (i = 0; i < count; i++) {

				if (ar_nm == lib[i].author)
					cout << lib[i].book_name << " " << lib[i].author << " " << lib[i].pages << " " << lib[i].price << endl;
			}
			break;

		case 4:
			cout << "\nКількість книжок в бібліотеці: " << count << endl;
			break;
		case 5:
			exit(0);
		}
	}
	return 0;
}
