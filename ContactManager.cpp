#include "ContactManager.h"
#include<stdlib.h>

#include<string>
#include<vector>
#include<iostream>
using namespace std;


ContactManager::ContactManager()
{
	
}

ContactManager::ContactManager(string name, string adress, string number, string birthday):a_name(name), a_adress(adress), a_phoneNum(number), a_birthday(birthday)
{
	a_name = name;
	a_adress = adress;
	a_phoneNum = adress;
	a_birthday = birthday;
}

string ContactManager::getName()
{
	return a_name;
}

string ContactManager::getAdress() 
{
	return a_adress;
}
string ContactManager::getNum()
{
	return a_phoneNum;
}
string ContactManager::getBirth()
{
	return a_birthday;
}

void ContactManager::setName(string name)
{
	a_name=name
}
void ContactManager::setAdress(string adress)
{
	a_adress=adress
}
void ContactManager::setNum(string Number)
{
	a_phoneNum = Number;
}
void ContactManager::setBirth(string bDay)
{
	a_birthday = bDay;
}
