#include "filetypes.h"

/*
function StringExtToInt(const Ext : string) : integer;
var
  Num, i : integer;
  tmp : string;
begin
  result := -1;
  tmp := StringReplace(Ext, '.', '', []);
  if Ext = '' then Exit;
  if Length(tmp) > 2 then
    raise Exception.Create('Ошибочный тип расширения: ' + Ext);
  Result := 0;
  for i := Length(tmp) downto 1 do
  begin
    case UpperCase(tmp)[i] of
      '0'..'9':  Num := Ord(UpperCase(tmp)[i]) - Ord('0');
      'A'..'F':  Num := Ord(UpperCase(tmp)[i]) - Ord('A') + 10;
    else
      raise Exception.Create('Запрещенный символ в расширении файла: ' + Ext);
    end;
    Result := Result + 16 * (i - 1) + Num;
  end;
end;

*/
int StringExtToInt(const char* ext)
{
    return 0;
}
