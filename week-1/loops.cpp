#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
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

// int num = 1;

//     while (num <= 50) {
//         // 1. Check for FizzBuzz first (divisible by both 3 and 5)
//         if (num % 3 == 0 && num % 5 == 0) {
//             cout << "FizzBuzz" << endl;
//         }
//         // 2. If not FizzBuzz, check for Fizz
//         else if (num % 3 == 0) {
//             cout << "Fizz" << endl;
//         }
//         // 3. If not Fizz, check for Buzz
//         else if (num % 5 == 0) {
//             cout << "Buzz" << endl;
//         }
//         // 4. If none of the above, just print the number
//         else {
//             cout << num << endl;
//         }
        
//         num++; // Move to the next number
//     }

// for(int i =1; i <=10; i++){
//     cout << i << endl;
//     if (i==5){
//         break;
//     }
// }



// string name;

// getline(cin, name);

// for (size_t i = 0; i<name.length(); i++){
//     if (name[i]==' '){
//         cout << "Found a space" << endl;
//     }
// }

// string name;

// getline(cin, name);
//     int j =0;

// for (size_t i = 0; i<name.length(); i++){
//     if (name[i]=='a'){
//         j++;
//     }

// }
// cout << "The number of a's in the string is: " << j << endl;



// int j = 0;
// int i =0;
// while(i <3){
//     cout << "*";
//     i++;
// }
// cout

// for (int i = 0; i < 3; i++){
//     cout << "*";
// for (int j = 0; j < 2; j++){
//     cout << "*";

// }
// cout << endl;
// }
//REMOVE GRAY FROM RBG

// int red;
// int green;
// int blue;
// bool no_gray;

// cin >> red >> green >> blue;

// if (red < 50 || green < 50 || blue < 50 ){
//     no_gray = true;
// }
// if(red >= 50) {
// 	red = red - 50;
// }
// if(green >= 50) {
// 	green = green - 50;
// }
// if(blue >= 50) {
// 	blue = blue - 50;
// }

// cout << red << " " << green << " " << blue << endl;

//SMALLEST NUM

// int num_1;
// int num_2;
// int num_3;

// cin >> num_1 >> num_2 >> num_3;

// if (num_1 < num_2 && num_1 < num_3){
//     cout << num_1 << endl;
// }
// else if (num_2 < num_1 && num_2 < num_3){
//     cout << num_2 << endl;
// }
// else{
//     cout << num_3 << endl;
// }

//INTERSTATE HIGHWAY NUMBERS

// int highway_num;

// cin >> highway_num;

// if(highway_num == 0 || highway_num >999 || highway_num == 200){
//     cout << highway_num << " is not a valid interstate highway number." << endl;
// }

// else if(highway_num >= 1 && highway_num <= 99) {
// if(highway_num % 2== 0){
//     cout << "I-" << highway_num << " is primary, going east/west." << endl;
// }
// else{
//     cout << "I-" << highway_num << " is primary, going north/south." << endl;
// }
    
// }

// else if (highway_num>= 100 && highway_num <= 999){
//     cout << "I-" << highway_num << " is auxiliary, serving I-" << highway_num % 100 << "." << endl;
// }

//EXACT CHANGE

int change;

cin >> change;

if(change <= 0){
    cout << "You did not enter a valid amount." << endl;
}
else if (change % 100 == 0){

}
//LEAP YEAR

return 0;
}