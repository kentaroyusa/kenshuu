//
//  main.cpp
//  dokushu1-5
//
//  Created by Kentaro Yusa on 2020/05/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>

/*
 Q1.出力が42.195になるように修正。
 void show_value(float f){
     std::cout << f << std::endl;
 }

 int main(int argc, const char * argv[]) {
     int i=42.195f;
     show_value(i);
 }

 */
/*
 Q2.プログラムの結果を予想
 float f =100.001f;
 f -= 100;
 std::cout << f << std::endl;
 
 予想
 float型からint型を引いているので、0.001にならない
 結果
 0.000999451
 */
/*
 Q3.ポインターを用いて出力が42になるようにせよ
 int i=0;
 
 std::cout << i << std::endl;
 */
void show_value(float f){
    std::cout << f << std::endl;
}

int main() {
    //Q1
    float i=42.195f;
    show_value(i);
    //Q2
    float f =100.001f;
    f -= 100;
    std::cout << f << std::endl;
    //Q3
    int j=0;
    
    int* p = &j;
    *p=42;
    
    std::cout << j << std::endl;
}
