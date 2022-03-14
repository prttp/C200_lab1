#include <string>
#include "myString.h"
using namespace std;

// Определение конструктора.
MyString::MyString(const char* text) {
	m_pStr = new char[strlen(text) + 1];
	strcpy(m_pStr, text);
	
}

// Определение деструктора.
MyString::~MyString() {
	delete[] m_pStr;
}
const char* MyString::GetString() const {
	if (m_pStr == nullptr) { return "Error"; }
		return m_pStr;
}
MyString::MyString(const MyString& source) {
	if (source.m_pStr == nullptr) { m_pStr = nullptr; }
	else {
		m_pStr = new char[strlen(source.m_pStr) + 1];
		strcpy(m_pStr, source.m_pStr);
	};
}
void MyString::SetNewString(const char* text) {
	delete[] m_pStr;
	m_pStr = new char[strlen(text) + 1];
	strcpy(m_pStr, text);
}
