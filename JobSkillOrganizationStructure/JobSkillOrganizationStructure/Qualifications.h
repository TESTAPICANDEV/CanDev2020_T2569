#pragma once
#include<vector>
#include<map>
#include<string>




class Qualifications
{
	//release should use std::map containers

	std::vector<std::string> m_name;
public:
	Qualifications();
	~Qualifications();
	void AddQualification(std::string name);
};

