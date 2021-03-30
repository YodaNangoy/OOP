#include <iostream>

using namespace std;

class Student {
	private:
		int nim;
		string registration_number;
		string prodi;
	public:
		void setNim (int nim);
		void SetRegistrationNumber (string registration_number);
		void setProdi (string prodi);
		int getNim ();
		string getRegistrationNumber ();
		string getProdi ();
};
class Teacher {
	private:
		int nik;
		string faculty;
	public:
		void setNik (int nik);
		int getNik ();
		void SetFaculty (string faculty);
		string getFaculty ();
		void setData ();
		void displayData ();
};
class Person : protected Teacher, protected Student {
	private:
		string name;
		char gender;
	public:
		Person ();
		void setName (string name);
		void setGender (char gender);
		string getName ();
		char getGender ();
};
int main () {
    return 0;
}