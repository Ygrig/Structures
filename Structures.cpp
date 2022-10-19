#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct date {
	int day{};
	int month{};
	int year{};
};

struct person {
	string name{};
	date birthday{};
	int salary{};
};

void  show_person(person &P) { //указываем ссылку &P для экономиии памяти, чтобы не дублировался вес структуры в памяти
	cout << "Name: " << P.name << '\n';
	cout << "Birthday: " << P.birthday.day << "." << P.birthday.month << "." << P.birthday.year << '\n';
	cout << "Salary: " << P.salary << '\n';
	
}

person input_person() {
	person tmp; //создаем локальный объект, сущ-й строго в рамках этой ф-ции
	cout << "Введите имя: ";
	//cin.ignore();
	getline(cin, tmp.name);
	cout << "Введите дату рождения: ";
	cin >> tmp.birthday.day >> tmp.birthday.month >> tmp.birthday.year;
	cout << "Введите зарплату: ";
	cin >> tmp.salary;
	return tmp; //возвращает объект структуры, объект целиком
}

void fill_person(person& P){
	cout << "Введите имя: ";
	getline(cin, P.name);
	cout << "Введите дату рождения: ";
	cin >> P.birthday.day >> P.birthday.month >> P.birthday.year;
	cout << "Введите зарплату: ";
	cin >> P.salary;
	
	}

//создаем структуру для задачи 1
struct persona {
	string name;
	int age = 0;
	int coins[5]{};
};

//создаем 1-ую ф-цию для задачи 1
void show_persona(persona &P) { //передаем по ССЫЛКЕ & для целей экономии памяти 
	cout << "Имя: " << P.name << '\n';
	cout << "Возраст: " << P.age << '\n';
	cout << "Монеты: ";
	for (int i = 0; i < 5; i++)
		cout << P.coins[i] << ' ';
	cout << '\n';
}
//создаем 2-ую ф-цию для задачи 1
inline int year_of_birth(persona& P,int year) { // ф-ция не сложная, поэтому сделаем ее встраиаемой (инлайн), т.е. содержимое ф-ции (ее тело) копируется в то место, где она вызывается.
	return year - P.age;
}
//создаем 3-ую ф-цию для задачи 1
int cash(persona& P) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += P.coins[i];
	return sum;
}


//создаем структуру дял 2й задачи
struct point {
	double X = 0;
	double Y = 0;
};

//создаем ф-цию для задачи 2
int compare_distance(point&P1, point &P2) {
	double dist1 = sqrt(pow(0 - P1.X, 2) + pow(0 - P1.Y, 2));
	double dist2 = sqrt(pow(0 - P2.X, 2) + pow(0 - P2.Y, 2));
	if (dist1 > dist2)
		return 1;
	if (dist1 < dist2)
		return -1;
	return 0;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Просто структура person
	/*struct person { //объявление структуры person. Для ее реализации создаются объекты p1 и p2
		string name = "noname"; //правила хорошего тона: для ВСЕХ полей указывать знаечния по умолчанию
		int age = 18;
		string position = "programer";
		int salary = 60000;
	} p1, p2{"Bob Thomas", 40, "director", 120000};
	
	//Обращение (инициализация и вывод) к полям объекта структуры
	p1.name = "Tom Smith";
	p1.age = 22;
	//p1.position = "manager";
	p1.salary = 50000;

	cout << "Name: " << p1.name << '\n';
	cout << "Age: " << p1.age << '\n';
	cout << "Position: " << p1.position << '\n'; 
	cout << "Salary: " << p1.salary << '\n';
	cout << "---------------------------\n";
	cout << "Name: " << p2.name << '\n';
	cout << "Age: " << p2.age << '\n';
	cout << "Position: " << p2.position << '\n';
	cout << "Salary: " << p2.salary << '\n';

	//Изменение всего содержимого объекта структуры
	p2={"Adam Thomas", 41, "president",500000}; //если написать p2={} - обнуление
	
	//Прямое присваивание полям объекта р2 значений из полей р1
	p2 = p1;

	//Альтернативный способ создания объекта структуры
	person p3 {"Jake Home",30,"policeman", 45000};
	cout << "---------------------------\n";
	cout << "Name: " << p3.name << '\n';
	cout << "Age: " << p3.age << '\n';
	cout << "Position: " << p3.position << '\n';
	cout << "Salary: " << p3.salary << '\n';*/

	// Структуры person и date
	/*person p4;
	p4.name = "Tom Smith";
	//p4.birthday.day = 1;
	//p4.birthday.month = 1;
	//p4.birthday.year = 1970;
	p4.birthday = { 1,1,1970 };
	p4.salary = 50000;

	person p5{
		"Bob Thomas",
		{15,10,2000},
		20000
	};

	//Указатель на объект структуры
	person* pp5 = &p5;

	cout << "Name: " << pp5->name << '\n';
	cout << "Birthday: " << pp5->birthday.day << "." <<pp5->birthday.month << "." << pp5->birthday.year << '\n';
	cout << "Salary: " << pp5->salary << '\n';

	cout << "-------------------------" << '\n';
	show_person(p4);

	//person p6 = input_person();
	person p6; //создается объект р6 и прямо в него организовывается ввод в функции fill_person
	fill_person(p6);
	cout << "-------------------------" << '\n';
	show_person(p6);
	*/

	//Задача 1. Персона с монетами
	/*cout << "Задача 1.\nОбъект:\n";
	persona A{
		"Nick Jackobs",
		20,
		{1,2,2,5,1}
	};
	show_persona(A);
	cout << "Год рождения: " << year_of_birth(A, 2022) << '\n';
	cout << "Общие сбережения: " << cash(A) << '\n';
	*/
	
	//Задача 2.Координаты
	cout << "Задача 2.\nТочка А: ";
	point A{ 4.5, -1.3 };
	cout << A.X << ", " << A.Y << '\n';
	cout << "Точка B: ";
	point B{ 6.1, 0.9 };
	cout << B.X << ", " << B.Y << '\n';
	cout << compare_distance (A,B)<< '\n';

	return 0;
}