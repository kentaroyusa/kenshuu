//
//  main.cpp
//  dokushu6-11
//
//  Created by Kentaro Yusa on 2020/05/25.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.暗黙の型変換による変換関数呼び出しを防ぐにはどうすれば良いか
 explict指定を使う
 */
/*
 Q2.次のプログラムがコンパイルできるように修正せよ
 class A{
 public:
     void foo()const{}
 };

 class B{
     A a;
 public:
     operator const A&(){return a;}
 };

 int main(int argc, const char * argv[]) {
     B b;
     b.foo();
 }
 */
#include <iostream>

class A{
public:
    void foo()const{}
};

class B{
    A a;
public:
    operator const A&(){return a;}
};

int main(int argc, const char * argv[]) {
    B b;
    static_cast<A>(b).foo();
}
