#include "Stackedarray.h"
#include "Q3CSV.h"

#include <iostream>
#include <string>



using namespace std;




















int main() {

	arraystack<int> stackinfo;
	



	stackinfo.push(5);
	stackinfo.push(10);
	stackinfo.push(15);
	stackinfo.push(25);

	int secondindex;
	int secondelement;
	int clearfunction;

	 secondindex = stackinfo.search(10);
	 cout << secondindex << endl;

	 secondelement = stackinfo.getElement(10);
	 cout << secondelement << endl;


	int amount = stackinfo.length();
	cout << "there is " << amount << "values in this array" << endl;


	/* stackinfo.remove(15);
	cout << "data cleared current amount is" << amount << endl;*/

	stackinfo.~arraystack();

	cout << "data cleared current amount is" << amount << endl;


	scaninfojohn20();


}







		
	








