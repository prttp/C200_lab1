#pragma once
class MyString
{
    char* m_pStr;	//������-���� ������
public:
	MyString(const char* text);
	~MyString();
	const char* GetString() const;
	MyString(const MyString& source);
	void SetNewString(const char* text);
};
