// Sign-up application
// allow users to register with the system, providing both their name and age,
// and we'll store this information in our own custom type.

#include <iostream>
#include <string>
#include <vector>

struct Person {
	std::string name = "";
	int age = 0;
	std::vector<std::vector<std::string>> records;

	void AddRecord(std::string name, int age) {
		std::string userName = name;
		std::string userAge = std::to_string(age);
		records.push_back({ userName, userAge });
	}

	void FetchRecord(int userID) {
		std::cout << "Name: ";
		std::cout << records[userID][0] << "\n";
		std::cout << "Age: ";
		std::cout << records[userID][1] << std::endl;
	}
};



int main() {
	Person person;
	std::string userName = "";
	int userAge = 0;
	bool bIsRunning = true;

	std::cout << "User SignUp Application\n\n";

	//while (bIsRunning) {
	//	std::cout << "Please select an option: \n";
	//	std::cout << "1: Add Record\n";
	//	std::cout << "2: Fetch Record\n";
	//	std::cout << "3: Quit\n\n";

	//	std::cout << "Enter option: ";
	//	int input = 0;
	//	std::cin >> input;
	//}

	std::cout << "Add User. Please enter user name and age: " << std::endl;
	std::cout << "Name: ";
	std::getline(std::cin, userName);
	std::cout << "Age: ";
	std::cin >> userAge;
	person.AddRecord(userName, userAge);
	person.FetchRecord(0);


	return 0;
}