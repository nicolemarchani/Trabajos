#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Pila{
   private:
      vector<T> container;
   public:
      void push(T new_element){
	 container.push_back(new_element);
      }
      void pop(){
	 container.pop_back();
      }
      vector<T> getContainer(){
	 return container;
      }
      Pila<T> operator+ (Pila<T> stack2){
	 Pila<T> stack3;
	 vector<T>vec1(container);
	 vector<T>vec2(stack2.getContainer());
	 for(int i=0;i<vec1.size();i++){
	    stack3.push(vec1[i]);
	 }
	 for(int i=0;i<vec2.size();i++){
	    stack3.push(vec2[i]);
	 }
	 return stack3;
	      
      }
      void imprimir(){
           cout << "La pila es:"<<endl;
           for (vector<int>::iterator it = container.begin(); it != container.end(); it++)
           cout << ' ' << *it<<endl;
           }
};
