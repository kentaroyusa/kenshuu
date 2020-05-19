//
//  main.cpp
//  dokushu2-3
//
//  Created by Kentaro Yusa on 2020/05/19.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    /*
     Q1.出力結果が42になるように、参照を使用せよ
     int i=0;
     
     int j=i;
     j=42;
     
     std::cout<< i << std::endl;
     */
    int i=0;
    
    int* j = &i;
    *j=42;
    
    std::cout<< i << std::endl;
    
    /*
     Q2.プログラムがエラーにならないようにrを修正せよ
     const int k=42;
     int& r=k;
     */
    const int k=42;
    const int& r=k;
}
