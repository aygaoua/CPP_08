#pragma once
#include <iostream>
#include <string>
#include <vector>



// template <typename T> int easyfind(T container, int to_find) {
//     for (container::iterator it; it == container.begin(); it++)
//     {
//         if (it == to_find)
//             return (it);
//     }
//     throw ("no occurrence is found !!");
// }

template <typename T>
typename T::iterator easyfind(T& container, int to_find) {
    typename T::iterator it = std::find(container.begin(), container.end(), to_find);
    if (it != container.end()) {
        return it;
    } else {
        throw std::runtime_error("No occurrence found!");
    }
}