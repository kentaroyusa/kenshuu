//
//  main.cpp
//  dokushu5-2
//
//  Created by Kentaro Yusa on 2020/05/22.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
/*
 Q1.以下のプログラムが動くようにクラスを修正せよ
 */
/*
 Q2.Q1をstd::vectorを用いて書き直せ
 */

class product{
    int id;
    std::string name;
    int price;
public:
    product():product(-1,"defult",-1){}
    explicit product(int id,std::string name,int price):id(id),name(name),price(price){}
    int get_id(){return id;}
};



int main() {
    std::vector<product> p;
    p.push_back(product{1,"smart phone",60000});
    p.push_back(product{2,"tablet",35000});
    
    for(int i=0;i<p.size();i++){
        std::cout<<p[i].get_id()<<std::endl;
    }
}
