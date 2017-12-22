#include <iostream>

/*
* Brandon Lapomeray
*
* Program that creates a Phonebook record
*
 */

using namespace std;

class PhoneRecord {
public:


    /** Constructors **/

    PhoneRecord(){

        cout << "Creates Record" << endl;
    }

    void PhoneNumber(string fn, string ln, string pn ){

        firstname = fn;
        lastname = ln;
        phoneNumber = pn;
    }



    /** Mutators **/
    void changeFirstname(){

        string fn;

        cout << "Enter new First name: \n";
        cin >> fn;

        // Checks is first name begins with capital
           char c = fn[0];

            if (!isupper(c)) {
                cout << "Enter first name with a capital letter: " << endl;
                cin >> fn;
            }

        firstname = fn;

    }



    void changeLastname(){

        string ln;

        cout << "Enter new last name: \n";
        cin >> ln;

        // Checks if last name begins with capital
        char c = ln[0];

        if (!isupper(c)) {
            cout << "Enter last name with a capital letter: " << endl;
            cin >> ln;
        }
        lastname = ln;

    }

    void changePhoneNumber(string pn){

        phoneNumber = pn;

    }



    /** Accesors **/

    string getFirstname(){


            return firstname;
    };

    string getLastname(){


        return lastname;
    };

    string getPhoneNumber(){
        return phoneNumber;
    };



private:

    string firstname, lastname, phoneNumber;

};

int main() {

    PhoneRecord rec;
    rec.PhoneNumber("Bob","Dylan","718-909-90009");

    cout << "First name is " << rec.getFirstname() << endl;

    rec.changeFirstname();
    rec.changeLastname();

    cout << "New First name is " << rec.getFirstname() << endl;
    cout << "New Last name is " << rec.getLastname() << endl;





    return 0;
}