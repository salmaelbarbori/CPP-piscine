#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const target):
		Form("PresidentialPardonForm", 145, 137),
		_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src):
		Form("PresidentialPardonForm", 145, 137),
		_target(src._target)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
	(void)rhs;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::action() const
{
}
