std::vector<std::string> SplitString(std::string& str,std::string delimiter)
{
	std::vector<std::string> result;
	if (str.empty())
		return result;

	size_t start = 0;
	while (start != std::basic_string<char>::npos) {
		size_t end = str.find_first_of(delimiter, start);

		std::string piece;
		if (end == std::basic_string<char>::npos) {
			piece = str.substr(start);
			start = std::basic_string<char>::npos;
		}
		else {
			piece = str.substr(start, end - start);
			start = end + 1;
		}
		result.emplace_back(piece);
	}
	return result;
}