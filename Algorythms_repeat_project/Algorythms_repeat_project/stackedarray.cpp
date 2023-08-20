#include "Stackedarray.h"
#include "Q3CSV.h"
#include "Q2Myset.h"

#include <iostream>
#include <string>



using namespace std;




















int main() {

	arraystack<int> stackinfo;
	



	stackinfo.push(5);
	stackinfo.push(10);
	stackinfo.push(15);
	stackinfo.push(25);
	stackinfo.push(27);

	int secondindex;
	int secondelement;
	/*bool clearfunction;*/

	 secondindex = stackinfo.search(10);
	 cout << secondindex << endl;

	 secondelement = stackinfo.getElement(10);
	 cout << secondelement << endl;


	int amount = stackinfo.length();
	cout << "there is " << amount << " " << "values in this array" << endl;


	
	bool clearfunction = stackinfo.remove(5);

	if (clearfunction = true ){
		cout << "data cleared current amount is" << "   " << amount << endl;
	}

	else {
		cout << "Invalid index or element not found." << endl;
	}

	amount = stackinfo.length();
	cout << "there is " << amount << " " << "values in this array after the remove " << endl;



	stackinfo.~arraystack();

	cout << "data cleared current amount is" << "   " << amount << endl;


	scaninfojohn20();


}







		
	








