#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream file1("textfileone.txt", ios::binary);
    ofstream file2("textfiletwo.txt", ios::binary);

    file2 << file1.rdbuf();
}
