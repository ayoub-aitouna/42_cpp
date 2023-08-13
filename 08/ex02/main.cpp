#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main()
{
    std::cout << "----------------------- Using MutantStack ----------------------- " << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << "----------------------- Using List ----------------------- " << std::endl;
    {
        std::list<int> m_list;
        m_list.push_back(5);
        m_list.push_back(17);
        std::cout << m_list.back() << std::endl;
        m_list.pop_back();
        std::cout << m_list.size() << std::endl;
        m_list.push_back(3);
        m_list.push_back(5);
        m_list.push_back(737);
        //[...]
        m_list.push_back(0);
        std::list<int>::iterator it = m_list.begin();
        std::list<int>::iterator ite = m_list.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(m_list);
    }
    return 0;
}
