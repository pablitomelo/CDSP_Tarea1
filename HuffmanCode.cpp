#include "HuffmanTree.h"
#include <iostream>
#include <list>

using namespace std;


void InsertNodeInOrderByFrequency(list<HuffmanTree*> &list, HuffmanTree* htree)
{
    if(list.size()==0){
        list.push_back(htree);
    }
    else {
      bool inserted = false;
      for (std::list<HuffmanTree*>::iterator it=list.begin(); (it!=list.end() and !inserted); ++it){
        if((*it)->getFreq() > (htree)->getFreq()){
            list.insert(it,htree);
            inserted=true;
        }
      }
      if(!inserted){
        list.push_back(htree);
      }
    }


}

HuffmanTree* GetHuffmanTree(int size,int* frequencies)
{
    list<HuffmanTree*> list;
    HuffmanTree* newNode;

    for(int i = 0; i< size; i++){
        if(frequencies[i]!=0){
            HuffmanTree* node = new HuffmanTree(i,frequencies[i]);
            InsertNodeInOrderByFrequency(list, node);
        }
    }

    while (list.size()>=2){

        HuffmanTree* node1 = list.front();
        list.pop_front();

        HuffmanTree* node2 = list.front();
        list.pop_front();

        newNode = new HuffmanTree(-1,node1->getFreq() + node2->getFreq());
        newNode->setLeft(node1);
        newNode->setRight(node2);
        list.push_front(newNode);

    }

    return newNode;
}

void showHuffmanCode(HuffmanTree* tree)
{
    if(tree->isLeaf()){
        cout<< tree->getValue() <<" : " <<tree->getCode()<<endl;;
    }
    else{
        tree->getLeft()->setCode(tree->getCode() + "0");
        showHuffmanCode(tree->getLeft());
        tree->getRigth()->setCode(tree->getCode() + "1");
        showHuffmanCode(tree->getRigth());
    }
}

int main() {

    int* freq = new int[15];
    freq[0] = 0;
    freq[1] = 8;
    freq[2] = 3;
    freq[3] = 5;
    freq[4] = 3;
    freq[5] = 3;
    freq[6] = 2;
    freq[7] = 30;
    freq[8] = 18;
    freq[9] = 4;
    freq[10] = 7;
    freq[11] = 1;
    freq[12] = 6;
    freq[13] = 8;
    freq[14] = 13;

    HuffmanTree* t= GetHuffmanTree(15,freq);

    showHuffmanCode(t);

    return 0;
}

//int* readFileAndBuildInts() {
//    //leer el archivo
//    return new int[5];
//}
//
//int* armarFrecuencias(int* archivo){
//
//    int* prob = new int[256];
//
//    for (int i=0;i<256;i++){
//        prob[i]=0;
//        for (int j=0;j<archivo.size();j++){
//            if (archivo[j]==i){
//                prob[i]++;
//            }
//        }
//    }
//    return prob;
//}

//void armarArbol(int m, int[] occurencies){
//
//}
