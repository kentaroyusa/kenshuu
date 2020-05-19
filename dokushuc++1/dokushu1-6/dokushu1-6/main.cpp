//
//  main.cpp
//  dokushu1-6
//
//  Created by Kentaro Yusa on 2020/05/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
#include <string>

/*
 Q1.配列の要素を順に表示
 int array[] = {4,2,1,9,5};
 std::cout << 変更箇所　<< std::endl;
 std::cout << 変更箇所　<< std::endl;
 std::cout << 変更箇所　<< std::endl;
 std::cout << 変更箇所　<< std::endl;
 std::cout << 変更箇所　<< std::endl;
 */
/*
 Q2.配列の途中にヌル文字が入るように文字列を初期化せよ
 char string[]=修正箇所;
 std::cout << string<< std::endl;
 */
/*
 Q3.std::stringでもQ2と同様に初期化せよ
 */

int main(int argc, const char * argv[]) {
    //Q1
   int array[] = {4,2,1,9,5};
    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;
    //Q2
    char string[] = "abc/0def";
    std::cout << string << std::endl;
    //Q3
    std::string abc = "abc/0def";
    std::cout << abc << std::endl;
}
