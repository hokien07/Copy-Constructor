#include "Header.h"

void main() {
	HS hs1("sfgebergfg");
	cout << "hs2(hs1)" << endl;
	HS hs2(hs1);
	cout << "hs3 = hs1" << endl;
	HS hs3 = hs1;
	cout << endl << "hs2 =hs3" << endl;
	hs2 = hs3;
	cout << endl;

	system("pause");
}