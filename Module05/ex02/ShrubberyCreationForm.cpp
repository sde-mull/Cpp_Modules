/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-mull <sde.mull@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:00:12 by sde-mull          #+#    #+#             */
/*   Updated: 2023/09/14 20:04:09 by sde-mull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = "";
    std::cout << "ShrubberyCreationForm Constructor!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
    std::cout << "ShrubberyCreationForm Constructor!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src): AForm(src), _target(src.getTarget())
{
    std::cout << "ShrubberyCreationForm Clonned!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
    std::cout << "ShrubberyCreationForm Destructor!" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    if (this != &rhs)
        this->_target = rhs.getTarget();

    return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

void ShrubberyCreationForm::message(void) const
{
	std::ofstream	file;
	std::string		file_to_write;
	file_to_write = this->_target;
	file_to_write.append("_shrubbery");
	file.open(file_to_write.c_str(), std::ios::in | std::ios::app);
	if (!file)
		std::cout << "Not able to create the file" << std::endl;
	file << "                     ; ; ; " << std::endl;
	file << "                   ;        ;  ;     ;;    ; " << std::endl;
	file << "                ;                 ;         ;  ; " << std::endl;
	file << "                                ; " << std::endl;
	file << "                               ;                ;; " << std::endl;
	file << "               ;          ;            ;              ; " << std::endl;
	file << "               ;            ';,        ;               ; " << std::endl;
	file << "               ;              'b      * " << std::endl;
	file << "                ;              '$    ;;                ;; " << std::endl;
	file << "               ;    ;           $:   ;:               ; " << std::endl;
	file << "             ;;      ;  ;;      *;  @):        ;   ; ; " << std::endl;
	file << "                          ;     :@,@):   ,;**:'   ; " << std::endl;
	file << "              ;      ;,         :@@*: ;;**'      ;   ; " << std::endl;
	file << "                       ';o;    ;:(@';@*''  ; " << std::endl;
	file << "               ;  ;       'bq,;;:,@@*'   ,*      ;  ; " << std::endl;
	file << "                          ,p$q8,:@)'  ;p*'      ; " << std::endl;
	file << "                   ;     '  ; '@@Pp@@*'    ;  ; " << std::endl;
	file << "                    ;  ; ;;    Y7'.'     ;  ; " << std::endl;
	file << "                              :@):. " << std::endl;
	file << "                             .:@:'. " << std::endl;
	file << "                           .::(@:.  " << std::endl;
	file.close();
}