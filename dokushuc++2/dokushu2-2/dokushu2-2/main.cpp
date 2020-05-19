//
//  main.cpp
//  dokushu2-2
//
//  Created by Kentaro Yusa on 2020/05/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.product classに引数三つ受取り、それぞれのメンバー変数に代入するメンバー関数の作成
 Q2.Q1で作成したメンバー関数をmain()で使用する
 class product{
     int id;
     int price;
     int stock;
     
     public:
     int get_id();
     void set_id(int new_id);
     int get_price();
     void set_price(int new_price);
     int get_stock();
     void set_stock(int new_stock);
 };

 int product::get_id(){
     return id;
 }
 void product::set_id(int new_id){
     id=new_id;
 }
 int product::get_price(){
     return price;
 }
 void product::set_price(int new_price){
     if(new_price<0){
         std::cout << "エラー：単価は0以上にしてください" << std::endl;
         return;
     }
     price=new_price;
 }
 int product::get_stock(){
     return stock;
 }
 void product::set_stock(int new_stock){
     if(new_stock<0){
         std::cout << "エラー：在庫数は0以上にしてください" << std::endl;
         return;
     }
     stock=new_stock;
 }

 int main() {
     product pen;
     pen.set_id(0);
     pen.set_price(100);
     pen.set_stock(200);
     
     product* ptr =&pen;
     std::cout << "商品ID：" << ptr->get_id() << std::endl;
     std::cout << "単価：" << ptr->get_price() << std::endl;
     std::cout << "在庫数：" << ptr->get_stock() << std::endl;
 }
 */

class product{
    int id;
    int price;
    int stock;
    
    public:
    int get_id();
    int get_price();
    int get_stock();
    void set_newpen(int new_id,int new_price,int new_stock);
};

int product::get_id(){
    return id;
}
int product::get_price(){
    return price;
}

int product::get_stock(){
    return stock;
}
void product::set_newpen(int new_id,int new_price,int new_stock){
     id=new_id;
    if(new_price<0){
        std::cout << "エラー：単価は0以上にしてください" << std::endl;
        return;
    }
    price=new_price;
    if(new_stock<0){
        std::cout << "エラー：在庫数は0以上にしてください" << std::endl;
        return;
    }
    stock=new_stock;
}

int main() {
    product pen;
    pen.set_newpen(0,100,200);
    
    product* ptr =&pen;
    std::cout << "商品ID：" << ptr->get_id() << std::endl;
    std::cout << "単価：" << ptr->get_price() << std::endl;
    std::cout << "在庫数：" << ptr->get_stock() << std::endl;
}
