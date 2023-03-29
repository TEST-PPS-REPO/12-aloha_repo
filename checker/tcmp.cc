#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#define SUCCESS 0
#define WRONG_ANSWER 40

int main() {
    std::vector < std::string > lcpu, lans, cpu, ans;

    auto rn_read = [](std::vector < std::string >& v) -> void {
        std::string s;
        std::getline(std::cin, s, '\n');
        int line = std::stoi(s);

        for (int i = 0; i < line; ++i) {
            std::getline(std::cin, s, '\n');
            v.push_back(s);
        }
    };

    auto rn_tokenizer = [](std::vector < std::string >& v, std::vector < std::string >& w) -> void {
        for (auto& s : v) {
            std::stringstream ss(s);
            std::string t;
            for (; ss >> t; ) {
                if (t.size() == 0) break;
                w.push_back(t);
            }
        }
    };

    rn_read(lcpu); rn_tokenizer(lcpu, cpu);
    rn_read(lans); rn_tokenizer(lans, ans);

    if (cpu.size() != ans.size()) {
        return WRONG_ANSWER;
    }
    for (int i = 0; i < cpu.size(); ++i) {
        if (cpu[i] != ans[i]) {
            return WRONG_ANSWER;
        }
    }
    return SUCCESS;
}