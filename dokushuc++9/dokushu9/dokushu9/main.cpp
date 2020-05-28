//
//  main.cpp
//  dokushu9
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1クラステンプレートのメンバー関数として関数テンプレートを定義せよ
 なお定義は関数外で行う
 */
/*
 Q2.部分特殊化したクラステンプレートを定義し、プライマリテンプレートと部分特殊化したクラステンプレートの両方をインスタンスかせよ
 */
/*
 Q3.可変引数テンプレートな関数テンプレートを定義し、その引数を全て別の可変引数な関数テンプレートに完全転送せよ
 */
/*
 Q4.関数テンプレートを定義し、引数が整数型でない時にコンパイルエラーになるようにせよ
 */
/*
 Q5.クラステンプレートのテンプレートパラメーターの型推論では、コンパイラーは何をもとにテンプレートパラメーターを決定するか
 コンストレクターの実引数から
 */
//Q1
template <typename nineone>
class Nineone{
public:
    void shownineone();
};

template <typename nineone>
void Nineone<nineone>::shownineone(){
    std::cout<<"nineone"<<std::endl;
}


//Q2
template<typename A,typename B,typename C>
struct Ninetwo{
    A a;
    B b;
    C c;
    void show_ninetwo()const{
        std::cout<<a<<","<<b<<","<<c<<std::endl;
    }
};

template<typename A,typename C>
struct Ninetwo<A,void,C>{
    A a;
    C c;
    void show_ninetwo()const{
        std::cout<<a<<","<<c<<std::endl;
    }
};


//Q3
template <typename... T>
void ninethree(T&&... args);

template <typename... T>
void ninethree1(T&&... args){
    ninethree(std::forward<T>(args)...);
}


//Q4
template <typename T>
void ninefour(T v){
    static_assert(std::is_integral<T>::value, "not int");
}

int main() {
    //Q1
    Nineone<int> nineone;
    nineone.shownineone();
    
    //Q2
    Ninetwo<int,int,int> ninetwo1{1,3,4};
    ninetwo1.show_ninetwo();

    Ninetwo<int,void,int> ninetwo2{1,3};
    ninetwo2.show_ninetwo();
    
    //Q4
    ninefour<int>(2);
    //ninefour<float>(2.3);
    
    
}
