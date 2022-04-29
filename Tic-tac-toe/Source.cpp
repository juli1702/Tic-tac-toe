#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int rows = 3, columns = 3;
char field[rows][columns] = {
	{ ' ', ' ', ' ' },
	{ ' ', ' ', ' ' },
	{ ' ', ' ', ' ' }
};

int turn = 1;

void goX();
void go0();

bool check_victoryX();
bool check_victory0();

void save();
void load();

bool file_exists(string path);

void print_map();

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	print_map();

	return 0;
}
void print_map() {
	int print[rows][columns];
	for (int i = 0; i < rows + 2; i++) {
		for (int j = 0; j < columns + 2; j++) {
			if (j == 1 || j == 3)
				cout << "|";
			else
				if (i == 1 || i == 3)
					cout << "---";
				else
					if (i % 2 == 0 && j % 2 == 0)
						cout << " " << field[i / 2][j / 2] << " ";
		}
		cout << endl;
	}
}