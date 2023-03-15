/**
* @file         Veri Yapilari Odev Dosyasi
* @description  Program Veri.txt icerisindeki sayilari okuyup verilerin istenen sekilde sakliyor ve veriler istenen kosullarda olup olmadigini kontrol ederek bu kosullara gore ekrana cikti yazdiriyor. Ardindan verileri istenen degisikligi uygulayip yeni ciktiyi ekrana yazdiriyor. Aslinda asil amac verilerin yonetimi.
* @course       2. Ogretim C Grubu
* @assignment   2. Odev
* @date         17.12.2022
* @author       Umut Can Cagatay - umut.cagatay@ogr.sakarya.edu.tr
*/

#ifndef DosyaOkuma_hpp
#define DosyaOkuma_hpp
#include "Radix.hpp"
#include "Test.hpp"
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;

class DosyaOkuma //Dosya okuma islemlerini gerceklestirilmesini saglar
{
public:
    DosyaOkuma(string dosyaAdi, Test* &test);
    ~DosyaOkuma();
private:
    string dosyaAdi;
    int sayiAdedi;
    int* sayilar;
    void satirOkuma(Test* &test); //Dosyayi okuyor
    void diziCevir(string satir); //Dosyadan okunan satiri int dizisine donustuyor
    void sayiAdediBul(string satir); //Satirdaki sayi adetini buluyor
};

#endif