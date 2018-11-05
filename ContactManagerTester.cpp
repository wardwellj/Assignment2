#include"ContactManager.h"
#include<stdlib.h>

#include<string>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int Main()
{
	ContactManager CM;
	ContactManager CM2;
	ContactManager CM3("Josh", "694 Snakeroot Rd, Pittsfield Me", "207-359-2807", "January 8th, 1999");


	CM2.setName("Hayden");
	CM2.setAdress("310 madawaska Ave");
	CM2.setNum("207-697-7910");
	CM2.setBirth("September 17, 1999");

	vector<ContactManager> CMobjects = { CM, CM2, CM3 };

	int i = 0;
	while (i <= 3)
	{
		cout << "The Contacts info is as follows...  Name: " << CMobjects[i].getName << "Adress: " << CMobjects[i].getAdress << "Number: " << CMobjects[i].getNum<< "Birthday: " << CMobjects[i].getBirth << endl;
		++i;
	}
	CM.setNum("207-958-2109");
	CM2.setName("Haydanooo");
	CM3.setName("Joshua");

	int x = 0;
	while (x <= 3)
	{
		cout << "The Contacts info is as follows...  Name: " << CMobjects[i].getName << "Adress: " << CMobjects[i].getAdress << "Number: " << CMobjects[i].getNum << "Birthday: " << CMobjects[i].getBirth << endl;
		++i;
	}
}