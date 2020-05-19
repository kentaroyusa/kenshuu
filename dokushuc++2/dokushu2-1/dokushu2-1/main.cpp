//
//  main.cpp
//  dokushu2-1
//
//  Created by Kentaro Yusa on 2020/05/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.ドット演算子をアロー演算子に変更
 struct product{
     int id;
     int price;
     int stock;
 };

 void show_product(product product){
     std::cout << "商品ID：" << product.id <<std::endl;
     std::cout << "単価：" << product.price <<std::endl;
     std::cout << "在庫数：" << product.stock <<std::endl;
     
 }

 int main(int argc, const char * argv[]) {
     product pen={
         0,
         100,
         200
     };
     show_product(pen);
 }

 */
/*
 Q2.共用体と構造体の違い
 メンバー変数のアドレスが全て同じなのが共用体
 */
/*
 Q3.実行結果がどうなるか予想しなさい
 struct S{
     int x;
     int y;
 };
 union U{
     S s;
 };


 int main() {
     U u= {};
     u.s.x=10;
     u.s.y=20;
     std::cout << u.s.x << std::endl;
 }
 
 10と表示される
 */

struct product{
    int id;
    int price;
    int stock;
};

void show_product(product* product){
    std::cout << "商品ID：" << product->id <<std::endl;
    std::cout << "単価：" << product->price <<std::endl;
    std::cout << "在庫数：" << product->stock <<std::endl;
    
}
struct S{
    int x;
    int y;
};
union U{
    S s;
};


int main() {
    product pen={
        0,
        100,
        200
    };
    show_product(&pen);
    
    U u= {};
    u.s.x=10;
    u.s.y=20;
    std::cout << u.s.x << std::endl;
}


