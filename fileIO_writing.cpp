#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Samar bhai";
    // Opening files using constructor and writing it
    ofstream out("myfile.txt"); // Write operation
    out<<st;

    return 0;
}
