
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function HeaderSections_Create(AOwner: TCustomHeaderControl): THeaderSections; stdcall;
begin
  Result :=  THeaderSections.Create(AOwner);
end;

procedure HeaderSections_Free(AObj: THeaderSections); stdcall;
begin
  AObj.Free;
end;

function HeaderSections_Add(AObj: THeaderSections): THeaderSection; stdcall;
begin
  Result :=  AObj.Add;
end;

function HeaderSections_AddItem(AObj: THeaderSections; Item: THeaderSection; Index: Integer): THeaderSection; stdcall;
begin
  Result :=  AObj.AddItem(Item, Index);
end;

function HeaderSections_Insert(AObj: THeaderSections; Index: Integer): THeaderSection; stdcall;
begin
  Result :=  AObj.Insert(Index);
end;

function HeaderSections_Owner(AObj: THeaderSections): TPersistent; stdcall;
begin
  Result :=  AObj.Owner;
end;

procedure HeaderSections_Assign(AObj: THeaderSections; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure HeaderSections_BeginUpdate(AObj: THeaderSections); stdcall;
begin
  AObj.BeginUpdate;
end;

procedure HeaderSections_Clear(AObj: THeaderSections); stdcall;
begin
  AObj.Clear;
end;

procedure HeaderSections_ClearAndResetID(AObj: THeaderSections); stdcall;
begin
  AObj.ClearAndResetID;
end;

procedure HeaderSections_Delete(AObj: THeaderSections; Index: Integer); stdcall;
begin
  AObj.Delete(Index);
end;

procedure HeaderSections_EndUpdate(AObj: THeaderSections); stdcall;
begin
  AObj.EndUpdate;
end;

function HeaderSections_FindItemID(AObj: THeaderSections; ID: Integer): TCollectionItem; stdcall;
begin
  Result :=  AObj.FindItemID(ID);
end;

function HeaderSections_GetNamePath(AObj: THeaderSections): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure HeaderSections_DisposeOf(AObj: THeaderSections); stdcall;
begin
  AObj.DisposeOf;
end;

function HeaderSections_ClassType(AObj: THeaderSections): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function HeaderSections_ClassName(AObj: THeaderSections): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function HeaderSections_InstanceSize(AObj: THeaderSections): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function HeaderSections_InheritsFrom(AObj: THeaderSections; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function HeaderSections_Equals(AObj: THeaderSections; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function HeaderSections_GetHashCode(AObj: THeaderSections): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function HeaderSections_ToString(AObj: THeaderSections): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function HeaderSections_GetCapacity(AObj: THeaderSections): Integer; stdcall;
begin
  Result :=  AObj.Capacity;
end;

procedure HeaderSections_SetCapacity(AObj: THeaderSections; AValue: Integer); stdcall;
begin
  AObj.Capacity := AValue;
end;

function HeaderSections_GetCount(AObj: THeaderSections): Integer; stdcall;
begin
  Result :=  AObj.Count;
end;

function HeaderSections_GetItems(AObj: THeaderSections; Index: Integer): THeaderSection; stdcall;
begin
  Result :=  AObj.Items[Index];
end;

procedure HeaderSections_SetItems(AObj: THeaderSections; Index: Integer; AValue: THeaderSection); stdcall;
begin
  AObj.Items[Index] := AValue;
end;

function HeaderSections_StaticClassType: TClass; stdcall;
begin
  Result := THeaderSections;
end;

exports
  HeaderSections_Create,
  HeaderSections_Free,
  HeaderSections_Add,
  HeaderSections_AddItem,
  HeaderSections_Insert,
  HeaderSections_Owner,
  HeaderSections_Assign,
  HeaderSections_BeginUpdate,
  HeaderSections_Clear,
  HeaderSections_ClearAndResetID,
  HeaderSections_Delete,
  HeaderSections_EndUpdate,
  HeaderSections_FindItemID,
  HeaderSections_GetNamePath,
  HeaderSections_DisposeOf,
  HeaderSections_ClassType,
  HeaderSections_ClassName,
  HeaderSections_InstanceSize,
  HeaderSections_InheritsFrom,
  HeaderSections_Equals,
  HeaderSections_GetHashCode,
  HeaderSections_ToString,
  HeaderSections_GetCapacity,
  HeaderSections_SetCapacity,
  HeaderSections_GetCount,
  HeaderSections_GetItems,
  HeaderSections_SetItems,
  HeaderSections_StaticClassType;

