//
//  main.cpp
//  dokushu8-3
//
//  Created by Kentaro Yusa on 2020/05/27.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.getline()メンバー関数を使って空行が入力されるまで入力された行を出力し続けろ
 */

int main() {
    
    char buffer[256];
    do{
    std::cout<<"入力"<<std::endl;
    std::cin.getline(buffer,256);
    std::cout<<"buffer:"<<buffer<<std::endl;
    if(buffer[0]=='\0')break;
    }while(1);
    
}

