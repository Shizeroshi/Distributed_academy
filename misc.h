#pragma once
#include <iostream>
#include <ctime>
#include <string>

using std::string;
using namespace std;

#define delimiter "\n----------------------------------------------------------------\n"

#define human_take_parametrs		const string& last_name, const string& first_name, unsigned int age
#define student_get_parametrs	const string& speciality, const string& group, double rating
#define teacher_get_parametrs	const string& speciality, unsigned int experience

#define human_give_parametrs	last_name, first_name, age
#define student_give_parametrs	speciality, group, rating
#define teacher_give_parametrs	speciality, experience