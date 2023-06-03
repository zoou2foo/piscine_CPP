#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <iostream>
#include <iomanip>

//faire ses getMachin et setMachin
class Contact {

	//functions will be called from outside
	public:
		void setFirstName(std::string _firstName);
		void setLastName(std::string _lastName);
		void setNickname(std::string _nickname);
		void setPhoneNumber(std::string _phoneNumber);
		void setDarkestSecret(std::string _darkestSecret);
		std::string getFirstName(void) const; //in the function, I will give them the right var
		std::string getLastName(void) const;
		std::string getNickname(void) const;
		std::string getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;

	//no need for an outsider to have access to those
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;

};

#endif
