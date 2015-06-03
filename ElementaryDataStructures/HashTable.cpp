#include "HashTable.h"

HashTable::HashTable()
{
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		entries[i].inUse = false;
	}
}

int HashTable::hashString(const string& value)
{
	int hashValue = 0;
	for (int i = 0; i < value.length(); i++)
	{
		hashValue += value[i];
	}

	return hashValue;
}

Entry* HashTable::lookup(const string& value)
{
	int hash = hashString(value);
	int offset = hash%TABLE_SIZE;
	int step = (hash / TABLE_SIZE) % TABLE_SIZE;
	step |= 1;

	for (int i = 0; i < TABLE_SIZE; i++)
	{
		Entry* e = &entries[offset];
		if (!e->inUse)
		{
			return e;
		}

		if (e->value==value)
		{
			return e;
		}

		offset = (offset + step) % TABLE_SIZE;
	}

	return NULL;
}

bool HashTable::containsEntry(const string& value)
{
	Entry* entry = lookup(value);

	return entry != NULL && entry->inUse;
}

void HashTable::addEntry(const string& value)
{
	Entry* entry = lookup(value);

	if (entry != NULL && !entry->inUse)
	{
		entry->inUse = true;
		entry->value = value;
	}
}