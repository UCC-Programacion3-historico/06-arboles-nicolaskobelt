#ifndef HASHENTRY_H
#define HASHENTRY_H

template<class T>
class NodoArbol {
private:

    NodoArbol * izq;
    NodoArbol * der;
    T dato;

public:
    void put(T d);
    void put(NodoArbol *nodo);
    T search(T d);
    void remover(T d);

//    void print(bool esDerecho, string identacion) {
//        if (der != NULL) {
//            der->print(true, identacion + (esDerecho ? "     " : "|    "));
//        }
//        cout << identacion;
//        if (esDerecho) {
//            cout << " /";
//        } else {
//            cout << " \\";
//        }
//        cout << "-- ";
//        cout << dato << endl;
//        if (izq != NULL) {
//            izq->print(false, identacion + (esDerecho ? "|    " : "     "));
//        }
//    }
};

template <class T>
void NodoArbol::put(T d) {

    if (dato == d)
        throw 1;

    if (d < dato){ //izquierda
        if (izq == NULL)
        izq = new NodoArbol(d);
        else
            izq->put(d);

    }else{ //derecha

        if (der == NULL)
            der = new NodoArbol(d);
        else
            der->put(d);

    }
}

template <class T>
T NodoArbol::search(T d) {

    if (d == dato)
        return dato;

    else if (d < dato){
        if (izq == NULL )
            throw 3;
        else
            izq->search(d);

    }else{
        if (der == NULL)
            throw 3;
        else
            der->search(d);
    }
}

template <class T>
void NodoArbol::remover(T d) {

    if (d == dato)
        return dato;

    else if (d < dato){
        if (izq == NULL )
            throw 3;
        else
            izq->remover(d);

    }else{
        if (der == NULL)
            throw 3;
        else
            der->remover(d);
    }
}

#endif //HASHENTRY_H