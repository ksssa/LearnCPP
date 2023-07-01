#include "template.h"

namespace LearnCpp {
template < class Type > TStack< Type >::TStack() {}
template < class Type > Type TStack< Type >::Top() {
    return s.front();
}
template < class Type > void TStack< Type >::Pop() {
    s.erase( s.begin() );
}
template < class Type > void TStack< class Type >::Push( Type t ) {
    s.push_front( t );
}

template < class Type > TQueue< Type >::TQueue() {}
template < class Type > Type    TQueue< Type >::Front() {}
template < class Type > void    TQueue< Type >::Push( Type t ) {}
template < class Type > void    TQueue< Type >::Pop() {}
template < class Type > uint8_t TQueue< Type >::Size() {
    return size
}

}  // namespace LearnCpp