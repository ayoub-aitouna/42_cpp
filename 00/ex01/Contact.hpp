#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact{
	public:
		Contact();
		Contact(Contact &contact);
		Contact(std::string m_first_name, std::string m_last_name, std::string m_nickname, std::string m_darkest_secret, std::string m_phone_number);
		~Contact();

	private:
		std::string m_first_name;
		std::string m_last_name;
		std::string m_nickname;
		std::string m_darkest_secret;
		std::string m_phone_number;

	public:
		std::string GetFirstName();
		void SetFirstName(std::string name);

		std::string GetLastName();
		void SetLastName(std::string name);

		std::string GetNickName();
		void SetNickName(std::string name);

		std::string GetSecret();
		void SetSecret(std::string name);


		std::string GetPhoneNumebr();
		void SetPhoneNumber(std::string name);

		public:
		std::string Display(int id);
};
#endif
