﻿unit uResourceFormToGo;

{$IFDEF FPC}
  {$mode objfpc}{$H+}
{$ENDIF}

interface

 procedure ConvertAll;
 procedure WriteHelp;
implementation

uses
{$IFDEF WINDOWS}
  Windows,
{$ENDIF}
  Classes, SysUtils, Math, StrUtils, uFormDesignerFile;


const
  APPVERSION = '1.0.4';

type
  TComponentItem = record
    Name: string;
    ClassName: string;
  end;
  PComponentItem = ^TComponentItem;

  TEventItem = record
    Name: string;
    RealName: string;
  end;

  TEventType = record
    Name: string;
    ImportTypePkg: Boolean;
    Params: string;
  end;
  PEventType = ^TEventType;

  { TStringStreamHelper }
{$IFDEF FPC}
  TStringStreamHelper = class Helper for TStringStream
  public
    procedure LoadFromFile(const AFileName: string);
    procedure SaveToFile(const AFileName: string);
    procedure Clear;
  end;
{$ENDIF}


const
  // 事件
  {
     还要确定独有事件的处理
     先不管了，
  }
  // 特殊
  CommonEventType: array[0..41] of TEventType = (
    (Name: 'Create'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'Destroy'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'Show'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'Hide'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'Activate'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'Deactivate'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'CloseQuery'; ImportTypePkg: False; Params: 'sender vcl.IObject, canClose *bool'),
    (Name: 'ConstrainedResize'; ImportTypePkg: False; Params: 'sender vcl.IObject, minWidth, minHeight, maxWidth, maxHeight *int32'),
    (Name: 'DropFiles'; ImportTypePkg: False; Params: 'sender vcl.IObject, aFileNames []string'),
    (Name: 'FormClose'; ImportTypePkg: True; Params: 'sender vcl.IObject, action *types.TCloseAction'),

    (Name: 'Execute'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'Update'; ImportTypePkg: False; Params: 'sender vcl.IObject'),

    (Name: 'Click'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'DblClick'; ImportTypePkg: False; Params: 'sender vcl.IObject'),

    (Name: 'Change'; ImportTypePkg: False; Params: 'sender vcl.IObject'),

    (Name: 'Timer'; ImportTypePkg: False; Params: 'sender vcl.IObject'),


   // (ClassC: TCustomComboBox; Name: 'Change'; Params: 'sender vcl.IObject'),

    (Name: 'MouseDown'; ImportTypePkg: True; Params: 'sender vcl.IObject, button types.TMouseButton, shift types.TShiftState, x, y int32'),
    (Name: 'MouseUp'; ImportTypePkg: True; Params: 'sender vcl.IObject, button types.TMouseButton, shift types.TShiftState, x, y int32'),
    (Name: 'MouseMove'; ImportTypePkg: True; Params: 'sender vcl.IObject, shift types.TShiftState, x, y int32'),
    (Name: 'MouseWheel'; ImportTypePkg: True; Params: 'sender vcl.IObject, shift types.TShiftState, wheelDelta, x, y int32, handled *bool'),
    (Name: 'MouseWheelDown'; ImportTypePkg: True; Params: 'sender vcl.IObject, shift types.TShiftState, mousePos types.TPoint, handled *bool'),
    (Name: 'MouseWheelUp'; ImportTypePkg: True; Params: 'sender vcl.IObject, shift types.TShiftState, mousePos types.TPoint, handled *bool'),


    (Name: 'Resize'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'Paint'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'MouseEnter'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'MouseLeave'; ImportTypePkg: False; Params: 'sender vcl.IObject'),

    (Name: 'KeyDown'; ImportTypePkg: True; Params: 'sender vcl.IObject, key *types.Char, shift types.TShiftState'),
    (Name: 'KeyUp'; ImportTypePkg: True; Params: 'sender vcl.IObject, key *types.Char, shift types.TShiftState'),
    (Name: 'KeyPress'; ImportTypePkg: True; Params: 'sender vcl.IObject, key *types.Char'),

    (Name: 'ContextPopup'; ImportTypePkg: True; Params: 'sender vcl.IObject, mousePos types.TPoint, handled *bool'),
    (Name: 'DragOver'; ImportTypePkg: True; Params: 'sender, source vcl.IObject, x, y int32, state types.TDragState, accept *bool'),
    (Name: 'DragDrop'; ImportTypePkg: False; Params: 'sender, source vcl.IObject, x, y int32'),
    (Name: 'StartDrag'; ImportTypePkg: False; Params: 'sender vcl.IObject, dragObject *vcl.TDragObject'),
    (Name: 'EndDrag'; ImportTypePkg: False; Params: 'sender, target vcl.IObject, x, y int32'),
    (Name: 'DockDrop'; ImportTypePkg: False; Params: 'sender vcl.IObject, source *vcl.TDragDockObject, x, y int32'),
    (Name: 'DockOver'; ImportTypePkg: True; Params: 'sender vcl.IObject, source *vcl.TDragDockObject, x, y int32, state types.TDragState, accept *bool'),
    (Name: 'UnDock'; ImportTypePkg: False; Params: 'sender vcl.IObject, client *vcl.TControl, newTarget *vcl.TControl, allow *bool'),
    (Name: 'StartDock'; ImportTypePkg: False; Params: 'sender vcl.IObject, dragObject *vcl.TDragDockObject'),
    (Name: 'GetSiteInfo'; ImportTypePkg: True; Params: 'sender vcl.IObject, dockClient *vcl.TControl, influenceRect *types.TRect, mousePos types.TPoint, canDock *bool'),

    (Name: 'LinkClick'; ImportTypePkg: True; Params: 'sender vcl.IObject, link string, linktype types.TSysLinkType'),
    (Name: 'Find'; ImportTypePkg: False; Params: 'sender vcl.IObject'),
    (Name: 'Replace'; ImportTypePkg: False; Params: 'sender vcl.IObject')
  );

