//
//  main.cpp
//  dokushu11-2
//
//  Created by Kentaro Yusa on 2020/05/29.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <cstdint>//std::intptr_tのため

extern "C" void unsafe_c_function(char* str){
    std::cout<<"unsafe_c_function: "<< str <<std::endl;
}

void unsafe_interface_function(void* data){
    auto value = reinterpret_cast<std::intptr_t>(data);
    std::cout<<"unsafe_interface_function: "<<value<<std::endl;
}

int main() {
    const int value =72;
    const char message[]="constant string";
    
    //constを外す
    unsafe_c_function(const_cast<char*>(message));
    
    //数値をポインター型に変換して渡す
    unsafe_interface_function(reinterpret_cast<void*>(static_cast<std::intptr_t>(value)));
    
}
