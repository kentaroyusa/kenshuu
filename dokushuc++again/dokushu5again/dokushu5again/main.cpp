//
//  main.cpp
//  dokushu5again
//
//  Created by Kentaro Yusa on 2020/06/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

void show(int v){
    std::cout<<v<<std::endl;
}

void enumerate(int* first,int* last,void (*show)(int)){
    for(int i=0;i<last-first;i++){
    show(first[i]);
    }
}

int main(int argc, const char * argv[]) {
    int array[]={1,2,3,5,7,11,13};
    std::size_t length=sizeof(array)/sizeof(array[0]);
    enumerate(array,array+length,show);
}