{$I supportsComponents.inc}

{$I winResData.inc}


{$IFDEF WINDOWS}
var
  uConsoleHandle: HANDLE;
{$ENDIF}



//控制台文本的颜色常量
const
  tfBlue  =1;
  tfGreen =2;
  tfRed   =4;
  tfIntensity = 8;
  tfWhite = $f;

  tbBlue  =$10;
  tbGreen =$20;
  tbRed   =$40;
  tbIntensity = $80;

procedure TextColor(AColor: Byte);
begin
{$IFDEF WINDOWS}
   SetConsoleTextAttribute(uConsoleHandle, AColor);
{$ENDIF}
end;

// 系统环境是中文的
function SysIsZhCN: Boolean;
begin
  Result := SysLocale.DefaultLCID = 2052;
end;

procedure WriteDefaultWindowsRes(APath: string);
var
  LFileStream: TFileStream;
  LFileName: string;
begin
  LFileName := APath + 'defaultRes_windows.syso';
  if FileExists(LFileName) then
    Exit;
  LFileStream := TFileStream.Create(LFileName, fmCreate);
  try
    LFileStream.Write(WinResData[0], Length(WinResData));
  finally
    LFileStream.Free
  end;
end;

// 获取指命令行的一下个参数
function GetNextParam(ASwitch: string): string;
 Var
   I,L : Integer;
   S,T : String;
 begin
   Result := '';
   S := ASwitch;
   I := ParamCount;
   while I > 0 do
   begin
     L := Length(Paramstr(I));
     if (L > 0) and (ParamStr(I)[1] in SwitchChars) then
     begin
       T := Copy(ParamStr(I), 2, L - 1);
       if S = T then
          Exit(ParamStr(I + 1));
     end;
     Dec(I);
   end;
 end;

function GetEventParam(AItem: TEventItem): string;
var
  LItem: TEventType;
begin
  Result := '';
  for LItem in CommonEventType do
  begin
    // 优先这个，一般是Form全名事件
    if SameText(LItem.Name, AItem.RealName) then
      Exit(LItem.Params);
    if SameText(LItem.Name, AItem.Name) then
      Exit(LItem.Params);
  end;
end;

function IsSupportsComponent(AClassName: string): Boolean;
var
  S: string;
begin
  Result := False;
  for S in supportsComponents do
  begin
    if S = AClassName then
      Exit(True);
  end;
end;

function GetNeedTypesPkg(AItem: TEventItem): Boolean;
var
  LItem: TEventType;
begin
  Result := False;
  for LItem in CommonEventType do
    if (SameText(LItem.Name, AItem.Name) or SameText(LItem.Name, AItem.RealName)) and LItem.ImportTypePkg then
      Exit(True);
end;

