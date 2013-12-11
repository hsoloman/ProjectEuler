#include <iostream>
#include <string>

using namespace std;

string english(int n){
    static const char* ONES[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    static const char* TEENS[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", 
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    static const char* TENS[] = {"zero", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    static const char* HUNDRED = "hundred";
    static const char* AND = "and";
    
    if (n==1000){return "onethousand";}
    string number;
    
    // 0-999
    const int hundreds = n/100;
    n %= 100;
    if (hundreds) {
        number += ONES[hundreds];
        number += HUNDRED;
    }
    
    // 0-99
    if (n) {
        if(!number.empty()) {number += AND;}
    } else {
        return number;
    }
    
    if (n < 20){
        number += TEENS[n];
        return number;
    } else { // 20-99
        const int tens = n/10;        
        n %= 10;
        
        if (tens){number += TENS[tens];}
        if (n){number += ONES[n];}
        return number;
    }
}

int main()
{
    int length = 0;
    for (int i = 1; i <= 1000 ; i++){
        cout << english(i) << endl;
        length += english(i).size();
    }
    
    cout << length << endl;
    
    return 0;
}
