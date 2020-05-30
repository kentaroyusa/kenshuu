//
//  main.cpp
//  dokushu13-4
//
//  Created by Kentaro Yusa on 2020/05/30.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <string>
/*
 Q1.整数を文字列に変換せよ
 */
/*
 Q2."3.14159265"を浮動小数点数にせよ
 */
int main() {
    //Q1
    std::string inttomoji=std::to_string(10);
    std::cout<<inttomoji<<std::endl;
    
    //Q2
    float mojitofloat=std::stof("3.14159265");
    std::cout<<mojitofloat<<std::endl;
}
