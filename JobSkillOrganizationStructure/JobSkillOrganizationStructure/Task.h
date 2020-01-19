#pragma once
#include<vector>

class Skill;

class Task
{
	//release should use std::map containers
	std::vector<Skill*> m_skills;
public:
	Task();
	~Task();
	void AddSkill(std::string name, int years);
};

