/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:21:43 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 15:08:32 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : A_Form(), _target("Default")
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : A_Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Overload Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : A_Form(obj)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	this->setSign(obj.getSign());
	this->_target = obj._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->checkBeforeExec(executor);
	std::ofstream ofs;
	std::string outfile;
	outfile = getTarget();
	outfile.append("_shrubbery "); 
	ofs.open(outfile.c_str());
	if (ofs.fail())
	{
		std::cout << "sorry, can't open " << outfile << std::endl;
		return ; 
	}
	std::string contents = 
"                           %                         %            \n\
 @@@     %    @@     @@@@                                  *       \n\
    @@ %     @  %   @   %          %               ;      ***      \n\
     @@    @      @                               #     *****     \n\
 @@@   @@@@@  @@@@@@___    %         %           {###}  *******\n\
    @-@  @   @      @@@@       %               <## ####>********\n\
  @@@@@   @ @         @@@@@               %      {###}***********\n\
    %  @  @@ /@@@@@                          <###########> *******\n\
        @-@@@@    V     %          %           {#######}******* ***\n\
  %       @@      v        { }             <###############>*******\n\
          @@               {^^,               {## ######}***** ****\n\
  %      @@     %          (   `-;       <###################> ****\n\
         @@           _     `;;~~           {#############}********\n\
         @@   %      /(______);        <################  #####>***\n\
   %     @@@        (         (           {##################}*****\n\
          @@@        |:------( )     <##########################>**\n\
 @@@@     @@@      _//        \\        {###   ##############}*****\n\
@@@@@@@  @@@@@    / /@@@@@@@@@ vv  <##############################>\n\
@@@@@@@ @@@@@@@ @@@@@@@@@@@@@@@@@@@       @@@@@@  @@@@@@@  @@@@\n\
@@@@@@###@@@@@### @@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@###@##@@ @@@@@@@@@@@@@@@@@@@@@ @@@@@   @@@@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@### @@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@\n\
-@@@@@@@@@#####@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

	ofs << contents;
	ofs.close();
}