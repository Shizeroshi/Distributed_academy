#pragma once
#include "misc.h"

class Human
{
	string last_name;
	string first_name;
	//time_t birth_date;
	unsigned int age;
public:
	const string& get_last_name()const
	{
		return last_name;
	}
	const string& get_first_name()const
	{
		return first_name;
	}
	/*const time_t& get_birth_date()const
	{
		return birth_date;
	}*/
	unsigned int get_age()const
	{
		return age;
	}
	void set_last_name(const string& last_name)
	{
		this->last_name = last_name;
	}
	void set_first_name(const string& first_name)
	{
		this->first_name = first_name;
	}
	/*void set_birth_date(const time_t& birth_date)
	{
		this->birth_date = birth_date;
	}*/
	void set_age(const unsigned int age)
	{
		this->age = age;
	}
	//					constructors

	Human(const string& last_name, const string& first_name, const unsigned int age /*const time_t& birth_date*/)
	{
		set_last_name(last_name);
		set_first_name(first_name);
		//set_birth_date(birth_date);
		set_age(age);
		cout << "HConstructor:\t" << this << endl;
	}
	virtual ~Human()
	{
		cout << "HDestructor:\t" << this << endl;
	}
	//					methods
	virtual void info()const
	{
		//cout << "Last name: " << last_name << endl;
		//cout << "FIst name: " << first_name << endl;
		//cout << "Age: " /*"Birth date:"*/ <<  age /*birth_date*/ << endl;
		cout << last_name << " " << first_name << ", " << age << " лет" << endl;
	}
};