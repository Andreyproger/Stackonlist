#include <iostream>
#include <list>
#include <cassert>
#include "NamespaceStackOnList.cpp"

void test_0 ()
{
  typedef andre::stack <10, int> stack_t;
  stack_t st;
  assert(st.isEmpty());
  assert(st.size() == 0);
}

void test_1 ()
{
  typedef andre::stack <10, int> stack_t;
  stack_t st;
  
  for(int i = 0; i < stack_t::max_size; i++)
    st.Push(i);
    
  assert(!st.Empty());
  assert(st.isFull());
  assert(st.size() == st.max_size());
}

void test_2 ()
{
  typedef andre::stack <10, int> stack_t;
  stack_t st;
  
  for(int i = 0; i < stack_t::max_size; i++)
    st.Push(i);
  assert(st.isFull());
  
  for(int i = 0; i < stack_t::max_size; i++)
    st.Pop();
  
  assert(st.size() == 0);
  
}