procedure CreateImplFile(AFileName: string; AEvents: array of TEventItem; AFormName: string);
var
  LImplFileName, LMName, LTemp, LCode: string;
  LItem: TEventItem;
  LStream: TStringStream;
  LExists: Boolean;
  LListStr: TStringList;
  I: Integer;
begin
  LImplFileName := AFileName;
  Insert('Impl', LImplFileName, Length(LImplFileName) - Length(ExtractFileExt(AFileName)) + 1);

  LStream := TStringStream.Create(''{$IFNDEF FPC}, TEncoding.UTF8{$ENDIF});
  try
    LExists := FileExists(LImplFileName);
    LListStr := TStringList.Create;
    try
      // 不存在，则添加
      if not LExists then
      begin
        if SysIsZhCN then
        begin
          LListStr.Add('// 由res2go自动生成。');
          LListStr.Add('// 在这里写你的事件。');
        end else
        begin
          LListStr.Add('// Automatically generated by the res2go.');
          LListStr.Add('// Write your event here.');
        end;
        LListStr.Add('');
        LListStr.Add('package main');
        LListStr.Add('');
        LListStr.Add('import (');
        LListStr.Add('    "github.com/ying32/govcl/vcl"');
        //LListStr.Add('    "github.com/ying32/govcl/vcl/types"');
        LListStr.Add(')');
      end else
      begin
        // 反之加载
        LStream.LoadFromFile(LImplFileName);
        LTemp := LStream.DataString;
        LListStr.Text := LTemp;
      end;
      // 添加事件
      for LItem in AEvents do
      begin
        LMName := Format('On%s', [LItem.RealName]);
        //writeln('method name:', LMName);
        LCode := Format(#13#10'func (f *T%s) %s(%s) {'#13#10#13#10'}'#13#10, [AFormName, LMName, GetEventParam(LItem)]);
        // 不存在不查找了
        if not LExists then
          if Pos(LMName, LListStr.Text) = 0 then
            LListStr.Add(LCode)
        else
        begin
          // 没有找到，则添加
          if Pos(LMName, LListStr.Text) = 0 then
            LListStr.Add(LCode);
        end;
      end;
      // 这里检查下是否需要类型包
      if not LListStr.Text.Contains('"github.com/ying32/govcl/vcl/types"') then
      begin
        for LItem in AEvents do
        begin
          if GetNeedTypesPkg (LItem) then
          begin
            I := 0;
            for LTemp in LListStr do
            begin
              if LTemp.Contains('"github.com/ying32/govcl/vcl"') then
              begin
                LListStr.Insert(I + 1, '    "github.com/ying32/govcl/vcl/types"');
                Break;
              end;
              Inc(I);
            end;
            Break;
          end;
        end;
      end;

      LStream.Clear;
      LStream.WriteString(LListStr.Text);
    finally
      LListStr.Free;
    end;
    LStream.SaveToFile(LImplFileName);
  finally
    LStream.Free;
  end;
end;


procedure SaveToGoFile(AComponents: TList; AEvents: array of TEventItem; const AOutPath: string; AMem: TMemoryStream);
var
  LStrStream: TStringStream;
{$IFDEF FPC}
  LLines: TStringList;
{$ENDIF}

  procedure WLine(s: string = '');
  begin
  {$IFDEF FPC}
    LLines.Add(S);
  {$ELSE}
    LStrStream.WriteString(s + sLineBreak);
  {$ENDIF}
  end;

  function GetMaxLength: Integer;
  var
    I: Integer;
    C: PComponentItem;
  begin
    Result := 0;
    for I := 0 to AComponents.Count - 1 do
    begin
      C := AComponents[I];
      Result := Max(Result, Length(C^.Name));
    end;
  end;

var
  I, LMaxLen: Integer;
  C: PComponentItem;
  LBS, LVarName, LFormName, LFileName: string;
begin
  LStrStream := TStringStream.Create(''{$IFNDEF FPC}, TEncoding.UTF8{$ENDIF});
  LLines := TStringList.Create;
  try
    if SysIsZhCN then
      WLine('// 由res2go自动生成，不要编辑。')
    else
      WLine('// Automatically generated by the res2go, do not edit.');
    WLine('package main');
    WLine;
    WLine('import (');
    WLine('    "github.com/ying32/govcl/vcl"');
    WLine(')');
    WLine;
    LFormName := PComponentItem(AComponents[0])^.Name;
    WLine(Format('type T%s struct {', [LFormName]));
    WLine('    *vcl.TForm');
    LMaxLen := GetMaxLength;
    for I := 1 to AComponents.Count - 1 do
    begin
      C := PComponentItem(AComponents[I]);

      if not IsSupportsComponent(C^.ClassName) then
      begin
        TextColor(tfIntensity or tfRed);
        if SysIsZhCN then
          Writeln('警告：“', C^.Name, ':', C^.ClassName, '”不被支持，有可能创建失败。')
        else
          Writeln('Warning: "', C^.Name, ':', C^.ClassName, '" is not supported and it may fail to create.');
        TextColor(tfWhite);
      end;

      if C^.Name = '' then
        Continue;
      if CharInSet(C^.Name[1], ['a'..'z', '_']) then
      begin
        TextColor(tfGreen);
        if SysIsZhCN then
          Writeln('提示：“', C^.Name, ':', C^.ClassName, '”必须首字母大写才能被导出。')
        else
          Writeln('Hint: "', C^.Name, ':', C^.ClassName, '" must be capitalized first to be exported.');
        TextColor(tfWhite);
        Continue;
      end;
      //Writeln(C^.Name, ': ', C^.ClassName);
      WLine(Format('    %s *vcl.%s', [Copy(C^.Name + DupeString(#32, LMaxLen), 1, LMaxLen), C^.ClassName]));
    end;
    WLine('}');
    WLine;
    WLine(Format('var %s *T%s', [LFormName, LFormName]));
    WLine;
    WLine;
    WLine;
    WLine;
    // AMem = nil表示不以字节输出到go文件
    if AMem = nil then
    begin
      if SysIsZhCN then
        Wline('// 以文件形式加载')
      else
        WLine('// Loaded as a file.');
      WLine(Format('// vcl.Application.CreateForm("%s.gfm", &%s)', [LFormName, LFormName]));
    end
    else
    begin
      LVarName := LFormName + 'Bytes';
    {$IFDEF FPC}
      LVarName[1] := LowerCase(LVarName[1]);
    {$ELSE}
      LVarName[1] := LowerCase(LVarName[1])[1];
    {$ENDIF}
      if SysIsZhCN then
        WLine('// 以字节形式加载')
      else
        WLine('// Loaded in bytes.');
      WLine(Format('// vcl.Application.CreateForm(%s, &%s)', [LVarName, LFormName]));
      WLine;
      WLine('var (');
      WLine(Format('    %s = []byte {', [LVarName]));
      LBS := '';
      for I := 0 to AMem.Size - 1 do
      begin
        if I > 0 then
          LBS := LBS + ', ';
        if I mod 12 = 0 then
          LBS := LBS + IfThen(I > 0, sLineBreak, '') + '        ';
        LBS := LBS + '0x' + PByte(PByte(AMem.Memory) + I)^.ToHexString(2);
      end;
      LBS := LBS + '}';
      WLine(LBS);
      WLine(')');
    end;
    LFileName := AOutPath + LFormName + '.go';
  {$IFDEF FPC}
    LStrStream.WriteString(LLines.Text);
  {$ENDIF}
    LStrStream.SaveToFile(LFileName);
  finally
    LLines.Free;
    LStrStream.Free;
  end;
  if Length(AEvents) > 0 then
    CreateImplFile(LFileName, AEvents, LFormName);
end;


procedure ResouceFormToGo(ASrcFileName, AOutPath: string);
var
  LParser: TParser;
  LComponents: TList;
  LEventList: array of TEventItem;

  procedure ProcessProperty;
  var
    LPropName, LEventName: String;
    stream: TMemoryStream;
  begin
    LParser.CheckToken(toSymbol);
    LPropName := LParser.TokenString;
    while True do begin
      LParser.NextToken;
      if LParser.Token <> '.' then break;
      LParser.NextToken;
      LParser.CheckToken(toSymbol);
      LPropName := LPropName + '.' + LParser.TokenString;
    end;
    LParser.CheckToken('=');
    LParser.NextToken;
    case LParser.Token of
       toSymbol:
          begin
            if (CompareText(LParser.TokenString, 'True')<> 0) and
               (CompareText(LParser.TokenString, 'False') <> 0) and
               (CompareText(LParser.TokenString, 'nil') <> 0) and
               (CompareText(Copy(LPropName, 1, 2), 'On') = 0)
            then
            begin
              LEventName := LParser.TokenComponentIdent;
              if LEventName[1] in ['A'..'Z'] then
              begin
                SetLength(LEventList, Length(LEventList)+1);
                LEventList[High(LEventList)].Name := LPropName.Substring(2);
                LEventList[High(LEventList)].RealName := LParser.TokenComponentIdent;
              end;
            end;
          end;
      '[':
       begin
         LParser.NextToken;
          while LParser.Token <> ']' do
            LParser.NextToken;
       end;
       '(':
         begin
          LParser.NextToken;
          while LParser.Token <> ')' do
            LParser.NextToken;
         end;
       '<':
         begin
           LParser.NextToken;
           while LParser.Token <> '>' do
             LParser.NextToken;
         end;
        '{':
          begin
            stream := TMemoryStream.Create;
            try
              LParser.HexToBinary(stream);
            finally
              stream.Free;
            end;
          end;
       end;
    LParser.NextToken;
  end;

   procedure ProcessObject;
   var
     ObjectName, ObjectType: String;
     LItem: PComponentItem;
   begin
     LParser.NextToken;
     LParser.CheckToken(toSymbol);
     ObjectName := '';
     ObjectType := LParser.TokenString;
     LParser.NextToken;
     if LParser.Token = ':' then
     begin
       LParser.NextToken;
       LParser.CheckToken(toSymbol);
       ObjectName := ObjectType;
       ObjectType := LParser.TokenString;
       LParser.NextToken;
       if LParser.Token = '[' then
       begin
         LParser.NextToken;
         LParser.NextToken;
         LParser.CheckToken(']');
         LParser.NextToken;
       end;
     end;
     //Writeln(ObjectName, ': ', ObjectType);
     New(LItem);
     LItem^.Name := ObjectName;
     LItem^.ClassName := ObjectType;
     LComponents.Add(LItem);
     while not (LParser.TokenSymbolIs('END') or
       LParser.TokenSymbolIs('OBJECT') or
       LParser.TokenSymbolIs('INHERITED') or
       LParser.TokenSymbolIs('INLINE')) do
     begin
       ProcessProperty;
     end;
     while not LParser.TokenSymbolIs('END') do
       ProcessObject;
     LParser.NextToken;
   end;


   procedure ClearList;
   var
     I: Integer;
   begin
     for I := 0 to LComponents.Count - 1 do
       Dispose(PComponentItem(LComponents[I]));
   end;

 var
   LInput, LOutput, LEnStream: TMemoryStream;
   LUseEncrypt: Boolean;
 begin
   LInput := TMemoryStream.Create;
   try
     LInput.LoadFromFile(ASrcFileName);
     LOutput := TMemoryStream.Create;
     try
        try
          ObjectTextToBinary(LInput, LOutput);
          LInput.Position:=0;
          LParser := TParser.Create(LInput);
          try
            LComponents := TList.Create;
            try
              ProcessObject;
              LEnStream := TMemoryStream.Create;
              try
                LOutput.Position := 0;

                LUseEncrypt := True;
                if FindCmdLineSwitch('encrypt') then
                  LUseEncrypt := SameText(GetNextParam('encrypt'), 'True');
                // 使用加密格式的
                if LUseEncrypt then
                begin
                  TFormResFile.Encrypt(LOutput, LEnStream);
                  SaveToGoFile(LComponents, LEventList, AOutPath, LEnStream);
                end else
                  SaveToGoFile(LComponents, LEventList, AOutPath, LOutput);
              finally
                LEnStream.Free;;
              end;
            finally
              ClearList;
              LComponents.Free;
            end;
          finally
            LParser.Free;;
          end;
        except
          on E: Exception do
            Writeln('Error:', E.message);
        end;
     finally
       LOutput.Free;
     end;
   finally
     LInput.Free;
   end;
 end;


procedure ProjectFileToMainDotGo(AFileName, AOutPath: string);
var
  LStrs, LMainDotGo: TStringList;
  S, LVarName, LFormName: string;
  LP: Integer;
begin
  LStrs := TStringList.Create;
  LMainDotGo := TStringList.Create;
  try
    LStrs.LoadFromFile(AFileName);

    if SysIsZhCN then
      LMainDotGo.Add('// 由res2go自动生成。')
    else
      LMainDotGo.Add('// Automatically generated by the res2go.');
    LMainDotGo.Add('package main');
    LMainDotGo.Add('');
    LMainDotGo.Add('import (');
    LMainDotGo.Add('    "github.com/ying32/govcl/vcl"');
    LMainDotGo.Add(')');
    LMainDotGo.Add('');
    LMainDotGo.Add('func main() {');
    if FindCmdLineSwitch('scale') then
      LMainDotGo.Add('    vcl.Application.SetFormScaled(true)');
    LMainDotGo.Add('    vcl.Application.Initialize()');
    if SameText(ExtractFileExt(AFileName), '.dpr') then
      LMainDotGo.Add('    vcl.Application.SetMainFormOnTaskBar(true)');
    for S in LStrs do
    begin
      if S.Trim.StartsWith('Application.CreateForm(') then
      begin
        LP := S.IndexOf(',');
        LFormName := Trim(S.Substring(LP + 1, S.IndexOf(')') - LP - 1));
        LVarName := LFormName + 'Bytes';
        {$IFDEF FPC}
          LVarName[1] := LowerCase(LVarName[1]);
        {$ELSE}
          LVarName[1] := LowerCase(LVarName[1])[1];
        {$ENDIF}
        LMainDotGo.Add(Format('    vcl.Application.CreateForm(%s, &%s)', [LVarName, LFormName]));
      end;
    end;
    LMainDotGo.Add('    vcl.Application.Run()');
    LMainDotGo.Add('}');
    LMainDotGo.SaveToFile(AOutPath + 'main.go');
  finally
    LMainDotGo.Free;
    LStrs.Free;
  end;
end;

procedure ConvertAll;
var
  LRec: {$IFDEF FPC}TRawbyteSearchRec{$ELSE}TSearchRec{$ENDIF};
  LPath, LOutPath, LExt, LFileName: string;
  LConvPro, LOutWinRes: Boolean;
begin
  if FindCmdLineSwitch('help') or FindCmdLineSwitch('h') then
  begin
    WriteHelp;
    Exit;
  end;
  if FindCmdLineSwitch('version') or FindCmdLineSwitch('v') then
  begin
    if SysIsZhCN then
      Writeln('版本：', APPVERSION)
    else
      Writeln('Version:', APPVERSION);
    Exit;
  end;
{$IFDEF WINDOWS}
  uConsoleHandle := GetStdHandle(STD_OUTPUT_HANDLE);
  try
{$ENDIF}
    LConvPro := True;
    if FindCmdLineSwitch('outmain') then
      LConvPro := SameText(GetNextParam('outmain'), 'True');
    LOutWinRes := True;
    if FindCmdLineSwitch('outres') then
      LOutWinRes := SameText(GetNextParam('outres'), 'True');

    LPath := ExtractFilePath(ParamStr(0));
    if FindCmdLineSwitch('path') then
    begin
      LPath := GetNextParam('path');
      if not DirectoryExists(LPath) then
      begin
        TextColor(tfWhite);
        if SysIsZhCN then
          Writeln('“-path”目录不存在。')
        else
          Writeln('The "-path" directory does not exist.');
        ExitCode := 1;
        Exit;
      end;
      if not LPath.EndsWith(PathDelim) then
        LPath := LPath + PathDelim;
    end;
    //Writeln('LPath:', LPath);

    LOutPath := ExtractFilePath(ParamStr(0));
    if FindCmdLineSwitch('outpath') then
    begin
      LOutPath := GetNextParam('outpath');
      if not DirectoryExists(LOutPath) then
        CreateDir(LOutPath);
      if not LOutPath.EndsWith(PathDelim) then
        LOutPath := LOutPath + PathDelim;
    end;
    //Writeln('LOutPath:', LOutPath);

    if FindFirst(LPath + '*.*', faAnyFile, LRec) = 0 then
    begin
     repeat
      LExt := ExtractFileExt(LRec.Name);
      LFileName := LPath + LRec.Name;
      if SameText(LExt, '.lfm') or SameText(LExt, '.dfm') then
      begin
        TextColor(tfWhite);
        Writeln(LFileName);
        ResouceFormToGo(LFileName, LOutPath);
      end else if LConvPro and (SameText(LExt, '.lpr') or SameText(LExt, '.dpr')) and
       (not SameText(LRec.Name, 'res2go.lpr') and not SameText(LRec.Name, 'res2go.dpr')) then
      begin
        TextColor(tfWhite);
        Writeln(LFileName);
        ProjectFileToMainDotGo(LFileName, LOutPath);
      end;
     until FindNext(LRec) <> 0;
     FindClose(LRec);
    end;

    if LOutWinRes then
      WriteDefaultWindowsRes(LOutPath);
    if SysIsZhCN then
      Writeln('转换完成。')
    else
      Writeln('Done.');

    if not FindCmdLineSwitch('gui') then
    begin
      if SysIsZhCN then
        Writeln('请按回车键退出。')
      else
        Writeln('Please press Enter to exit.');
      Readln;
    end else
      ExitCode := 0;
{$IFDEF WINDOWS}
  finally
    if uConsoleHandle > 0 then
      CloseHandle(uConsoleHandle);
  end;
{$ENDIF}
end;

procedure WriteHelp;
begin
  //Writeln('---------------Chinese------------------');

  if SysIsZhCN then
  begin
    Writeln('');
    TextColor(tfWhite);
    Writeln('res2go是一个将Lazarus/Delphi资源窗口转go工具，可自动解析lfm、dfm中的组件名、组件类型、事件名称。解析lpr、dpr文件中窗口信息。');
    Writeln('');
    Writeln('用法：res2go [-path "C:\project\"] [-outpath "C:\xxx\"] [-outmain true] [-outres true] [-scale] [-encrypt true]');
    Writeln('  -path       待转换的工程路径，可为空，默认以当前目录为准。');
    Writeln('  -outpath    输出目录，可为空，默认为当前目录。');
    Writeln('  -outmain    是否输出“main.go”，此为解析lpr或者dpr文件，默认输出。');
    Writeln('  -outres     输出一个Windows默认资源文件，如果存在则不创建，默认输出。');
    Writeln('  -scale      缩放窗口选项，默认为不缩放。');
    Writeln('  -encrypt    使用加密格式的*.gfm文件，默认为true。');
    Writeln('  -h -help    显示帮助。');
    Writeln('  -v -version 显示版本号');

    // Writeln('  -gui     此参数表示是gui在调用，那么将在ExitCode上返回成功与否。');


    Writeln('');
  end else
  begin
    //Writeln('---------------English------------------');
    Writeln('');
    TextColor(tfWhite);
    Writeln('res2go is a Lazarus/Delphi resource window to go tool, can automatically resolve the lfm, dfm component name, component type and event name. Parse window information in lpr, dpr file.');
    Writeln('');
    Writeln('usage: res2go [-path "C:\project\"] [-outpath "C:\xxx\"] [-outmain true] [-outres true] [-scale] [-encrypt true]');
    Writeln('  -path       The project path to be converted can be empty. The default is the current directory.');
    Writeln('  -outpath    Output directory, can be empty, the default is the current directory.');
    Writeln('  -outmain    Whether to output "main.go", this is parsing lpr or dpr file, the default output.');
    Writeln('  -outres     Outputs a Windows default resource file, if it does not exist, the default output.');
    Writeln('  -scale      The windoscale option, the default is false.');
    Writeln('  -encrypt    Using the encrypted format of the *.gfm file, the default is true.');
    Writeln('  -h -help    Show help.');
    Writeln('  -v -version Show Version.');
    Writeln('');
  end;

end;

{ TStringStreamHelper }
{$IFDEF FPC}
procedure TStringStreamHelper.LoadFromFile(const AFileName: string);
var
  LFileStream: TFileStream;
begin
  LFileStream := TFileStream.Create(AFileName, fmOpenRead);
  try
    Clear;
    LFileStream.Position := 0;
    Self.CopyFrom(LFileStream, LFileStream.Size);
  finally
    LFileStream.Free;;
  end;
end;

procedure TStringStreamHelper.SaveToFile(const AFileName: string);
var
  LFileStream: TFileStream;
  OldPos: Int64;
begin
  LFileStream := TFileStream.Create(AFileName, fmCreate);
  try
    OldPos := Self.Position;
    Self.Position := 0;
    LFileStream.CopyFrom(Self, Self.Size);
    Self.Position := OldPos;
  finally
    LFileStream.Free;;
  end;
end;

procedure TStringStreamHelper.Clear;
begin
  Self.Size := 0;
end;

{$ENDIF}













end.

