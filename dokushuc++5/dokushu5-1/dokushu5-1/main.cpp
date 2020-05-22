//
//  main.cpp
//  dokushu5-1
//
//  Created by Kentaro Yusa on 2020/05/21.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.配列を逆順にするreverse()関数を定義せよ
 */

/*
 Q2.ポインターのみで配列を表示せよ
 */
void reverse(int array[],int n){
    int row[n];
    for(int i=0;i<n;i++){
        row[i]=array[i];
    }
    for(int i=0;i<n;i++){
        array[i]=row[(n-1)-i];
    }
}
int main(int argc, const char * argv[]) {
    int array[]={0,1,2,3,4};
    reverse(array,5);
    std::cout<<array[0]<<std::endl;
    std::cout<<array[1]<<std::endl;
    std::cout<<array[2]<<std::endl;
    std::cout<<array[3]<<std::endl;
    std::cout<<array[4]<<std::endl;
    
    std::cout<<*array<<std::endl;
    std::cout<<*(array+1)<<std::endl;
    std::cout<<*(array+2)<<std::endl;
    std::cout<<*(array+3)<<std::endl;
    std::cout<<*(array+4)<<std::endl;
    
}
