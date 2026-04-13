// Source.cpp
#include<iostream>
#include<string>
#include<vector>
#include "Source.h"


Source::Source(){
    this->name = "admin";
    this->English = 0;
    this->Math = 0;
}
void Source::inputMath(int Math){
    this->Math = Math;
}
void Source::inputName(std::string name){
    this->name = name;
}
void Source::inputEnglish(int English){
    this->English = English;
}
std::string Source::getName(){
    return this->name;
}
int Source::getMath(){
    return this->Math;
}
int Source::getEnglish(){
    return this->English;
}