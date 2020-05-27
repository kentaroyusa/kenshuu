//
//  main.cpp
//  dokushu8-8
//
//  Created by Kentaro Yusa on 2020/05/27.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <string>
/*
 Q1.好きなファイルを読み込みようにしファイルの末尾に移動、その時のエラー確認をせよ
 またその状態で１文字読み込んでエラーがどう変わったか確認せよ
 */
int main() {
    const char* fileName;
    fileName="/Users/kentaroyusa/Documents/dokushuc++8/dokushu8-8/dokushu8-8/erro_Seek.txt";
    std::ifstream in;
    in.open(fileName);
    while(in.good()){
    in.get();
    auto state=in.rdstate();
    
    if(state & std::ios::eofbit){
        std::cout<<"eof"<<std::endl;
    }
    else if(state & std::ios::failbit){
        std::cout<<"fail"<<std::endl;
    }
    else if(state & std::ios::badbit){
        std::cout<<"bad"<<std::endl;
    }
        
    }
    in.get();
    auto state=in.rdstate();
    
    if(state & std::ios::eofbit){
        std::cout<<"eof"<<std::endl;
    }
    else if(state & std::ios::failbit){
        std::cout<<"fail"<<std::endl;
    }
    else if(state & std::ios::badbit){
        std::cout<<"bad"<<std::endl;
    }
    in.close();
    

}
