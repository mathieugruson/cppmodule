/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:21:43 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 18:29:42 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	(void)obj;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	std::cout << "ShrubberyCreationForm Overload Constructor called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& obj) const
{
	this->checkBeforeExec(obj);
	std::ofstream ofs;
	std::string outfile;
	outfile = getName();
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