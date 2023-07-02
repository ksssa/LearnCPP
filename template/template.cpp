#include <list>
#include <stdint.h>

using std::list;

namespace LearnCpp {

template < class Type > class TStack {
public:
    TStack();
    ~TStack() = delete;
    void Pop();
    Type Top();
    void Push( Type t );

private:
    list< Type > s;
    uint8_t      size;
};

template < class Type > class TQueue {
public:
    TQueue();
    ~TQueue = delete;
    Type    Front();
    void    Push( Type t );
    void    Pop();
    uint8_t Size();

private:
    list< Type > l;
    uint8_t      size;
};

template < class Type > TStack< Type >::TStack() {
    size = 0;
    s.clear();
}
template < class Type > Type TStack< Type >::Top() {
    return s.front();
}
template < class Type > void TStack< Type >::Pop() {
    s.erase( s.begin() );
    size--;
}
template < class Type > void TStack< class Type >::Push( Type t ) {
    s.push_front( t );
    size++;
}

template < class Type > TQueue< Type >::TQueue() {
    l.clear() size = 0;
}
template < class Type > Type TQueue< Type >::Front() {
    return l.front();
}
template < class Type > void TQueue< Type >::Push( Type t ) {
    l.push_back( t );
}
template < class Type > void TQueue< Type >::Pop() {
    if ( size > 0 )
        l.erase( l.begin() );
}
template < class Type > uint8_t TQueue< Type >::Size() {
    return size
}

}  // namespace LearnCpp