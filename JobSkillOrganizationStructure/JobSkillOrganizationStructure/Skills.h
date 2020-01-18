#pragma once
#include<string>
#include<map>
#include<vector>

class Qualifications;

class Skills
{
	std::string m_name;
	int m_YearsofEducation;
	//std::map<std::string name, int a> m_map;
	std::vector<Qualifications*> m_qualications;
public:
	Skills();
	Skills(std::string name, int years);
	~Skills();

};

