#include "Skills.h"



Skills::Skills()
{
	m_name = "blank";
	m_YearsofEducation = 0;
}

Skills::Skills(std::string name, int years)
:
	m_name(name)
,	m_YearsofEducation(years)
{
}


Skills::~Skills()
{
}
