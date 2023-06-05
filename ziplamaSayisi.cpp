#include <iostream>
#include <vector>

class Solution {
public:
    int jump( std::vector<int>& nums ) {

        int ziplama = 0;
        int uzunluk = nums.size();
        int enBuyukSayi = 0;
        int sonIndeks = -1;
        int geciciIndeks = 0;

        for ( int i = 0 ; i < uzunluk - 1 ; i++ ) {

            i = geciciIndeks;

            if ( nums[i] + i >= uzunluk - 1 ){

                if ( sonIndeks != i ) ziplama++;
                return ziplama;
            
            }

            else {

                for ( int j = i ; j <= i + nums[i] ; j++ ) {

                    if ( j >= uzunluk - 1 ) break;

                    if ( nums[j] + j > enBuyukSayi ) {

                        enBuyukSayi = nums[j] + j;
                        if ( sonIndeks != i ) ziplama++;
                        sonIndeks = i;
                        geciciIndeks = j;

                        if ( nums[j] + j >= uzunluk - 1 ){

                            if ( sonIndeks != i ) ziplama++;
                            return ++ziplama;
                        
                        }

                    }

                }

            }

        }

        return ziplama;
        
    }
};

int main ( void ) {

    Solution sol;

    std::vector<int> nums = {1,1,1,1};
    int cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 3" << "\n\n\n";

    nums = {2,3,0,1,4};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 2"<< "\n\n\n";

    nums = {2,3,1,1,4};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 2"<< "\n\n\n";

    nums = {2,1,1,1,1};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 3"<< "\n\n\n";

    nums = {1,2,0,1};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 2"<< "\n\n\n";

    nums = {1,1,1,1,1};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 4"<< "\n\n\n";

    nums = {4,1,1,3,1,1,1};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 2"<< "\n\n\n";

    nums = {10,9,8,7,6,5,4,3,2,1,1,0};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 2"<< "\n\n\n";

    nums = {1,2};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 1"<< "\n\n\n";

    nums = {7,0,9,6,9,6,1,7,9,0,1,2,9,0,3};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 2"<< "\n\n\n";

    nums = {5,4,0,1,3,6,8,0,9,4,9,1,8,7,4,8};
    cevap = sol.jump(nums);
    std::cout << '\n' << "Cevap: " << cevap << " Beklenen: 3"<< "\n\n\n";

    return 0;

}