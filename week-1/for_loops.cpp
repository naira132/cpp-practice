#include <iostream>
using namespace std;

int main(){

// string name;

// getline(cin, name);
//     for (int i = 0; i < name.length(); i ++){
            
//             if (name[i] == ' '){
//                 cout << "Found a space" << endl;
//             }
//     } 

// convert to reverse binary

// int num;

// cin >> num;
// while (num > 0){
//     cout << num % 2;
//     num = num / 2;
// }

// VARIED input

// int num;
// int avg;
// int max;
// int i;

// cin >> num;

// while (num >= 0){
// // do
//         avg += num;
//         if (num > max){
//             max = num;
//         }
//         i++;
// cin >> num;
// }

// cout << "The average is: " << avg / i << endl;
// cout << "The max is: " << max << endl;

//COUNT CHAR

// char letter;
// string name;
// int j =0;

// cin >> letter;

// cin.ignore(); // Ignore the newline character left in the input buffer

// getline(cin, name);
// for(int i = 0; i < name.length(); i++){
//     if(name[i] == letter){
//         j++;
//     }
// }

// cout << j << " " <<  letter;


//REMOVE NON ALPHABETIC

// string name;

// getline(cin, name);

// for (int i = 0; i < name.length(); i++){
//     if (!isalpha(name[i])){
//         name.erase(i, 1);
//         i--; // Adjust index after erasing a character
//     }
// }

// cout << name << endl;

//countdown until matching digits

// int num;

// cin >> num;

// if (num < 11 || num > 99){
//     cout << "Invalid input" << endl;
// }
// else{
// if (num / 10 == num % 10){
//     cout << "The digits match!" << endl;
// }
// else{
//     while (num / 10 != num % 10){
//         cout << num << endl;
//         num--;
//     }
//     cout << num << endl;
// }
// }

//reverse string

// string name;

// getline(cin, name);

// for (int i = name.length() - 1; i >= 0; i--){
//     cout << name[i];
// }


// string phrase;
// bool isPalindrome = true;

// getline(cin, phrase);

// for (int i = 0; i < phrase.length(); i++){
//     for (int j = phrase.length()- 1; j >= 0; j--){
//         if (phrase[i] == phrase[j]){
//             bool isPalindrome = true;
//         }
//         else{
//             bool isPalindrome = false;
//             break;
//     }
// }
// }

// if (isPalindrome == true){
//     cout << "The phrase is a palindrome" << endl;
// }
// else {
//     cout << "The phrase is not a palindrome" << endl;
// }


    return 0;
}