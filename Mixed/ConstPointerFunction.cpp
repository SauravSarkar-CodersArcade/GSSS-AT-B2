#include <iostream>
using namespace std;

const char* RecommendMeSomeFood(char firstLetter);
int main() {
    cout << "Today I will have:-> " << RecommendMeSomeFood('a');
    return 0;
}

const char* RecommendMeSomeFood(char firstLetter){
    if (firstLetter == 'a' || firstLetter == 'A'){
        return "Apple";
    }else if (firstLetter == 'b' || firstLetter == 'B'){
        return "Biryani";
    } else if (firstLetter == 'c' || firstLetter == 'C'){
        return "Chilli Chicken";
    }
    else return "Water";
}
