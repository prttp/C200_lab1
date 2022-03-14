#pragma once
class MyString
{
    char* m_pStr;	//строка-член класса
public:
	MyString(const char* text);
	~MyString();
	const char* GetString() const;
	MyString(const MyString& source);
	void SetNewString(const char* text);
};
