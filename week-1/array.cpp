#include <iostream>
#include <vector>
#include <string>
using namespace std;


//acronym

// int main(){

// vector<string> words;
// string name;

// int n;

// cin >> n;

// for(int i = 0; i < n; i++){
//     cin >> name;
//     words.push_back(name);
// }
// for (size_t i = 0; i < words.size(); i++) {
//         cout << words[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// string CreateAcronym(string phrase){

// vector<char> acronym;

// for (int i = 0; i < phrase.length(); i++){
//     if (isupper(phrase[i])){
//         acronym.push_back(phrase[i]);
//     }
//     }
// for (int i = 0; i < acronym.size(); i++){
//     cout << acronym[i] << ".";
//     }
// cout << endl;
// }

// int main (){

// string name;

// getline(cin, name);

// CreateAcronym(name);

//     return 0;
// }

// bool IsVectorMult10(vector<int> myVec) {
// for (int i = 0; i < myVec.size(); i++) {
//     if (myVec[i] % 10 != 0) {
//         return false;
//     }
// }
// }

// bool IsVectorNoMult10(vector<int> myVec){
// for (int i = 0; i < myVec.size(); i++) {
//     if (myVec[i] % 10 == 0) {
//         return false;
//     }
// }
// }

// int main (){

// int val;

// vector<int> nums;

// cin >> val;

// for (int i = 0; i < val; i++){
// int num;
// cin >> num;
// nums.push_back(num);
// }

//     return 0;
// }

// void SortVector(vector<int>& myVec){
// for (int i = 0; i < myVec.size(); i++) {
//     for (int j = i + 1; j < myVec.size(); j++) {
//         if (myVec[i] < myVec[j]) {
//             swap(myVec[i], myVec[j]);
//         }
//     }
// }
// for( int i = 0; i < myVec.size(); i++){
//     cout << myVec[i] << " ";
// }
// }
// int main (){

// int val;

// vector<int> nums;

// cin >> val;

// for (int i = 0; i < val; i++){
// int num;
// cin >> num;
// nums.push_back(num);
// }

// SortVector(nums);

//     return 0;
// }

// void GetUserValues(vector<int>& userValues, int numValues){

//     for(int i = 0; i < numValues; i++){
//         int value;
//         cin >> value;
//         userValues.push_back(value);
//     }
// }

// void IntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold, vector<int>& resValues){

//     for(int i = 0; i <userValues.size(); i++){
//         if(userValues[i] <= upperThreshold){
//             resValues.push_back(userValues[i]);
//         }
//     }

// }

// int main (){

//     vector<int> userValues;
//     vector<int> resValues;
//     int numValues;
//     int upperThreshold;
//     unsigned int i;

//     cin >> numValues;
//     GetUserValues(userValues, numValues);

//     cin >> upperThreshold;
//     IntsLessThanOrEqualToThreshold(userValues, upperThreshold, resValues);
//     for(i = 0; i < resValues.size(); i++){
//         cout << resValues[i] << " ";
//     }
// }

// int addition(int& a, int& b){
//     a + b;
// }

// int main(){

//     int x = 5;
//     int y = 3;
//     cout << addition(x, y);


//     return 0;
// }

// void fillVector(vector<int> &v){
//     int num;
//     for (int i = 0; i < 5; i++){
//     cin >> num;
//     v.push_back(num);
//     }
// }

// unsigned searchVector(vector<int> v, int target){
// for (int i = 0; i < v.size(); i++){
//     if (v[i] == target){
//         v.pop_back();
//     }
// }
// }
// int main (){

//     int target;

//     vector<int> myVec;

//     fillVector(myVec);

//     cin >> target;

//     return 0;
// }
