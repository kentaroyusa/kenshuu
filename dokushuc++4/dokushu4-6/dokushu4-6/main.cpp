//
//  main.cpp
//  dokushu4-6
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.インライン指定した関数を一つ定義
 */
/*
 Q2.全てのメンバー関数がインラインとなるようにせよ
 class product{
     int price;
 public:
     product(int price);
     int get_price()const;
     void set_price(int price);
 };
 product::product(int price):price(price){}
 int product::get_price()const{return price;}
 void product::set_price(int price){this->price=price;}

 */

class product{
    int price;
public:
    inline product(int price);
    int get_price()const{return price;};
    void set_price(int price){this->price=price;};
};
product::product(int price):price(price){}

int main(int argc, const char * argv[]) {
    
}
