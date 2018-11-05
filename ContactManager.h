#pragma once
#include<stdlib.h>

#include<string>
#include<vector>
#include<iostream>
using namespace std;

class ContactManager
{
	string a_name;
	string a_adress;
	string a_phoneNum;
	string a_birthday;

public:
	ContactManager();
	ContactManager(string name, string adress, string number, string birthday);

	string getName();
	string getAdress();
	string getNum();
	string getBirth();

	void setName(string);
	void setAdress(string);
	void setNum(string);
	void setBirth(string);
};

