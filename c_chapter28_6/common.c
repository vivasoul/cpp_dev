#include "common.h"
void initString(char* _str, size_t _len)
{
	int s;
	for(s=0;s<_len;s++)
	{
		_str[s] = '\0';
	}
}

void fgets_ex(char* _buf, int _maxCnt, FILE* _stream)
{
	fgets(_buf, _maxCnt, _stream);
	_buf[strlen(_buf)-1] = '\0';
	fflush(_stream);	
}
