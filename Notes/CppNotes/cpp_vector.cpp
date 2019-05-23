#include <vector>


typedef Union Data{
    uint64_t bit_64;
    uint32_t bit_32[2];
};


int main(){
    std::vector<int> V;
    for(int i = 0; i < 10; i++){
        V.push_back(i);
    }

    for(std::vector<int>iterator it = V.begin(); it != V.end(); it++){
        std::cout << *it; 
    } 

    // Unions


}
