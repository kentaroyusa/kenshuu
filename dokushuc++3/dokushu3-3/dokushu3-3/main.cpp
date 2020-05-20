//
//  main.cpp
//  dokushu3-3
//
//  Created by Kentaro Yusa on 2020/05/20.
//  Copyright © 2020 Kentaro Yusa. All rights reserved.
//

/*
 Q1.以下のプログラムでメンバー変数がコンストラクターで初期化するようにせよ
 #include <iostream>
 #include<string>

 class Book{
     std::string title;
     std::string writer;
     int price;
     
 public:
     Book(std::string title,std::string writer,int price);
     
 };
Q2.コピーコンストラクタを追加しメンバーがコピーされることを確認せよ
 Q3.インスタンスの初期化時に=を使えないのはどんな時か
二つ以上の値をコンストラクターに渡したいとき
 */
#include <iostream>
#include<string>

class Book{
    std::string title;
    std::string writer;
    int price;
    
public:
    Book(std::string title,std::string writer,int price);
    
    //Q2
    Book(const Book& other);
    
    std::string get_title()const;
    std::string get_writer()const;
    int get_price()const;
    
};

Book::Book(std::string b_title,std::string b_writer,int b_price){
    title=b_title;
    writer=b_writer;
    price=b_price;
}

//Q2
Book::Book(const Book& other){
    title=other.title;
    writer=other.writer;
    price=other.price;
    
}

std::string Book::get_title()const{
    return title;
}
std::string Book::get_writer()const{
    return writer;
}
int Book::get_price()const{
    return price;
}

int main() {
    Book oldbook("坂の上の雲","司馬遼太郎",540);
    std::cout<<oldbook.get_title()<<","<<oldbook.get_writer()<<","<<oldbook.get_price()<<std::endl;
    //Q2
    Book copy(oldbook);
    std::cout<<copy.get_title()<<","<<copy.get_writer()<<","<<copy.get_price()<<std::endl;
}
