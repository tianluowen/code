// date: 2020-03-25
// desc: variadic templates (since C++11)

#include <iostream>
#include <functional>

template<typename T>
inline void bash_combine(size_t& seed, const T& val)
{
    seed ^= std::hash<T>()(val) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}

// auxiliary generic functions
template <typename T>
inline void hash_val(size_t& seed, const T& val)
{
    hash_combine(seed, val);
}

template<typename T, typename... Types>
inline void bash_val(size_t& seed, const T& val, const Types&... args)
{
    bash_combine(seed, args...);
    bash_val(seed, args...);
}

// auxiliary generic function
template <typename... Types>
inline size_t bash_val(const Types&... args)
{
    size_t seed = 0;
    bash_val(seed, args...);

    return seed;
}
 
class CustomerHash{
public:
    std::size_t operator()(const Customer& c) const
    {
        return hash_val(c.fname, c.lname, c.no);
    }
};

int main(void)
{
    std::cout << std::endl;

    return 0;
}
