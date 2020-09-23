//
// Created by nam on 17/09/2020.
//
#include <bits/stdc++.h>
using namespace std;

#include "Intro.h"

vector<int> getIntFromInput(){
    vector<int> numbers;
    int len;
    int number;
    cin >> len;
    for (int i = 0; i < len; i++){
        cin >> number;
        numbers.push_back(number);
    }
    return numbers;
}

int getSumFromInput(){
    int sum;
    int len;
    int number;
    cin >> len;
    for (int i = 0; i < len; i++){
        cin >> number;
        sum += number;
    }
    return sum;
}


void Intro::add() {
    int a, b;
    cin >> a;
    cin >> b;
    cout<< a + b<<endl;
}

int Intro::subSeqMax() {
    vector<int> input_numbers;
    int max_so_far = 0;
    int max_ending_here = 0;
    input_numbers = getIntFromInput();
    for (int i = 0; i < input_numbers.size(); i++){
        max_ending_here = max_ending_here + input_numbers[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_sum;
}

double Intro::addMod() {
    double a, b;
    cin >> a;
    cin >> b;
    return fmod((a+b), (pow(10, 9) + 7));
}

double Intro::expMod() {
    int a, b;
    cin >> a;
    cin >> b;
    return fmod(pow(a, b), (pow(10, 9)+7));
}

int Intro::sumSeq() {
    vector<int> input_numbers;
    input_numbers = getIntFromInput();
    int sum;
    for (int i = 0; i < input_numbers.size(); i ++)
        sum += input_numbers[i];
    return sum;
}
string Intro::wayTooLongWords() {
    string input_string;
    string result;
    cin >> input_string;
    if (input_string.length() > 10)
        result = input_string.at(0) + to_string(input_string.length() - 2) + input_string.at(input_string.length() - 1);
    return result;
}