//
//  main.cpp
//  dokushu10-3
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <new>

/*
 Q1.new演算子が投げてくる例外のついて説明せよ
 動的メモリの確保をする演算子だが、そのメモリが足りなかった場合std::bad_alloc例外が投げられる
 */
/*
 Q2.new演算子で呼び出したコンストラクターが例外を投げた場合、動的確保したメモリー領域はどうなるか説明せよ
 メモリー領域が適切に開放されてから、例外処理が投げられる
 */

class A{
public:
    A(){
        throw 0;
    }
};

int main() {
    
    try{
        A* ptr=new A;
        delete ptr;
    }
    catch(int g){
     std::cout<<"例外が投げられました　値："<<g<<std::endl;
    }
    
    try{
        int len = 5;
        int* array=new int[len]{0,1,2,3,4,5};
        
        delete [] array;
    }
    catch(std::bad_array_new_length& e){
        std::cout<<"長さ割り当て失敗"<<std::endl;
    }
    catch(std::bad_alloc& f){
        std::cout<<"メモリ割り当て失敗"<<std::endl;
    }
}
