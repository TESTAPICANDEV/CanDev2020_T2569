#pragma once
#include<vector>
#include<map>
#include<string>




class Qualifications
{
	std::vector<std::string> m_name;
public:
	Qualifications();
	~Qualifications();
	void AddQualification(std::string name);
};

