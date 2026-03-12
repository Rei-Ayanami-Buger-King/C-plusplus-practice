using namespace std;
#include <iostream>
#include <iomanip> // lets me set the precision on a float output using "setprecision"
//Today I will learn how to use functions

//the void means I don't want the function to return anything (that doesn't mean I can't print out of it or call another function from it)
void output(int amount, float price, string name){
    cout << fixed << setprecision(2) << "You bought " << amount << " " << name << "s and they cost $" << price <<  " each\n In total you owe $" << price * amount; //the fixed stops it from outputting scientific notation
}
//we can also use printf() to format the float/string output
//output needs to be above input due to scope reasoning
void input(){
    string name;
    int amount;
    float price;
    cout << "Please enter your item name\n";
    cin >> name;
    cout << "Please enter how many\n";
    cin >> amount;
    cout << "How much does one cost?\n";
    cin >> price;
    output(amount, price, name);
}

int main(){
    input();
    return 0;
}