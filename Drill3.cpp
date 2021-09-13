#include "../std_lib_facilities.h"

int main(){
	string first_name;
	string friend_name;
	char friend_sex = '0';
	int age;
	
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Dear " << first_name << ", " << endl;
	
	cout << "\tHow are you? I am fine. I miss you." << endl;
	cout << "Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet.\n"
	"Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet.\n" 
	"Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet.\n";
	
	cout << "Name of another friend: ";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?" << endl;
	cout << "Enter 'm' if friend is male, 'f' if female: ";
	cin >> friend_sex;
	if (friend_sex == 'm'){
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	}
	else if (friend_sex == 'f'){
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
	}
	else {
		cout << "If you see " << friend_name << " please ask them to call me." << endl;
	}
	
	cout << "Age of recipient: ";
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
	if (age <= 0 || age >= 110){
		simple_error("you're kidding!");
	}
	else if(age < 12){
		cout << "Next year you will be " << age+1 << "." << endl;
	}
	else if (age == 17){
		cout << "Next year you will be able to vote." << endl;
	}
	else if (age > 70){
		cout << "I hope you are enjoying retirement." << endl;
	}
	
	cout << "Yours sincerely,\n\n\n";
	cout << "Lajos Pásti" << endl;
	return 0;
}
