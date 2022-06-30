 #pragma once
#include <list>
#include "Graph.h"
namespace graph
{
struct AList;                        
struct AMatrix  // ������� ��������� 
 {
     int nV;                  // ���������� ������ 
     int  *mr;                       // �������  
     AMatrix(int n, int mr[]);       // ������� ������� n*n �	
     AMatrix(const AList& al);       // ������� ������� �� ���������� 
     void set(int i, int j, int r);  // �������� mr[i,j] = r
     int  get(int i, int j)const;    // ������� mr[i,j] 
};

struct AList  // ������ ��������� 
 {
     int nV;                 // ���������� ������ 
     std::list<int> *mr;            // ������ �������
     void create(int n);            // ������� ������ ������ �������
     AList(int n, int mr[]);        // ������� ��������� �������������	 
     AList(const AMatrix& am);      // ������� ��������� �������������  
     void add(int i, int j);        // �������� � i-�� ������
     int  size(int i) const;        // ������ i-�� ������  
     int  get(int i, int j)const;   // j-��  ������� i-�� ������ 
 };

};
#pragma once
