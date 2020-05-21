//
//  main.cpp
//  dokushu4-9
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.#includeはどんな命令か
 ヘッダーファイルを読み込むプリプロセッサー命令
 */
/*
 Q2.マクロを使って関数呼び出しが異なる関数呼び出しになるようなプログラムをかけ
 */
/*
 Q3.マクロ定義を削除するにはどうしたらいいか
 #undefを使う
 */
void hello(){
    std::cout<<"hello"<<std::endl;
}
void bye(){
    std::cout<<"bye"<<std::endl;
}

int main() {
    hello();
    bye();
#define hello bye
    hello();
}
