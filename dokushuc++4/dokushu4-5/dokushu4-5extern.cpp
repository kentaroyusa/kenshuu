//
//  dokushu4-5extern.cpp
//  dokushu4-5
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include "dokushu4-5extern.hpp"
#include <iostream>
int value=42;
void show_extern_variable(){
    std::cout<<"extern変数のアドレス:"<<&value<<std::endl;
    std::cout<<"extern変数の値:"<<value<<std::endl;

}
