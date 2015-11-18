#include <iostream>
#include <vector>
#include <deque>
using namespace std;

template<typename T>
class Cola{
   public:
      deque<T> container;
   
      void push(T new_element){
	 container.push_back(new_element);
      }
      void Pop(){
        container.pop_front();   
    }
   
      vector<T> getContainer(){
	 return container;
     } 
     /*
     Cola<T> operator+(Cola<T>cola1,Cola<T>cola2){
        deque<T>cola10(cola1.getContainer);
        deque<T>cola20(cola2.getContainer);
        Cola<T> cola3;
        for(int i=0;i<cola10.size();++i){
            cola3.push(cola10[i]);
        }
        for( int i=0;i<cola20.size();++i){
            cola3.push(cola20[i]);
        }
        return cola3;
    }*/
    
      void imprimir(){
           cout << "La cola es:"<<endl;
           for (deque<int>::iterator it = container.begin(); it != container.end(); it++)
           cout << ' ' << *it<< " " ;
           }
};
