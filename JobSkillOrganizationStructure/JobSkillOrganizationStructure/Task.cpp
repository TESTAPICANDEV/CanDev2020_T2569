#include "Task.h"
#include"Skills.h"


Task::Task()
{
}


Task::~Task()
{
}

void Task::AddSkill(std::string name, int years)
{
	Skills* skill = new Skills(name, years);
	//m_skills.push_back(skill);
}
