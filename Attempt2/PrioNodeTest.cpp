#include <string>
#include <iostream>
#include "PriorityNode.hpp"

int main()
{
    Huffman::PriorityNode nodei = Huffman::PriorityNode("h", 2);
    Huffman::PriorityNode nodeii = Huffman::PriorityNode("m", 3);
    Huffman::PriorityNode nodeiii = combine(nodei, nodeii);
    std::cout << nodei << std::endl;
    std::cout << nodeii << std::endl;
    std::cout << nodeiii << std::endl;
}