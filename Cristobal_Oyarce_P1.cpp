#include <iostream>

using namespace std;

class conjuntoTDA:public setTDA {
public:
    void agrega(data x){
        insert(x);
    }

    data saca(){
        return delete();
    }

    bool estavacio(){
        return isempty();
    }

    bool pertenece(data x){
        bool P = false;
        conjuntoTDA aux;
        data comp;
        int datos=0;

        while(!estavacio()){
            datos++;
            comp = TDA.saca();
            if(comp == x){
                P = true;
                aux.agrega(comp);
                break;
            }
            aux.agrega(comp);
        }
        for(int i=0 ; i < datos ; i++){
            TDA.agrega(aux.saca());
        }
        return P;
    }
};