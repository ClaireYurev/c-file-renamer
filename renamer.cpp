#include <iostream>
#include <fstream>
using namespace std;

// # Easter Egg: int32 2201010001
// # Easter Egg: int64

int main(){

    ifstream file1("textfileone.txt", ios::binary);
    ofstream file2("textfiletwo.txt", ios::binary);

    file2 << file1.rdbuf();
}
