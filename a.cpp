#include<cstdio>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

enum class Operation{
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator{

    //Constructor
    Calculator(int a, int b){
        if(a + b){
            Operation::Add;
        }else if(a-b){
        Operation::Subtract;
        }else if (a * b){
        Operation::Multiply;
        }else if (a/b){
        Operation::Divide;}
    }

    int calculate(int a, int b){
        if(a+b){
            return a+b;
        }else if (a-b){
        return a-b;
        }else if (a*b){
        return a*b;
        }else if(a/b){
        return a/b;
        }else {
        printf("No argument\n");}
    }
    int a{};
    int b{};
    switch(Operation){
    case Operation::Add:{
       return a + b;
       }break;
       case Operation::Subtract:{
       return a - b;
       }break;
       case Operation::Multiply:{
       return a * b;
       }break;
       case Operation::Divide:{
       return a/b;
       }break;
       default:{
       printf("Error Unknown Operation")
       }
    }







};

int main(){
    a



}

