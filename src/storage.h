#ifndef STORAGE_H_INCLUDED
#define STORAGE_H_INCLUDED

#include <iostream>
#include <list>
#include <string>
#include <fstream>

#include "storageutils.h"

const std::string AppModuleGUID = ".0";
const std::string AppModuleID = "МодульПриложения";

const std::string ConfigLogoGUID = ".1";
const std::string ConfigLogoID   = "Логотип";

const std::string ConfigSplashGUID = ".2";
const std::string ConfigSplashID   = "Заставка";

const std::string ConfigInfoGUID = ".3";
const std::string ConfigInfoID   = "ОписаниеКонфигурации";

const std::string ConfigUnknownGUID = ".4";
const std::string ConfigUnknownID   = "СвойстваКонфигурации";

const std::string AccessModuleGUID = ".5";
const std::string AccessModuleID   = "МодульВнешнегоСоединения";

const std::string CClientModuleExt = ".6";
const std::string CClientModuleID  = "МодульУправляемогоПриложения";

const std::string UserModuleGUID = ".7";
const std::string UserModuleID   = "МодульСеансаПользователя";

const std::string TaskDescktopExt = ".8";
const std::string TaskDescktopId  = "РабочаяОбластьЭкрана";

const std::string TaskSubsystemsExt = ".a";
const std::string TaskSubsystemsId  = "ВсеПодсистемы";

const std::string InterfaceClientAppExt = ".b";
const std::string InterfaceClientAppId  = "ИнтерфейсКлиентскогоПриложения";

const std::string PictureOsnRazdelExt = ".c";
const std::string PictureOsnRazdel    = "КартинкаОсновногоРаздела";

const DWORD COffsetInFileNULL = 0x7fffffff;

const DWORD CsfhSize   = 4 + 4 + 8;     // размер структуры StorageFileHeader 16
const DWORD CdrSize    = 4 + 4 + 4;     // размер структуры DirRecord         12
const DWORD CfhMinSize = 8 + 8 + 4 + 4; // размер структуры FileHeader        24

// Структура заголовка блока цепочки данных во внешнем формате
struct TChainBlockHeader
{
      char sign1[2];
      TOffsetInFileHex DataSize;
      TOffsetInFileHex BlockSize;
      TOffsetInFileHex NextBlock;
      char sign2[2];
};

// Если при укорочении данных освобождается более чем столько данных в последнем
// блоке, то из них формируется новый свободный блок.
//const DWORD CMinFreeSize = High(DWORD) - sizeof(TChainBlockHeader);
const DWORD CMinFreeSize = UINT_MAX - sizeof(TChainBlockHeader);

// Если при укорочении данных освобождается более чем столько данных в последнем
// блоке, то из них формируетмя новый свободный блок.

const DWORD CMinDirFreeSize = UINT_MAX - sizeof(TChainBlockHeader);
// Минимальная длина вновь размещаемого блока для имени файла.

const DWORD CMinHeaderAllocSize = 1;
// Минимальная длина блока для содержимого файла

const DWORD CMinContentAllocSize = 512;
//Минимальная длина блока для каталога

const DWORD CMinDirAllocSize = 512;
// Минимальное количество байт в заголовке файла.

const DWORD CFileHeaderSize = CfhMinSize;
// Размер области, отведенной для залочивания одного атрибута файла.

const DWORD CLockAreaSize = CFileHeaderSize / 5;
// Смещения до области залочивания атрибутов:

const DWORD CLockAreaIn = -CLockAreaSize;

const DWORD CLockAreaOut = -2 * CLockAreaSize;

const DWORD CLockAreaDenyRead = -3 * CLockAreaSize;

const DWORD CLockAreaDenyWrite = -4 * CLockAreaSize;

const DWORD CLockAreaOpen = -5 * CLockAreaSize;
// Маска полного закрытия данного файла от имени данного хоста.

const DWORD CLockOpenMask = 0x1000;


// аттрибуты файла
enum TFileAttributes {faNormal, faReadOnly, faDir, faHidden, faSystem};

// типы исключений при чтении цепочек файла
enum TChainException {ceSuccess, ceEndFile, ceBadSign, ceLoopChain, ceUnknown};


// Структура заголовка блока цепочки данных во внутреннем формате
struct TChainBlockHeaderBin
{
    int BlockOffset;
    int BlockSize;
};

//TChainBlockHeaderBinList = class(TList) содержит указатели на TChainBlockHeaderBin
// если использовать это объявление, надо будет освобождать память
typedef std::list<TChainBlockHeaderBin*> TChainBlockHeaderBinList;

// описание заголовка хранилища
class TStorageFileHeader
{
    public:
        // конструктора
        TStorageFileHeader(DWORD AllocSize);
        TStorageFileHeader(const TStorageFileHeader &FileHeader);
        TStorageFileHeader(std::basic_ifstream<char> &RealFile);
        // деструктора
        virtual ~TStorageFileHeader();
        DWORD GetFreeBlocksChain() const;
        void SetFreeBlocksChain(const DWORD Value); // Смещение до цепочки свободных блоков
        DWORD GetVersion(void) const;
        void SetVersion(DWORD);
        DWORD GetMinAllocSize(void) const;

      //procedure Read(FS: TStream);  - надо думать как это сделать
      //procedure Write(FS: TStream); - надо думать как это сделать.
    private:
      DWORD MinAllocSize;                        // Минимальный размер блока под данные файлов
      DWORD Version;                             // Текущая версия хранилища
      DWORD FreeBlocksChain;

};

