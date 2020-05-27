//
//  main.cpp
//  dokushu8-4
//
//  Created by Kentaro Yusa on 2020/05/27.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include<iomanip>
/*
 Q1.円周率を科学表記せよ
 */
/*
 Q2.１０進数８桁を右詰めで充填文字には０を使用せよ
 */

int main(int argc, const char * argv[]) {
    std::cout<<std::scientific<<3.141592f<<std::endl;

    std::cout<<std::setw(8)<<std::right<<std::dec<<std::setfill('0')<<12345<<std::endl;
}
