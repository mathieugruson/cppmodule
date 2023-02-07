/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:20:33 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/07 16:26:49 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
int main() {
  std::time_t t = time(0);   // get time now
  struct tm * now = localtime(&t);
  int year = now->tm_year + 1900;
  int month = now->tm_mon + 1;
  int day = now->tm_mday;
  int hour = now->tm_hour;
  int min = now->tm_min;
  int sec = now->tm_sec;
  
  std::cout << "[" << std::setfill('0')
  	<< year << std::setw(2) << month
    << std::setw(2) << day << "_"
    << std::setw(2) << hour
    << std::setw(2) << min
    << std::setw(2) << sec << "]";
}