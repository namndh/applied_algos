#include <bits/stdc++.h>
using namespace std;

vector<int> getInt_FromInput(){
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

void print(vector<int> const &input){
    for (int i = 0; i < input.size(); i++){
        cout << input.at(i) << ' ';
    }
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    cout << fmod(pow(a, b), (pow(10, 9)+7)) << endl;
    return 0;
}
