//
//  main.cpp
//  dokushu8
//
//  Created by Kentaro Yusa on 2020/05/27.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

/*
 Q1.任意の整数を１６進数の１６桁左揃え、充填文字は'='で表示せよ
 */
/*
 Q2.コンソールからファイル名を入力し、入力ファイルからファイル名の入力用ストリームを開き、開いたストリームに１行入力して、入力を表示せよ
 */
/*
 Q3.バイナリ入力でファイルから１００バイトほどブロック入力せよ
 */
/*
 Q4.入力ストリームの現在の位置を知る方法をしめせ
 in.tellg();
 */

int main() {
    //Q1
    std::cout<<"Q1"<<std::endl;
    auto dephalt=std::cout.flags();
    std::cout.width(16);
    std::cout.fill('=');
    std::cout<<std::hex<<std::left<<123456513 <<std::endl;
    std::cout.flags(dephalt);
    
    //Q2
    //   /Users/kentaroyusa/Documents/dokushuc++8/dokushu8/dokushu8/file8
    std::cout<<"Q2"<<std::endl;
    std::string fileName;
    std::cin>>fileName;
    std::ifstream in;
    in.open(fileName);
    std::string line;
    std::getline(in,line);
    std::cout<<line<<std::endl;
    in.close();
    
    //Q3
    in.open(fileName);
    std::cout<<"Q3"<<std::endl;
    char buffer[100];
    in.read(buffer,100);
    std::cout<<buffer[0]<<std::endl;
    in.close();
}
