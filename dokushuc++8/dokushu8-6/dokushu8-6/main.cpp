//
//  main.cpp
//  dokushu8-6
//
//  Created by Kentaro Yusa on 2020/05/27.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.適当な長さのバイナリーをファイルに出力し、そのファイルを再度バイナリーとして読み込め
 */
#include <iostream>
#include <fstream>
#include <string>
int main() {
    const char* fileName;
    fileName="/Users/kentaroyusa/Documents/dokushuc++8/dokushu8-6/dokushu8-6/binary.txt";
    std::ofstream out;
    out.open(fileName);
    out<<"binary"<<std::endl;
    std::cout<<"binary"<<std::endl;
    out.close();
    
    std::ifstream in;
    in.open(fileName);
    char buffer[10];
    in.read(buffer,10);
    for(int i=0;i<in.gcount();i++){
        std::cout<<buffer[i];
    }
    
    in.close();
}
