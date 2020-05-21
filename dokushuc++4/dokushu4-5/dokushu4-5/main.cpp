//
//  main.cpp
//  dokushu4-5
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.ビルドの手順を説明せよ
 ソースファイルをプリプロセッサーでプリプロセスし、そのファイルをコンパイラーでコンパイルし、その後複数ファイルをリンカーでリンクする
 */
/*
    Q2.exturn宣言を使って他のソースファイルで宣言している変数を読み書きせよ
*/
extern int value;
void show_extern_variable();

int main() {
    std::cout<<"main:extern変数のアドレス:"<<&value<<std::endl;
    std::cout<<"main:extern変数の値:"<<value<<std::endl;
    value = 0;
    show_extern_variable();

}
