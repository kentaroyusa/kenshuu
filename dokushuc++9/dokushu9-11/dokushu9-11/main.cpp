//
//  main.cpp
//  dokushu9-11
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <string>

/*
 Q1.ジェネリックラムダ式とはどのようなラムダ式か
 引数の型推論をするラムダ式
 */

/*
 Q2.第１引数に受け取ったものを表示するジェネリックラムダ式を定義し、任意の型の引数で呼び出せ
 */

std::string type(int){
    return "int";
}
std::string type(char){
    return "char";
}
int main() {
    auto lamuda=[](const auto& value){
        std::cout<<type(value)<<std::endl;
    };
    lamuda(3);
    lamuda('d');
}
