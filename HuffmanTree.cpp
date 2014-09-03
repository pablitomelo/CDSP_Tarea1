#include "HuffmanTree.h"

HuffmanTree::HuffmanTree(){

}

HuffmanTree::HuffmanTree(int val,int fr){
    value = val;
    freq = fr;
    code="";
    left= NULL;
    rigth=NULL;
}

int HuffmanTree::getFreq(){
    return freq;
}

void HuffmanTree::setFreq(int fr){
    freq = fr;
}

void HuffmanTree::setRight(HuffmanTree* rigthTree)
{
    rigth =rigthTree;
}

void HuffmanTree::setLeft(HuffmanTree* leftTree)
{
    left = leftTree;
}

bool HuffmanTree::isLeaf(){
    return (left== NULL and rigth==NULL);
}

int HuffmanTree::getValue(){
    return value;
}

string HuffmanTree::getCode(){
    return code;
}

void HuffmanTree::setValue(int val){
    value = val;
}

void HuffmanTree::setCode(string cod){
    code = cod;
}

HuffmanTree* HuffmanTree::getLeft(){
    return left;
}

HuffmanTree* HuffmanTree::getRigth(){
    return rigth;
}

HuffmanTree::~HuffmanTree()
{

}

