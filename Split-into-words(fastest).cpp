#include <string_view>

vector<string_view> SplitIntoWordsView(const string& str) {
    vector<string_view> result;
    auto pos = str.find_first_not_of(" ");
    const auto pos_end = str.npos;
  
    while (pos != pos_end) {
        auto space = str.find(' ', pos);
        result.push_back(space == pos_end ? str.substr(pos) : str.substr(pos, space - pos));
        pos = str.find_first_not_of(" ", space);
    }
    return result;
}
