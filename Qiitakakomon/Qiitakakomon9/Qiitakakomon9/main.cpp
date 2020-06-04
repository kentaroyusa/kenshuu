//
//  main.cpp
//  Qiitakakomon9
//
//  Created by Kentaro Yusa on 2020/06/04.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 【問題概要】
 英小文字からなる文字列 S が与えられます。
 T が空文字列である状態から始めて、以下の操作を好きな回数繰り返すことで S=T とすることができるか判定してください。

 T の末尾に "dream", "dreamer", "erase", "eraser" のいずれかを追加する。
 【制約】

 1≤|S|≤105
 S は英小文字からなる
 【数値例】
 1)
 　S = "dreameraser"
 　答え: "YES"

 "dream", "eraser" の順で T の末尾に追加することで S=T とすることができます。
 */

#include <iostream>
#include <string>
#include <algorithm>



int main() {
    std::string divide[4] = {"dream", "dreamer", "erase", "eraser"};
    std::cout<< "S:"<<std::endl;
    std::string S;
    std::cin >> S;

    std::reverse(S.begin(), S.end());
    for (int i = 0; i < 4; ++i) std::reverse(divide[i].begin(), divide[i].end());

    bool can = true;
    for (int i = 0; i < S.size();) {
        bool can2 = false;
        for (int j = 0; j < 4; ++j) {
            std::string d = divide[j];
            if (S.substr(i, d.size()) == d) {
                can2 = true;
                i += d.size(); 
            }
        }
        if (!can2) { // divide できなかったら
            can = false;
            break;
        }
    }

    if (can) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

}
