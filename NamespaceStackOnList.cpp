#include <iostream>
#include <list>
#include <cassert>

namespace andre{

  template <int N, typename T>
  class stack
  {
    public:
      static int const max_size = N;
      typedef T value_type;
      
     private:
      value_type arr[max_size];
      value_type top;
      
     public:
      stack()
      {
        top = -1;
      }
      
      void Push (const value_type value)
      {
        if(top >= (N -1))
          std::cerr << "Stack overflow!" << std::endl;
        else
        {
          ++top;
          arr[top] = value;
        }
      }
      
      void Pop ()
      {
        if(top <= -1)
          std::cerr << "Stack underflow!" << std::endl;
        else
          --top;
      }
      
      value_type & Top ()
      {
        assert(top >= 0);
        return arr[top];
      }
      
      value_type Top () const
      {
        assert(top >= 0);
        return arr[top];
      }
      
      void Clear ()
      {
        top = -1;
      }
      
      std::size_t size() const
      {
        return (top +1);
      }
      
      bool isEmpty() const
      {
        if(top != -1)
          return false;
        else
          return true;
      }
      
      bool isFull() const
      {
        return N == size ? true : false;
      }
      
 #ifndef NDEBUG
      
  }
};
//namespace
