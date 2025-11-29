#include "sha256.h"

std::string sha256(const std::string& s) {
	unsigned char hash[SHA256_DIGEST_LENGTH];
	SHA256((unsigned char*)s.c_str(), s.size(), hash);

	std::stringstream ss;
	for (unsigned char c : hash) {
		ss << std::hex << std::setw(2)
			<< std::setfill('0') << (int)c;
	}
	return ss.str();
}