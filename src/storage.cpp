#include "storage.h"

// конструктора
TStorageFileHeader::TStorageFileHeader(DWORD AllocSize)
{
  FreeBlocksChain = COffsetInFileNULL;
  MinAllocSize    = AllocSize;
  Version         = 0;
}

TStorageFileHeader::TStorageFileHeader(const TStorageFileHeader &FileHeader)
{
  FreeBlocksChain = FileHeader->FreeBlocksChain;
  MinAllocSize    = FileHeader->MinAllocSize;
  Version         = FileHeader->Version;
}

TStorageFileHeader::TStorageFileHeader(std::basic_ifstream<char> &RealFile)
{

}

