#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
bool num = true;
int first = 0;
int total;
while(num){
    cin >> first;
    if(first == 0){
        num = false;
}
else{
    total += first;
    cout << "The total is: " << total << endl;
}
}
cout << "Your total is: " << total << endl;
    return 0;
}