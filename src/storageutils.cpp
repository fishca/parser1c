#include <iostream>
#include <string>
#include "storageutils.h"

// ѕроверка строки на соответствию формата дес€тичного числа
int is_valid_hex(const char *hex, unsigned int size)
{
    for (int i = 0; i < size; ++i)
        if (!((hex[i] >= '0' && hex[i] <= '9')
               || (hex[i] >= 'a' && hex[i] <= 'z')
               || (hex[i] >= 'A' && hex[i] <= 'z'))
                )
            return 0;
    return 1;
}

// ѕреобразование шестнадцатеричного символа в дес€тичное число
unsigned int char2int_(char chr)
{
    if (chr >= '0' && chr <= '9')
        return chr - '0';
    else if (chr >= 'A' && chr <= 'F')
        return chr - 'A' + 10;
    else if (chr >= 'a' && chr <= 'f')
        return chr - 'a' + 10;
    return -1;
}

// ѕриведение строкового значени€ шестнадцатеричного
// числа к дес€тичному виду
int hex2dec_(const char *hex, int size)
{
    // »значальное дес€тичное значение
    int dec = 0;
    // Ќепосредственно преобразование шестнадцатеричного числа
    // в дес€тичное. ѕруфлинк: http://vestikinc.narod.ru/AB/hex_dec_tr.htm
    for (int j = 0, i = size - 1; j < size; ++j, --i) {
        dec += char2int_(hex[j]) * pow_(16, i);
    }
    // ¬озвращаем дес€тичное число
    return dec;
}

/*
int PosEx(const std::string subString, const std::string str, int offset)
{
    if (subString == "" || str == "" || offset < 1)
        return 0;

    if (offset == 1)
        return Pos(subString,str);

    int subStringLength = subString.Length();

    int segmentStringLength = str.Length() - subStringLength+1;

    for (; offset <= segmentStringLength; offset++)
        if (str[offset] == subString[1]) {
            int i = 1;
            for (; i < subStringLength && str[offset + i] == subString[1+i]; i++) {}
            if (i == subStringLength)
                return offset;
        }
    return 0;
}
*/


const std::string SubStr(const std::string S, const int index, const std::string Separator)
{
    std::string Result;
    int i, FieldCnt;
    std::string Field;
    std::size_t j;

    Result = "";
    Field = S;
    FieldCnt = -1;
    i = 1;

    j = S.find_first_of(Separator, i);

    while (j > 0)
    {
        FieldCnt++;
        if (FieldCnt == index)
        {
          Field = S.substr(i, j - 1);
          break;
        }
        i = j + Separator.length();
        j := S.find_first_of(Separator, i);
    }

    if (FieldCnt + 1 == index)
       Field = S.substr(i, S.length());

    Result = Fiel;

    return Result;
}

int GetSymbolCount(const std::string S, const char Sym)
{
    int count_sym;

    for (int i = 0; i < S.length() ; i++)
    {
        if (S[i] == Sym)
            count_sym++;
    }
    return count_sym;
}
