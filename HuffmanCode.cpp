#include "HuffmanTree.h"
#include <iostream>

HuffmanTree* GetHuffmanTree(int size,int* frequencies)
{
    HuffmanTree* tree = new HuffmanTree();

    for(int i = 0; i< size; i++){
        HuffmanTree* node = new HuffmanTree(i,frequencies[i]);

    }


    return tree;

}

int main() {

    int* freq = new int[5];
    freq[0] = 2;
    freq[1] = 5;
    freq[2] = 8;
    freq[3] = 6;
    freq[4] = 10;

    HuffmanTree* t= GetHuffmanTree(5,freq);

    return 0;
}

int[] readFileAndBuildInts() {
    //leer el archivo
    return null;
}

int[] armarFrecuencias(int[] archivo){
    
    int[] prob = new int[256];

    for (int i=0;i<prob.length;i++){
        prob[i]=0;
        for (int j=0;j<archivo.length;j++){
            if (archivo[j]==i){
                prob[i]++;
            }
        }
    }
    return prob;
}

void armarArbol(int m, int[] occurencies){
    
}