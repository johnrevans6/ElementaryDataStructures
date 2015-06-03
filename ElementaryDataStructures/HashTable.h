#include <string>
using namespace std;
#ifndef HASH_TABLE
#define HASH_TABLE
#define TABLE_SIZE 256

struct Entry
{
	bool inUse;
	string value;
};


class HashTable
{
public:
	HashTable();

	Entry* lookup(const string& value);
	bool containsEntry(const string& value);
	void addEntry(const string& value);
	int hashString(const string& value);

private:
	Entry entries[TABLE_SIZE];
};


#endif