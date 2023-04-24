#include <cstring>
#include <string>
#include <iostream>

class convert{

public:
    int result = 0;
    int convert(){
    for (int i = 0; i < length; i++)
	{
        if(char_array[i] = 'I')
           result += 1;
        else if(char_array[i] = 'V')
           result += 5;
        else if(char_array[i] = 'X')
           result += 10;
        else if(char_array[i] = 'L')
           result += 50;
        else if(char_array[i] = 'C')
           result += 100;
        else if(char_array[i] = 'D')
           result += 500;
        else if(char_array[i] = 'M')
           result += 1000;

		std::cout << result;
	}
    }


};


int main()
{
	std::string s = "LVIII";

	const int length = s.length();

	char* char_array = new char[length + 1];


	strcpy(char_array, s.c_str());

	for (int i = 0; i < length; i++)
	{
		std::cout << char_array[i];
	}

    convert.obj->convert();
	return 0;
}
