#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream lin("/Users/s20181105305/Desktop/lin.txt");
    if (lin.is_open())
    {
        lin<<"hahahaha\n";
        cout<<"hahahaha\n";
        lin.close();
    }
    return 0;
}
