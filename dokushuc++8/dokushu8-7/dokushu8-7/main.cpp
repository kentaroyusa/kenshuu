//
//  main.cpp
//  dokushu8-7
//
//  Created by Kentaro Yusa on 2020/05/27.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
/*
 Q1.ファイルにHello, worldと出力した後、"Hello, file seek"となるように変更せよ
 */
int main() {
    const char* fileName;
    fileName="/Users/kentaroyusa/Documents/dokushuc++8/dokushu8-7/dokushu8-7/Hello_Seek.txt";
    std::ofstream out;
    out.open(fileName);
    out<<"Hello, world";
    out.seekp(7);
    out<<"file seek"<<std::endl;
    out.close();
    

}

