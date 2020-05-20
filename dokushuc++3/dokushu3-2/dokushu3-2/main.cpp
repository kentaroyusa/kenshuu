//
//  main.cpp
//  dokushu3-2
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.コンストラクタと他の関数の違い
 戻り値がない、メンバー初期化リストを作れる
 Q2.コンストラクターとデストラクターを持ったクラスを定義し、呼び出せ
 Q3.コンストラクターでメモリーを取得し、デストラクターでそれを解放することをなんというか
 RAII
 */

#include <iostream>
#include <string>
//Q2
class person{
    std::string p_name;
    int p_age;
public:
    person();
    ~person();
    void set_name(std::string name);
    void set_age(int age);
    
    std::string name()const;
    int age()const;
};

person :: person() : p_age(-1){
      std::cout << "コンストラクター呼び出し"<<std::endl;
}
person :: ~person(){
    std::cout << "デストラクター呼び出し"<<std::endl;
}

void person::set_name(std::string name){
    p_name=name;
};
void person::set_age(int age){
    p_age=age;
};

std::string person::name() const{
    return p_name;
};
int person::age() const{
    return p_age;
};

int main() {
    person bob;
    std::cout << "初期値：" << bob.age()<<","<<bob.name()<<std::endl;
    bob.set_name("bob");
    bob.set_age(20);
    std::cout << "ステータス：" << bob.age()<<","<<bob.name()<<std::endl;
}
