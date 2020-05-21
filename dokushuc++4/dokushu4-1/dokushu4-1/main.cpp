//
//  main.cpp
//  dokushu4-1
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout<<"__FILE__:"<< __FILE__<<std::endl;
    std::cout<<"__LINE__:"<< __LINE__<<std::endl;
    std::cout<<"__func__:"<< __func__<<std::endl;
    std::cout<<"__cplusplus:"<< __cplusplus<<std::endl;
    int line=__LINE__;
    std::cout<<"line:"<<line<<",__LINE__:"<<__LINE__<<std::endl;
}
