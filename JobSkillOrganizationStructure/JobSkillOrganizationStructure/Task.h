#pragma once
#include<vector>

class Skill;

class Task
{
	std::vector<Skill*> m_skills;
public:
	Task();
	~Task();
	void AddSkill(std::string name, int years);
};

