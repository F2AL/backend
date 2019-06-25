#ifndef COMP_EDGEARRAY_H
#define COMP_EDGEARRAY_H
#include "../common/CommonLibs.hpp"

#define CAPACITY_VALUE 8

class EdgeArray {
private:
    vertexid_t *edges;
    label_t *labels;
    int size;
    int capacity;
    int realNumEdges; // exclude duplicate edges

public:
    EdgeArray();
    EdgeArray(int size,vertexid_t *edges,label_t *labels);
    ~EdgeArray(){}
    void clear();

    inline int getRealNumEdges() {return realNumEdges;}
    inline vertexid_t *getEdges() const{return edges;}
    inline label_t* getLabels() const{return labels;}
    inline int getSize() const{return size;}

    void set(int size,vertexid_t *edges,label_t *labels);

    void addOneEdge(vertexid_t edge, label_t label);

    //void print();
};

#endif
