//
//  main.cpp
//  dokushu10-4
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <exception>

/*
 Q1.std::exceptionから派生して独自の例外クラスを作成せよ
 */

class my_exception : public std::exception{
    const char* message;
public:
    explicit my_exception(const char* message);
    const char* what() const noexcept override;
};

my_exception::my_exception(const char* message):message{message}{
}
const char* my_exception::what() const noexcept {
    return message;
}
int main() {
    try{
        throw my_exception("My Exception");
    }
    catch(my_exception& e){
        std::cout<<e.what()<<std::endl;
    }
}
