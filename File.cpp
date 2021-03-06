#include "File.h"

void File::write_file(const std::string& character_name, std::string text)
{
	const auto save_character = character_name + ".txt";
	std::ofstream save_file(save_character);

	save_file << "Name: ";
}  // not really used at this point.. just a basic write to .txt function

/*int File::read_file(std::string character_name)
{
	return 0;
}*/


// grabs all the character info for use in the save_char function
void File::char_display(const std::string* name, const std::string* race, const std::string* class_name,
	const int* str, const int* dex, const int* con, const int* ine, const int* wis, const int* cha, const int health)
{
	const auto save_character = *name + ".txt";
	std::ofstream save_file(save_character); 
	
	if (*race == "ELF")
	{
		save_file << "\n\n Name: " << *name << "\n Race: " << *race <<
			"\n Class: " << *class_name << "\n Health: " << health << "\n\n"
		
		 << " STR: " << *str << std::endl
		 << " DEX: " << *dex + 2 << " [" << *dex << " + 2] " << std::endl
		 << " CON: " << *con << std::endl
		 << " INT: " << *ine << std::endl
		 << " WIS: " << *wis << std::endl
		 << " CHA: " << *cha << std::endl;
	}
	else if (*race == "DWARF")
	{
		save_file << "\n\n Name: " << *name << "\n Race: " << *race <<
			"\n Class: " << *class_name << "\n Health: " << health << "\n\n"
		
		 << " STR: " << *str << std::endl
		 << " DEX: " << *dex << std::endl
		 << " CON: " << *con + 2 << " [" << *con << " + 2] " << std::endl
		 << " INT: " << *ine << std::endl
		 << " WIS: " << *wis << std::endl
		 << " CHA: " << *cha << std::endl;
	}
	else if (*race == "TIEFLING")
	{
		save_file << "\n\n Name: " << *name << "\n Race: " << *race <<
			"\n Class: " << *class_name << "\n Health: " << health << "\n\n"
		
		 << " STR: " << *str << std::endl
		 << " DEX: " << *dex << std::endl
		 << " CON: " << *con << std::endl
		 << " INT: " << *ine + 1 << " [" << *ine << " + 1] " << std::endl
		 << " WIS: " << *wis << std::endl
		 << " CHA: " << *cha + 2 << " [" << *cha << " + 2] " << std::endl;
	}
	else if (*race == "GNOME")
	{
		save_file << "\n\n Name: " << *name << "\n Race: " << *race <<
			"\n Class: " << *class_name << "\n Health: " << health << "\n\n"
		
		 << " STR: " << *str << std::endl
		 << " DEX: " << *dex << std::endl
		 << " CON: " << *con << std::endl
		 << " INT: " << *ine + 2 << " [" << *ine << " + 2] " << std::endl
		 << " WIS: " << *wis << std::endl
		 << " CHA: " << *cha << std::endl;
	}
	else if (*race == "DRAGONBORN")
	{
		save_file << "\n\n Name: " << *name << "\n Race: " << *race <<
			"\n Class: " << *class_name << "\n Health: " << health << "\n\n"
		
		 << " STR: " << *str + 2 << " [" << *str << " + 2] " << std::endl
		 << " DEX: " << *dex << std::endl
		 << " CON: " << *con << std::endl
		 << " INT: " << *ine << std::endl
		 << " WIS: " << *wis << std::endl
		 << " CHA: " << *cha + 1 << " [" << *cha << " + 1] " << std::endl;
	}
	else if (*race == "HALFLING")
	{
		save_file << "\n\n Name: " << *name << "\n Race: " << *race <<
			"\n Class: " << *class_name << "\n Health: " << health << "\n\n"
		
		 << " STR: " << *str << std::endl
		 << " DEX: " << *dex + 2 << " [" << *dex << " + 2] " << std::endl
		 << " CON: " << *con << std::endl
		 << " INT: " << *ine << std::endl
		 << " WIS: " << *wis << std::endl
		 << " CHA: " << *cha << std::endl;
	}
	else if (*race == "HALF-ELF")
	{
		save_file << "\n\n Name: " << *name << "\n Race: " << *race <<
			"\n Class: " << *class_name << "\n Health: " << health << "\n\n"
		
		 << " STR: " << *str << std::endl
		 << " DEX: " << *dex << std::endl
		 << " CON: " << *con << std::endl
		 << " INT: " << *ine << std::endl
		 << " WIS: " << *wis << std::endl
		 << " CHA: " << *cha + 2 << " [" << *cha << " + 2] " << std::endl;
	}
	else if (*race == "HALF-ORC")
	{
		save_file << "\n\n Name: " << *name << "\n Race: " << *race <<
			"\n Class: " << *class_name << "\n Health: " << health << "\n\n"
		
		 << " STR: " << *str + 2 << " [" << *str << " + 2] " << std::endl
		 << " DEX: " << *dex << std::endl
		 << " CON: " << *con + 1 << " [" << *con << " + 1] " << std::endl
		 << " INT: " << *ine << std::endl
		 << " WIS: " << *wis << std::endl
		 << " CHA: " << *cha << std::endl;
	}
	else if (*race == "HUMAN")
	{
		save_file << "\n\n Name: " << *name << "\n Race: " << *race <<
			"\n Class: " << *class_name << "\n Health: " << health << "\n\n"
		
		 << " STR: " << *str + 1 << " [" << *str << " + 1] " << std::endl
		 << " DEX: " << *dex + 1 << " [" << *dex << " + 1] " << std::endl
		 << " CON: " << *con + 1 << " [" << *con << " + 1] " << std::endl
		 << " INT: " << *ine + 1 << " [" << *ine << " + 1] " << std::endl
		 << " WIS: " << *wis + 1 << " [" << *wis << " + 1] " << std::endl
		 << " CHA: " << *cha + 1 << " [" << *cha << " + 1] " << std::endl;
	}

}

// takes the info from char_display and gives the user an option to save into .txt
void File::save_char(const std::string* name, const std::string* race, const std::string* class_name,
	const int* str, const int* dex, const int* con, const int* ine, const int* wis, const int* cha, const int health)
{
	char user_choice;
	
	std::cout << "\n\n Would you like to save your character: " << *name << " ? [ Y / N ] \n ";
	std::cin >> user_choice;
	
	switch (user_choice)
	{
		
	case 'y':
	case 'Y':
		std::cout << std::endl;
		char_display(name, race, class_name, str, dex, con, ine, wis, cha, health);
		std::cout << " * CHARACTER SAVED * " << std::endl;
		break;

	default:
	break;
		
	}

}
