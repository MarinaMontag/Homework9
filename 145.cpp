// 145.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
struct TRAIN {
	string destination;
	int train_num;
	string time;
} train[6];


void printTrain(TRAIN my_train) {
	cout << my_train.destination << endl;
	cout  << my_train.train_num << endl;
	cout << my_train.time << endl;
}


int main()
{
	string str;
	for (int i = 0; i < 3; i++) {
		cout << "Enter destination name ";
		getline(cin, train[i].destination);
		cout << "Enter train number ";
		getline(cin, str);
		stringstream(str) >> train[i].train_num;
		cout << "Enter departure time ";
		getline(cin, train[i].time);
	}

	string name;
	getline(cin, name);
	bool boolean = false;
	for (int i = 0; i < 3; i++) {
		if (train[i].destination == name) {
			printTrain(train[i]);
			boolean = true;
		}
	}
	if (boolean == false) cout << "No trains with such destinations";


}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
