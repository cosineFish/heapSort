#ifndef __HEAP_HPP
#define __HEAP_HPP
#include <iostream>
class heap{
    public:
    	//������ݳ�Ա 
        float* array;
        int length;
        int layer;//int layer=0;//�������в����������������ݳ�Ա���г�ʼ�� 
        //��ĳ�Ա���� 
        heap(float *A,int n);//���캯�� 
        inline int PARENT(int i){return i/2;}//�����������Կռ任ʱ�䣬ֱ�Ӳ��뵽���ô� 
        inline int LEFT(int i){return 2*i;}
        inline int RIGHT(int i){return 2*i+1;}
        void max_heap(int i);
        void build_max_heap();
        void printheap();
};//}//Ҫ�зֺ� 
#endif
