#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

/*
 Q1.ファイルの入出力両方することができるファイルストリームの型はなにか
 std::fstream inout;
 */

/*
 Q2.ファイル（今回はソースコード自身）を読み込んで画面に表示するプログラムをかけ
 */
int main() {
    std::ifstream imain{"/Users/kentaroyusa/Documents/dokushuc++8/dokushu8-5/dokushu8-5/main.cpp"};
    std::string mainline;
    int i=0;
    do{
    std::getline(imain,mainline);
    std::cout<<mainline<<std::endl;
        i++;
    }while(!imain.eof());
    imain.close();
    
}
