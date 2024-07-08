#include <iostream>
#include <string>

int stringToDec(const std::string& s){
    int res = 0;
    for(int i = 0 ; i <s.size() ; ++i){
        res *= 10;
        res += s[i] - '0';
    }
    return res;
    
}
int main(){

    std::string s = "7";
    std::cout << stringToDec(s) + 25 << std::endl;
    return 0;
}