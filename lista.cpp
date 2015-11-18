#include <vector>
 using namespace std;
 template<typename T>
 class Lista{
 private:
    vector<T>container;
 public:
    void Añadir(T item){
        container.push_back();
    }
    void Borrar(int position){
        container.erase(container.begin()+position);
    }
    /*void Insert_(T item, long long int position){
        container.insert(container.begin()+position, item);
    }*/
    int Size(){
        return container.size();
    }
    vector<T>getContainer(){
        return container;    
    }
    Lista<T> operator+(Lista<T> listb){
        vector<T>vec(listb.getContainer());
        Lista<T>list3;
        for(int i=0;i<container.size();++i){
            list3.Añadir(container[i]);
        }
        for(int i=0;i<vec.size();++i){
            list3.Añadir(vec[i]);
        }
        return list3;
    }
 };
