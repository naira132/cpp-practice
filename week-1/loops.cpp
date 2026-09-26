#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
// string name;
// string temp;

// cin >> name;

// for(size_t i = 0; i < name.length(); i++){
//     cout << i << ": " << name[i] << endl;
// }
// cin >> temp;

// cout << "The length of the string is: " << temp.length() << endl;
// cout << "The first character is: " << temp[0] << endl;
// cout << "The last character is: " << temp[temp.length() - 1] << endl;


// string test;

// cin >> test;

// char first = 'J';
// test[0]= first;

// cout << test << endl;
// cin.ignore(); 
// string fullName;

// getline(cin, fullName);

// cout << "Full name: " << fullName << endl;

int num = 1;

    while (num <= 50) {
        // 1. Check for FizzBuzz first (divisible by both 3 and 5)
        if (num % 3 == 0 && num % 5 == 0) {
            cout << "FizzBuzz" << endl;
        }
        // 2. If not FizzBuzz, check for Fizz
        else if (num % 3 == 0) {
            cout << "Fizz" << endl;
        }
        // 3. If not Fizz, check for Buzz
        else if (num % 5 == 0) {
            cout << "Buzz" << endl;
        }
        // 4. If none of the above, just print the number
        else {
            cout << num << endl;
        }
        
        num++; // Move to the next number
    }

return 0;


}