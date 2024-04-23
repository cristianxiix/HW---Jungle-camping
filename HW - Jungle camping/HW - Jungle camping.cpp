#include <string>
#include <iostream>
#include <vector>

void findAndReplace(std::string& a, std::string& b);

int main()
{
	int programRunning = 1;
	std::string input;
	const std::string delim = " ";
	std::vector<std::string> animalz;

	std::cout << "WE'RE IN THE JUNGLE!" << std::endl;
	std::cout << "WHAT WAS THAT ANIMAL?! WHAT DID YOU HEAR?" << std::endl;
	std::getline(std::cin, input);

	std::string test;

	while (programRunning != 0)
	{
		while (input != test)
		{
			test = input.substr(0, input.find(delim));
			animalz.push_back(test);
			findAndReplace(input, test);
		}
		animalz.pop_back();

		std::cout << "It seems like you've heard the following: ";
		for (int i = 0; i < animalz.size(); i++)
		{
			std::string x = animalz[i];

			if (x == "Grr")
				x = "Lion";
			else if (x == "Rawr")
				x = "Tiger";
			else if (x == "Sss")
				x = "Snake";
			else if (x == "Cirip")
				x = "Birds";
			
			if (i != animalz.size() - 1)
				std::cout << x << ", ";
			else
				std::cout << x << '.' << std::endl;
		}
		

		std::cout << "Daca doresti sa opresti programul, apasa 0 urmat de ENTER la PROMPT.\n" << std::endl;
		std::cout << "PROMPT: Do you want to stop the program?\nYES: 0\nNO: 1" << std::endl;
		std::cin >> programRunning;
	}
}
void findAndReplace(std::string& a, std::string& b)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (b[i] == a[i] && b.size() != a.size())
		{
			a = a.substr(b.size()+1, a.size()-1);
			return;
		}
		else
		{
			a = a.empty();
		}
		
	}
}