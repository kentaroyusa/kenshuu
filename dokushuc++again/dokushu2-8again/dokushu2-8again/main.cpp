//
//  main.cpp
//  dokushu2-8again
//
//  Created by Kentaro Yusa on 2020/06/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//


/*
 auto lamuda=[//キャプチャ](//パラメータ){}
 */
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    auto lamuda=[](){
        cout<<"hello"<<endl;
    };
    lamuda();
    
    int v=12;
    //ここまでのvの値を出力
    auto lamuda1=[v](){
        cout<<v<<endl;
    };
    lamuda1();
    
    
    auto lamuda2=[v]()mutable{
        //ラムダ式内で変更しても、この式外では変数は変更されない
        v=13;
    };
    lamuda2();
    cout<<v<<endl;
    
    auto lamuda3=[&v]()mutable{
        //参照で受け取った変数をラムダ式内で変更すると値も変更される
        v=13;
    };
    lamuda3();
    cout<<v<<endl;
    lamuda1();
    
    //iを足して返す
    auto lamuda4=[v](int i){
        return v+i;
    };
    v=lamuda4(30);
    cout<<v<<endl;
}
