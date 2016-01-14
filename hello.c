#include <iostream>     
#include <functional>   
int main(){
    auto func1 = [](int i) { return i+4; };
    std::cout << "func1: " << func1(6) << '\n'; 
    std::function<int(int)> func2 = [](int i) { return i+4; };
    std::cout << "func2: " << func2(6) << '\n'; 
}
