
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function StatusPanel_Create(AOwner: TCollection): TStatusPanel; stdcall;
begin
  Result :=  TStatusPanel.Create(AOwner);
end;

procedure StatusPanel_Free(AObj: TStatusPanel); stdcall;
begin
  AObj.Free;
end;

procedure StatusPanel_Assign(AObj: TStatusPanel; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

function StatusPanel_GetNamePath(AObj: TStatusPanel): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure StatusPanel_DisposeOf(AObj: TStatusPanel); stdcall;
begin
  AObj.DisposeOf;
end;

function StatusPanel_ClassType(AObj: TStatusPanel): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function StatusPanel_ClassName(AObj: TStatusPanel): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function StatusPanel_InstanceSize(AObj: TStatusPanel): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function StatusPanel_InheritsFrom(AObj: TStatusPanel; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function StatusPanel_Equals(AObj: TStatusPanel; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function StatusPanel_GetHashCode(AObj: TStatusPanel): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function StatusPanel_ToString(AObj: TStatusPanel): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function StatusPanel_GetAlignment(AObj: TStatusPanel): TAlignment; stdcall;
begin
  Result :=  AObj.Alignment;
end;

procedure StatusPanel_SetAlignment(AObj: TStatusPanel; AValue: TAlignment); stdcall;
begin
  AObj.Alignment := AValue;
end;

function StatusPanel_GetBiDiMode(AObj: TStatusPanel): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure StatusPanel_SetBiDiMode(AObj: TStatusPanel; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

function StatusPanel_GetStyle(AObj: TStatusPanel): TStatusPanelStyle; stdcall;
begin
  Result :=  AObj.Style;
end;

procedure StatusPanel_SetStyle(AObj: TStatusPanel; AValue: TStatusPanelStyle); stdcall;
begin
  AObj.Style := AValue;
end;

function StatusPanel_GetText(AObj: TStatusPanel): PChar; stdcall;
begin
  Result :=  PChar(AObj.Text);
end;

procedure StatusPanel_SetText(AObj: TStatusPanel; AValue: PChar); stdcall;
begin
  AObj.Text := AValue;
end;

function StatusPanel_GetWidth(AObj: TStatusPanel): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure StatusPanel_SetWidth(AObj: TStatusPanel; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function StatusPanel_GetCollection(AObj: TStatusPanel): TCollection; stdcall;
begin
  Result :=  AObj.Collection;
end;

procedure StatusPanel_SetCollection(AObj: TStatusPanel; AValue: TCollection); stdcall;
begin
  AObj.Collection := AValue;
end;

function StatusPanel_GetIndex(AObj: TStatusPanel): Integer; stdcall;
begin
  Result :=  AObj.Index;
end;

procedure StatusPanel_SetIndex(AObj: TStatusPanel; AValue: Integer); stdcall;
begin
  AObj.Index := AValue;
end;

function StatusPanel_StaticClassType: TClass; stdcall;
begin
  Result := TStatusPanel;
end;

exports
  StatusPanel_Create,
  StatusPanel_Free,
  StatusPanel_Assign,
  StatusPanel_GetNamePath,
  StatusPanel_DisposeOf,
  StatusPanel_ClassType,
  StatusPanel_ClassName,
  StatusPanel_InstanceSize,
  StatusPanel_InheritsFrom,
  StatusPanel_Equals,
  StatusPanel_GetHashCode,
  StatusPanel_ToString,
  StatusPanel_GetAlignment,
  StatusPanel_SetAlignment,
  StatusPanel_GetBiDiMode,
  StatusPanel_SetBiDiMode,
  StatusPanel_GetStyle,
  StatusPanel_SetStyle,
  StatusPanel_GetText,
  StatusPanel_SetText,
  StatusPanel_GetWidth,
  StatusPanel_SetWidth,
  StatusPanel_GetCollection,
  StatusPanel_SetCollection,
  StatusPanel_GetIndex,
  StatusPanel_SetIndex,
  StatusPanel_StaticClassType;

