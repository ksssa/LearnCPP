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
    Type Front();
    void Push( Type t );
    void Pop();
    uint8_t Size();

private:
    list< Type > l;
    uint8_t      size;
};

}  // namespace LearnCpp