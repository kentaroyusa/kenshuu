//
//  main.cpp
//  dokushu2-6
//
//  Created by Kentaro Yusa on 2020/05/19.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <string>

/*
 Q1.std::cinを使って実数を１つ入力して実数を表示せよ
 Q2.コンソールから1行文字列を入力し、１行文字列を表示せよ
 Q3.do-whileを用いて空行が入力されるまで入力された行を出力し続け、各行の初めにプロンプトを表示する
 */

int main(int argc, const char * argv[]) {
    //Q1
    /*
    double d;
    std::cout<<"数値を入力してください:";
    std::cin>> d;
    std::cout<< "入力された数値は" << d << "です" << std::endl;
    */
    //Q2
    std::string s;
    std::cout<<"文字列を入力してください:";
    std::getline( std::cin, s );
    std::cout<< "入力された文字列は" << s << "です" << std::endl;
    //Q3
    std::string st;
    do{
        std::cout<<"文字列を入力してください:";
        std::getline( std::cin, st );
        std::cout<< "入力された文字列は" << st << "です" <<st.length()<< std::endl;
    }while(st.length()> 0);
    
}
