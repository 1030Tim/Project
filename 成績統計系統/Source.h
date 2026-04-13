// Source.h
#ifndef SOURCE_H
#define SOURCE_H
#include<iostream>
#include<string>


class Source{
    private:
        
        std::string name;
        int Math,English;
    public:
        Source();
        void inputMath(int Math);
        void inputName(std::string name);
        void inputEnglish(int Englist);
        std::string getName();
        int  getMath();
        int getEnglish();
};

#endif