#ifndef STORAGEUTILS_H_INCLUDED
#define STORAGEUTILS_H_INCLUDED

#include <iostream>
#include <list>
#include <string>
#include <cstdlib>

//const std::string Separator = "==";

typedef uint32_t UINT;
typedef uint32_t DWORD;
typedef uint32_t ULONG;
typedef uint64_t ULONGLONG;


const char CHexDig2Val[128] =
   {
       //.........TN..R..
       16,16,16,16, 16,16,16,16, 16,16,16,16, 16,16,16,16,
       //................
       16,16,16,16, 16,16,16,16, 16,16,16,16, 16,16,16,16,
       // !"#$%&'()*+,-./
       16,16,16,16, 16,16,16,16, 16,16,16,16, 16,16,16,16,
       //0123456789:;<=>?
        0, 1, 2, 3,  4, 5, 6, 7,  8, 9,16,16, 16,16,16,16,
       //@ABCDEFGHIJKLMNO
       16,10,11,12, 13,14,15,16, 16,16,16,16, 16,16,16,16,
       //PQRSTUVWXYZ[\]^_
       16,16,16,16, 16,16,16,16, 16,16,16,16, 16,16,16,16,
       //`abcdefghijklmno
       16,10,11,12, 13,14,15,16, 16,16,16,16, 16,16,16,16,
       //pqrstuvwxyz
       16,16,16,16, 16,16,16,16, 16,16,16,16, 16,16,16,16
};

typedef char TOffsetInFile[9];
typedef char TOffsetInFileHex[10];

/*
function  OIFHex2Bin(const hex : array of char; var bin : DWORD) : Boolean;
procedure OIFBin2Hex(const bin : DWORD; var hex : TOffsetInFileHex);
function  SubStr(const S: string; const index: integer; const Separator: string): string;
function  GetSymbolCount(S: string; Sym: Char): Integer;
*/

int is_valid_hex(const char *hex, unsigned int size);
unsigned int char2int_(char chr);
int hex2dec_(const char *hex, int size);
const std::string SubStr(const std::string S, const int index, const std::string Separator);
int GetSymbolCount(const std::string S, const char Sym);

// std::string str;
// str.size(); - длина строки
// str.length(); - длина строки
// str.empty(); - пуста€ ли строка, возвращаетс€ bool
// if (str == str2) - совпадают ли строки
// str.c_str() - возвращает символьный массив char *hex
// str.at(7) или str[7] - отдельный символ строки
//
// str.substr(pos, n); - функци€, котора€ возвращает строку,
// €вл€ющуюс€ подстрокой исходной строки, начина€ с позиции pos и включа€ n символов, или до конца строки
// size_type find_first_of( const basic_string& str, size_type pos = 0 ) const;

#endif // STORAGEUTILS_H_INCLUDED
