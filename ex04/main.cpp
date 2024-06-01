/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/05/04 15:43:56 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

/* output file needs to be passed as a reference; if passed by value it would
create a copy and changes won't affect the original file;
npos: is used to indicate that a specific value is not found -> in that case
just copy the contents */

void process_buff(std::string str1, std::string str2,
	std::ofstream &output_file, std::string buff)
{
	size_t pos;
	size_t skip;

	pos = buff.find(str1);
	if (pos == std::string::npos)
	{
		output_file << buff;
		return;
	}
	else
	{
		output_file << buff.substr(0, pos);
		output_file << str2;
		skip = pos + str1.length();
		process_buff(str1, str2, output_file, buff.substr(skip));
	}
}

/* getline reads the input file line by line; one line at a time is stored
in the buffer; at the end of each line a new line character needs to be added */

int main(int ac, char **av)
{
	std::string 	filename;
	std::string 	str1;
	std::string 	str2;
	std::ifstream 	input_file;
	std::ofstream 	output_file;
	std::string 	replace_file;
	std::string 	buff;

	if (ac != 4)
	{
		std::cout << "Incorrect input. Correct format: <filename e.g. input.txt> <needle> \
		<replace>";
		return (1);
	}
	else
	{
		filename = av[1];
		str1 = av[2];
		str2 = av[3];
	}
	replace_file = filename + ".replace";
	input_file.open(filename);
	output_file.open(replace_file);
	if (!input_file.is_open() || !output_file.is_open())
	{
		std::cerr << "Failed to open the file." << std::endl;
		return (1);
	}
	while (std::getline(input_file, buff))
		process_buff(str1, str2, output_file, buff + '\n');
	input_file.close();
	output_file.close();
	return (0);
}