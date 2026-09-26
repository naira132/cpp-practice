#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
string name;
string temp;

cin >> name;

for(size_t i = 0; i < name.length(); i++){
    cout << i << ": " << name[i] << endl;
}
cin >> temp;

cout << "The length of the string is: " << temp.length() << endl;
cout << "The first character is: " << temp[0] << endl;
cout << "The last character is: " << temp[temp.length() - 1] << endl;


string test;

cin >> test;

char first = 'J';
test[0]= first;

cout << test << endl;
cin.ignore(); 
string fullName;

getline(cin, fullName);

cout << "Full name: " << fullName << endl;

return 0;
}