class TChainInFile;

// class StorageHeader - Чтение и запись данных в заголовок Storage
class TStorageHeader
{
    public:

        bool TouchDir;                // Содержимое каталога было изменено

        // var Header : TStorageFileHeader; RealFile : TStream; var Directory : TChainInFile; storageSize: integer
        TStorageHeader(TStorageFileHeader Header, std::basic_ifstream<char> &RealFile, TChainInFile Directory, int storageSize);
        virtual ~TStorageHeader();

    protected:

        TStorageFileHeader FpHeader;  // Указатель на текущее значение заголовка
        TStorageFileHeader FOldValue; // Временный буфер под вновь прочитанный заголовок
        //FRealFile : TStream;
    private:

        void SetTouchDir(const bool Value);
};

// описание заголовка файла
class TFileHeader
{
    public:

      //property Created: TDateTime read FCreated write FCreated;
      //property Modified: TDateTime read FModified write FModified;
      //property Attributes: TFileAttrSet read FAttributes;
      //property Name: string read FName write FName;
      //property MinSize: DWORD read GetMinSize;
      TFileHeader();
      virtual ~TFileHeader();

      std::string FName;      // имя файла

      bool Read(TChainInFile chif) const;
      bool Write(TChainInFile chif, DWORD storageSize);

    protected:
    private:
      DWORD FileCreated;      // время создания файла
      DWORD FileModified;     // время последнего изменения файла
      DWORD FileAttributes;      // атрибуты файла

      DWORD GetMinSize(void) const;

};

// дескриптор файла в каталоге
class TDirRecord
{
    public:
        TDirRecord();
        virtual ~TDirRecord();
    private:
        DWORD FHeader;
        DWORD FBody;
        DWORD FLock;
        void CvtAfterRead(void *src);
        bool Read(TChainInFile chif) const;
        bool ReadBuf(TChainInFile chif, void *Buf) const;
        void Write(TChainInFile chif, int storageSize);
        bool cvtToWrite(char *Dst) const;
};

class TChainInFile
{
    public:

        TChainInFile(std::ofstream FS);
        TChainInFile(std::ofstream FS, DWORD AllocSize, TStorageFileHeader SHeader);
        TChainInFile(std::ofstream FS, DWORD StartOffset, DWORD AllocSize, TStorageFileHeader SHeader);
        virtual ~TChainInFile();

        // Настроить класс на начало цепочки. Если в указанном месте нет начала цепочки, то порождается исключение ChainInFileExc
        void Init();

        DWORD Read(void *Buffer, const DWORD Size) const;    // Прочитать блок данных из цепочки
        DWORD Seek(DWORD offset, DWORD StorageSize) const;   // Позиционироваться в цепочке
        bool SetEOF(DWORD offset, DWORD StorageSize) const;  // Изменить длину данных в цепочке (с увеличением или уменьшением)
        DWORD TakeSeek(void) const;                          // Получить текущую позицию
        DWORD TakeOffset(void) const;                        // Получить смещение до начала цепочки
        bool Write(void *Buffer, const DWORD Size, DWORD StorageSize) const;

    protected:
    private:
      DWORD FDataSize;
      TChainBlockHeaderBinList FHeaders;
      DWORD FOffset;
      DWORD FoffsetInBlock;
      int FBlock;
      DWORD FOffsetInFile;
      DWORD FMinAllocSize;
      //FStream: TStream; - надо понять что сюда поставить
      TStorageFileHeader FpHeader;
      void SetMinAllocSize(const DWORD Value);

};

struct TFileInfo
{
    std::string FileName;
    DWORD Body;
};

typedef std::list<TFileInfo*> TFilesMap;

class TStorageReader
{
    public:
        TStorageReader();
        virtual ~TStorageReader();
        std::ofstream GetDataStream(void);
        DWORD GetStorageSize(void) const;
        TChainInFile GetDirChif(void) const;
        std::ofstream GetFile(const std::string FileName);
    protected:
    private:
        TStorageFileHeader Fsfh;
        std::ofstream FDataStream;
        DWORD FStorageSize;
        TChainInFile FDirChif;
        TFilesMap FFilesMap;
        void FillFilesMap(void);
};



class TIntConversions
{
    public:

        static bool TestByteOrder();
        static bool WriteU64(const bool ByteOrder, int Src, int dst);
        static bool WriteU32(const bool ByteOrder, int Src, int dst);
        static bool WriteU16(const bool ByteOrder, int Src, int dst);

        static int ReadU32(const bool ByteOrder, int *Src);
        static int ReadU16(const bool ByteOrder, int *Src);
};

/*

   TIntConversions = class
   public
      { Получить порядок следования байт в слове.
          Результат: true, если старший байт расположен по большему адресу;
                     false, если старший байт расположен по меньшему адресу. }

      class function TestByteOrder: Boolean;

      class function WriteU64(const ByteOrder: Boolean; Src: Int64; var dst: PByte): Boolean;
      class function WriteU32(const ByteOrder: Boolean; Src: DWORD; var Dst: PByte): Boolean;
      class function WriteU16(const ByteOrder: Boolean; Src: WORD; var dst: PByte): Boolean;

      class function ReadU32(const ByteOrder: Boolean; src: Pointer): Integer;
      class function ReadU16(const ByteOrder: Boolean; src: Pointer): Integer;
   end;




*/


#endif // STORAGE_H_INCLUDED
