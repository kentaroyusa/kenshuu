//
//  main.cpp
//  dokushu5
//
//  Created by Kentaro Yusa on 2020/05/22.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.int型の配列を動的確保し、アドレスを返すallocate関数を定義せよ。また動的確保した配列すべての要素を０にせよ
 */
/*
 Q2.int型の参照を受け取り、０でクリアするclear()関数を定義せよ
 */
/*
 Q3.参照を受ける関数と、右辺参照を受ける関数をオーバーライドさせ呼び分けよ
 */
/*
 Q4.enumerate()関数を定義せよ
 */
/*
 Q5.Q4で修正したプログラムのshow()をラムダ式に変えよ
 */
#include <iostream>
//Q1
int* allocate(int* a){
    return a;
}

void show_a(int* a){
    for(int i=0;i<sizeof(&a)/sizeof(int);i++){
           std::cout<<a[i]<<std::endl;
       }
}

//Q2
void clear(int* b){
    *b=0;
}

//Q3
void show_ref(int& v){
    std::cout<<"参照："<<v<<std::endl;
}
void show_ref(int&& v){
    std::cout<<"右辺参照："<<v<<std::endl;
}
//Q4
void show(int v){
    std::cout<<v<<std::endl;
}
void enumerate(int* array,std::size_t length){
    for(std::size_t i=0;i<length;i++){
        show(array[i]);
    }
}
//Q5
auto lamuda=[](int v){
    std::cout<<v<<std::endl;
};

int main() {
    //Q1
    std::cout<<"Q1"<<std::endl;
    int* a = new int;
    std::cout<<allocate(a)<<std::endl;
    for(int i=0;i<sizeof(&a)/sizeof(int);i++){
        a[i]=0;
    }
    show_a(a);
    
    //Q2
    std::cout<<"Q2"<<std::endl;
    int b=10;
    clear(&b);
    std::cout<<b<<std::endl;
    
    //Q3
    std::cout<<"Q3"<<std::endl;
    int c=10;
    show_ref(c);
    show_ref(20);
    
    //Q4
    std::cout<<"Q4"<<std::endl;
    int array[]={1,2,3,5,7,11,13};
    std::size_t length=sizeof(array)/sizeof(array[0]);
    enumerate(array,length);
    
    //Q5
    std::cout<<"Q5"<<std::endl;
    lamuda(20);
}
