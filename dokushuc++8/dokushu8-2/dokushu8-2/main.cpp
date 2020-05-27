//
//  main.cpp
//  dokushu8-2
//
//  Created by Kentaro Yusa on 2020/05/27.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.円周率を科学技術表記でコンソールに出力せよ
 */

/*
 Q2.整数８桁８進数、右詰で充填文字に-を使って表示せよ
 */

int main() {
    auto dephalt=std::cout.flags();
    std::cout.setf(std::ios::scientific);
    std::cout<<3.141592f<<std::endl;
    std::cout.flags(dephalt);
    
    std::cout.setf(std::ios::right);
    std::cout.setf(std::ios::oct,std::ios::basefield);
    std::cout.width(8);
    std::cout.fill('-');
    std::cout<<123<<std::endl;
}
