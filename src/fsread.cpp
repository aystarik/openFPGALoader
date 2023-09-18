#include "fsparser.hpp"

int main(int argc, char *argv[]) {
	if (argc < 2) {
		return -1;
	}
	FsParser fs(argv[1], true, 1);
	fs.parse();
	return 0;
}
