#ifndef LAB5_PATTERN_H
#define LAB5_PATTERN_H

#include <iostream>
#include <cstring>
#include <string.h>
#include <locale.h>
#include <string>
#include <stdio.h>
#include <fstream>

template <typename S>
class Pattern{
    protected:
        S *arr;
        int size;
        std::string filename;
        std::ifstream input;
    public:
        void clear();
        void refresh();
        Pattern(int size, char* filename) : size(size), filename(filename) {
            arr = new S [size];
            input.open(filename);
        }
        ~Pattern();

};

template <typename S>
Pattern<S>::~Pattern(){
    delete[] arr;
};

template <typename S>
void Pattern<S>::refresh(){
    std::string c;
    char word[30] = {0};
    int j = 0;
    size = 0;
    while(!input.eof()){
        input >> c;
        size++;
    }
    arr = new S [size];
    size=0;
    input.seekg(0);
    while(!input.eof()){
        input >> arr[size];
        size++;
    }
    size--;
    arr[size].erase(arr[size].find('.'), 1);
    strcpy(word, arr[size].c_str());
    std::cout << word << std::endl;
    for(int i = 0; i<=size; i++){
        if (strcmp (arr[i].c_str(), word)==0){
            //printf("\nСтроки идентичны");
        }
        else{
            bool ifs = false;
            char buffer[30] = {0};
            strcpy(buffer, arr[i].c_str());
            for(int g = 1; g <= strlen(buffer)-1; g++){
                if(buffer[g]>buffer[g-1] || buffer[g]==buffer[g-1] ){
                    ifs = true;
                }else{
                    ifs = false;
                    break;
                }
            }
            if(ifs == true){
                std::cout << arr[i] << " ";
            }
        }
    }
    /*while(arr[size]!=' '){
        size--;
    }
    size++;
    while(arr[size]!= '.'){
        word[j]= arr[size];
        size++;
        j++;
    }
    printf("Длинна: %i", size);
    printf("поледнее слово: %s", word);
    std::cout << std::endl;
    printf("\n");*/

};

template <typename S>
void Pattern<S>::clear(){
    for(int i = 0; i < size; i++)
        arr[i] = "\0";
};

#endif //LAB5_PATTERN_H