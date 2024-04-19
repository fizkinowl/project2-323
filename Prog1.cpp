#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <stack>

using namespace std;

stack<char> pile;
string input = "";
int token = 0;

char terminals[] = {'a','+','-','*','/','(',')'};

bool isTerminal(char t) {
    for(char i: terminals) {
        if(t == i) {
            return true;
        }
    }
    return false;
}

void E() {

}

void T() {

}

void Q() {

}

void F(){

}

int main(int argc, char* argv[]) {
    pile.push('$');
    pile.push('E');
    for(int i = 1; i < argc; i++) {
        input += argv[i];
    }
}

bool driver() {
    while(pile.top() != '$') {
        char t = pile.top();
        char i = input[token];
        if(isTerminal(t)) {
            if(t == i) {
                pile.pop();
                token++;
            } else {
                return false;
            }
        } else {
            if(true) { //if table t,i has an entry then create that.
                pile.pop();
                pile.push('t'); //push the result of table t,i
            } else {
                return false;
            }
        }
    }
    return true;
}