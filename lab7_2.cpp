#include <iostream> 
#include <string>
using namespace std;

int main() { 
    string name , mo1 , day, a ;
    int code ;
cout << "Fahsai: Sawadee ka...Can you tell me your name? \n";
cout << "?????: " ;
getline(cin,name);
cout << "Fahsai: Wow!!! " << name << " is a really cool name. \n";
cout<< "Fahsai: I think you are an Engineering student. What is your student ID?"<< endl ;
cout << name << ": ";
cin >> code ;
cin.ignore();
cout << "Fahsai: I think you may be GEAR "<< (code /10000000)-12 << ". I have a free movie ticket for you."<< endl;
cout << "Fahsai: Let's go to the cinema together!!!"<<endl;
cout << "Fahsai: What movie do you want to watch?"<< endl;
cout << name << ": ";
getline(cin,mo1);
cout << "Fahsai: So....which day are you free to go with me?"<< endl;
cout<< name << ": ";
getline(cin,day);
cout << "Fahsai: ";
cout <<day << "....that is OK!!! I'm looking forward to watching " << mo1 << " with you."<< endl;
cout << name << ": " ;
getline(cin,a);
cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";

}
