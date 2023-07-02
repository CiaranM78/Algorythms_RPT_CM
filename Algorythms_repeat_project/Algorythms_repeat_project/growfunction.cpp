#include "growfunction.h"
#include "string"


growsize::growsize()
{

	//(*this).telephone = "Mirabelle";//
	this->firstname = "Mirabelle";
		this->lastname = "O'Mullaney";
	this->company = "Beier LLC";

}

growsize::growsize(string firstname,string  lastname, string  company, string telephone)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->company = company;
	this->telephone = telephone;

}

string growsize::getfirstname()
{
	return firstname;
}

string growsize::getlastname()
{
	return lastname;
}

string growsize::getCompany()
{
	return company;
}

string growsize::getTelephone()
{
	return telephone;
}

string growsize::to_string()
{
	return this->firstname + " | " + this->lastname + " | " + this->company + " | " + this->telephone;
}







