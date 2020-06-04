//
//  main.cpp
//  Qiitakakomon2
//
//  Created by Kentaro Yusa on 2020/06/02.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//


/*
 【問題概要】

 0 と 1 のみから成る 3 桁の番号 s が与えられます。1 が何個含まれるかを求めてください。

 【数値例】
 1)
 　s = "101"
 　答え: 2
 '1' が 2 個含まれています。
 */

#include <iostream>
#include <string>

int main() {
    std::string s="101";
    int count=0;
    if(s[0]=='1')count++;
    if(s[1]=='1')count++;
    if(s[2]=='1')count++;
    std::cout<<"答え："<<count<<std::endl;
}
