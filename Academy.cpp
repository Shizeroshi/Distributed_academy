#include "misc.h"
#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "Graduate.h"

int main()
{
	setlocale(LC_ALL, "");
	system("color 0A");

	/*Human human("Амелия", "Лоли", 16);
human.info();*/

	Student studentka("Амелия", "Лоли", 16, "Программирование", "BV_011", 5);
	cout << delimiter;
	studentka.info();
	cout << delimiter;
	Teacher teacher("Einshtein", "Albert", 150, "Phisics", 120);
	cout << delimiter;
	teacher.info();
	cout << delimiter;

	Graduate Sanya("Pistoletov", "Alexandr", 25, "Music", "BV_011", 100, "Пиратские танцы");
	cout << delimiter;
	Sanya.info();
	cout << delimiter;

}