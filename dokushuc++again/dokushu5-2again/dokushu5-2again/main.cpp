//
//  main.cpp
//  dokushu5-2again
//
//  Created by Kentaro Yusa on 2020/06/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class product{
    int id;
    string name;
    int price;
    
public:
    product():id(0),name("aaa"),price(0){}
    explicit product(int i,string n,int p):id(i),name(n),price(p){
    }
    
};

int main(int argc, const char * argv[]) {
    product p[4]={
        product{1,"smartphone",60000},
        product{2,"tablet",45000},
    };
}
