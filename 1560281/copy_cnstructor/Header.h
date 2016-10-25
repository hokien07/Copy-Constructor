#pragma once
#include <iostream>
#include <string>

using namespace std;

class HS {
private:
	char *hoTen;
public:
	HS(void);
	HS(const char *ht);
	HS(const HS &hs);
	~HS(void);

	const HS& operator=(const HS &hs);
};

HS::HS(void) {
	hoTen = NULL;
}

HS::HS(const char *ht) {
	int len = strlen(ht);
	hoTen = new char[len + 1];
	strcpy_s(hoTen, len + 1, ht);
}

HS::HS(const HS &hs) {
	cout << "Copy constructor..." << endl;
	int len = strlen(hs.hoTen);
	hoTen = new char[len + 1];
	strcpy_s(hoTen, len+ 1, hs.hoTen);
}

HS::~HS() {
	if (hoTen != NULL) {
		delete[] hoTen;
	}
}

const HS& HS::operator=(const HS &hs) {
	cout << "operator=..." << endl;
	if (hoTen != NULL) {
		delete[] hoTen;
	}

	int len = strlen(hs.hoTen);
	hoTen = new char[len + 1];
	strcpy_s(hoTen, len + 1, hs.hoTen);

	return *this;
}