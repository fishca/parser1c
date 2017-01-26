#ifndef FOLDERS_H_INCLUDED
#define FOLDERS_H_INCLUDED

#define MaxRNames 5

#include <iostream>
#include <string>



struct TReplaceNames  // Структура заменяемых имен файлов/каталогов;
{
    std::string OldName;
    std::string NewName;
};

enum CodePage {UNKNOWN, UTF8, ANSI};

const std::string DefDataExt     = ".defd";
const std::string DefPropExt     = ".defp";
const std::string DefPropGUID    = "ae135932-4f94-44df-92c1-c91f15a92848";
const std::string MoxcelFolderID = "МAКЕТ"; //ВНИМАНИЕ! латинские буквы в константы вставлены для
const std::string FormFolderID   = "ФОPМА";  //устранения дублирования последнего каталога при совпадении с именем файла

TReplaceNames RNames[MaxRNames] =
{
      {"text.txt",   "МодульОбъекта.txt"},
      {"module.txt", "МодульФормы.txt"},
      {"form.txt",   "ФормаОбъекта.form"},
      {"info.txt",   "ОписательОбъекта.info"},
      {"image",      "ОбразМодуля.txt"}

};

/*  НАДО РЕАЛИЗОВЫВАТЬ !!!!!!!!!!!!!!!
   TDecompileFolder = class
   private
      ExtractPath: string; // Путь разложения
      FParserData: TParserData;
      function DetectFullPathForFile(FileName, LastFolder, FileExt: string): string;
      function FindParentDir(CurPath, CurDir: string; Level: Integer): string;
   public
      property ParserData: TParserData read FParserData;
      //function DetectCodePage(const Data: Pointer): string;
      function DetectCodePage(const Data: Pointer; DataSize: Integer): string;
      function DetectFullPath(FileName, strGUID: string; isFolder: Boolean): string;
      function GetParserFileName(const FileName, LastFolder, FileExt: string): string;
      procedure SaveFileToParserData(FileName, strGUID, Directory: string; const CodePage: string);
      function SaveParserData: Boolean;

      constructor Create(ExPath: string);
      destructor Destroy; override;
   end;




*/


#endif // FOLDERS_H_INCLUDED
