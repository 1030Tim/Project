// main.cpp
#include<iostream>
#include<string>
#include<fstream>
#include "Source.h"
using namespace std;

int main(void){ 
    int n;
    cout << "輸入學生資料數：";
    cin >> n;
    Source set[n];
    

    for (int i = 0; i<n; i++){
        string name;
        int English,Math;
        cin >> name >> English >> Math;
        set[i].inputName(name);
        set[i].inputEnglish(English);
        set[i].inputMath(Math);
    }

    ofstream file("data.csv");
    file << "name,English,Math\n";

    for (int i = 0; i<n; i++){
        file << set[i].getName() << ","
             << set[i].getEnglish() << ","
             << set[i].getMath() << "\n";
    }
    file.close();
}