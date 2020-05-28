//
//  main.cpp
//  dokushu10
//
//  Created by Kentaro Yusa on 2020/05/28.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.何か例外を投げ、それを捕まえよ
 */
/*
 Q2.コンストラクターで特定の条件下で例外を投げるクラスを作成し、それを配列のnew演算子で動的確保せよ
 この時どのコンストラクターとデストラクターが呼ばれたかわかるようにし、プログラムが異常終了しないように例外を捕まえよ
 */
/*
 Q3.標準ライブラリーが提供しているstd::exceptionが持っているメンバー関数と、そのメンバー関数の役割を説明せよ
 what()関数は例外に関するメッセージを取得できる
 */
class A{
public:
    A(int* a){
        std::cout<<"int Q2"<<std::endl;
        throw a;
    }
    A(float a){
        std::cout<<"float Q2"<<std::endl;
    }
    ~A(){
        std::cout<<"デストラクター"<<std::endl;
    }
};

int main() {
    //Q1
    try{
        for(int i=0;i<10;i++){
            std::cout<<"safe Q1"<<std::endl;
            if(i==2){
                throw 0;
            }
        }
    }
    catch(int e){
        std::cout<<"error Q1"<<std::endl;
    }
    
    //Q2
    try{
        int* array=new int[5]{0,1,2,3};
        A a(2.1f);
        A b(array);
        
    }
    catch(int* e){
        std::cout<<"safe Q2:"<<e[2]<<std::endl;
    }

}
