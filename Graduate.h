#pragma once
#include "misc.h"

class Graduate : public Student
{
	string topic;
public:
	const string& get_topic()const
	{
		return this->topic;
	}
	void set_topic(const string& topic)
	{
		this->topic = topic;
	}
	Graduate
	(
		human_take_parametrs,
		student_get_parametrs,
		const string& topic
	) : Student(human_give_parametrs, student_give_parametrs), topic(topic)
	{
		cout << "GConstructor:\t" << this << endl;
	}
	~Graduate()
	{
		cout << "GDestructor:\t" << this << endl;
	}
	void info()const
	{
		Student::info();
		cout << "Тема дипломного проекта: " << topic << endl;
	}
};