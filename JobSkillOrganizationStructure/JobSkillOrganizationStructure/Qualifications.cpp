#include "Qualifications.h"
#include"Skills.h"


Qualifications::Qualifications()
{
}


Qualifications::~Qualifications()
{
}

void Qualifications::AddQualification(std::string name)
{
	m_name.push_back(name);
}
