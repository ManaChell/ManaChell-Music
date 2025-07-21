#include<cmio.h>
struct str:string
{
	using string::string;
	vector<str> block;
	operator const char* () const
	{
		return c_str();
	}
	int cunt(char input)
	{
		return count(begin(), end(), input);
	}
	vector<str> split(const char* input)
	{
		vector<str> output;
		char* copys = new char[this->length() + 1];
		strcpy(copys, this->c_str());
		char* cache = strtok(copys, input);
		str cacheA;
		while (cache != NULL)
		{
			cacheA = cache;
			output.push_back(cacheA);
			cache = strtok(NULL, input);
		}
		delete[]copys;
		return output;
	}
	void splitA(const char* input)
	{
		vector<str>().swap(block);
		char* copys = new char[this->length() + 1];
		strcpy(copys, this->c_str());
		char* cache = strtok(copys, input);
		str cacheA;
		while (cache != NULL)
		{
			cacheA = cache;
			block.push_back(cacheA);
			cache = strtok(NULL, input);
		}
		delete[]copys;
	}
	void remove(const char* input,int i)
	{
		splitA(input);
		block.erase(block.begin() + i);
		str cache;
		for (int k = 0; k < block.size(); k++)
		{
			cache += block[k] + input;
		}
		*this = cache;
	}
};
int main()
{

}