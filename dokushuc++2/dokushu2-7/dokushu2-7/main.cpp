//
//  main.cpp
//  dokushu2-7
//
//  Created by Kentaro Yusa on 2020/05/19.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

void show_value(int a){
    std::cout<< a << std::endl;
}

int sum(int a,int b,int c){
    return a+b+c;
}

int sum(int a,int b){
    return sum(a,b,0);
}
/*
 Q1.sumの4引数関数を作れ
 */
//Q1
int sum(int a,int b,int c,int d){
    return sum(a,b)+sum(c,d);
}

/*
 Q2.減産するsub()関数をint型とvector2d型で定義せよ
 */
//Q2
struct vector2d{
    float x;
    float y;
};
int sub(float a,float b){
    return a-b;
}
vector2d sub(vector2d a,vector2d b){
    vector2d c;
    c.x=sub(a.x,b.x);
    c.y=sub(a.y,b.y);
    return c;
}

int main(int argc, const char * argv[]) {
    //Q1
    int x=sum(10,20);
    show_value(x);
    int y=sum(5,15,25);
    show_value(y);
    int z=sum(1,2,3,4);
    show_value(z);
    
    //Q2
    std::cout<<sub(10,20)<<std::endl;
    vector2d a ={-10,30};
    vector2d b ={5,10};
    auto v = sub(a,b);
    std::cout<< v.x<<","<<v.y << std::endl;
    
    
}
/*
 Q3.デフォルト引数が指定できるのはどの引数か
 引数が一つずつ省略できる引数や値によって関数の処理が変わらない関数
 */
