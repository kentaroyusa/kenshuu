//
//  main.cpp
//  dokushu1-7
//
//  Created by Kentaro Yusa on 2020/05/18.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

#include <iostream>
/*
 Q1.配列の最後から処理する様に変更
 int array[] = {4,2,1,9,5};
 int i=0;
 while(i<5){
     std::cout << array[i] <<std::endl;
     i +=1;
 }
 */
//Q2.for文でかけ
//Q3.do-while文でかけ

int main(int argc, const char * argv[]) {
    //Q1
    int array[] = {4,2,1,9,5};
    int i=4;
    while(i>=0){
        std::cout << array[i] <<std::endl;
        i -=1;
    }
    
    //Q2
    int j;
    for(j=4;j>=0;j--){
        std::cout << array[j] <<std::endl;
    }
    
    //Q3
    int k=4;
    do{
        std::cout << array[k] <<std::endl;
        k--;
    }while(k>=0);
    
}
