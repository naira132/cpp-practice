#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
string name;

cin >> name;

for(size_t i = 0; i < name.length(); i++){
    cout << i << ": " << name[i] << endl;
}
return 0;
}