#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st2;
    // Opening files using constructor and reading it
    ifstream in("myfile.txt"); // Read operation
    in>>st2;
    getline(in, st2);  
    cout<<st2;

    return 0;
}
