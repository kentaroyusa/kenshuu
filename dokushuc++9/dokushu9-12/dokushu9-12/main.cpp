//
//  main.cpp
//  dokushu9-12
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include<initializer_list>
/*
 Q1.クラステンプレートのテンプレートパラメーターをコンストラクターに渡す引数から型推論せよ
 */

template <typename T>
class Container{
    T* ptr=nullptr;
    std::size_t count=0;
public:
    explicit Container(const T& init,std::size_t count);
    Container(std::initializer_list<T> init);
    ~Container(){delete [] ptr;}
    void show() const;
};

//あるものを表示したい数だけ返す
template <typename T>
Container<T>::Container(const T& init,std::size_t count):ptr{new T[count]},count{count}{
    for(std::size_t i=0;i<count;i++){
        ptr[i]=init;
    }
}

//リストの中身を返す
template <typename T>
Container<T>::Container(std::initializer_list<T> init):ptr{new T[init.size()]},count{init.size()}{
    std::size_t i=0;
    for(auto e:init){
        ptr[i++]=e;
    }
}

template <typename T>
void Container<T>::show()const{
    for (std::size_t i=0;i<count;i++){
        std::cout<<ptr[i]<<std::endl;
    }
}


int main() {
    Container<std::string> s{std::string{"Hello"},3};
    s.show();
    
    Container<int> i = { 1,2,3,5,7,11};
    i.show();
}
