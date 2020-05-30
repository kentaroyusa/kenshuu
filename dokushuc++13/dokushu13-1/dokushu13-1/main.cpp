//
//  main.cpp
//  dokushu13-1
//
//  Created by Kentaro Yusa on 2020/05/30.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <string>

int main() {
    std::string strA="Hello, ";
    std::string strB="world.";
    //結合
    std::string strC=strA+strB;
    std::cout<<strC<<std::endl;
    //比較
    if(strC=="Hello, world."){
        std::cout<<"ok."<<std::endl;
    }
    //確保された領域は自動的に解放される
}
