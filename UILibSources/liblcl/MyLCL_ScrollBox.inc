
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function ScrollBox_Create(AOwner: TComponent): TScrollBox; extdecl;
begin
  Result :=  TScrollBox.Create(AOwner);
end;

procedure ScrollBox_Free(AObj: TScrollBox); extdecl;
begin
  AObj.Free;
end;

function ScrollBox_CanFocus(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function ScrollBox_ContainsControl(AObj: TScrollBox; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function ScrollBox_ControlAtPos(AObj: TScrollBox; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure ScrollBox_DisableAlign(AObj: TScrollBox); extdecl;
begin
  AObj.DisableAlign;
end;

procedure ScrollBox_EnableAlign(AObj: TScrollBox); extdecl;
begin
  AObj.EnableAlign;
end;

function ScrollBox_FindChildControl(AObj: TScrollBox; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure ScrollBox_FlipChildren(AObj: TScrollBox; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ScrollBox_Focused(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function ScrollBox_HandleAllocated(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ScrollBox_InsertControl(AObj: TScrollBox; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure ScrollBox_Invalidate(AObj: TScrollBox); extdecl;
begin
  AObj.Invalidate;
end;

procedure ScrollBox_RemoveControl(AObj: TScrollBox; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure ScrollBox_Realign(AObj: TScrollBox); extdecl;
begin
  AObj.Realign;
end;

procedure ScrollBox_Repaint(AObj: TScrollBox); extdecl;
begin
  AObj.Repaint;
end;

procedure ScrollBox_ScaleBy(AObj: TScrollBox; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ScrollBox_ScrollBy(AObj: TScrollBox; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure ScrollBox_SetBounds(AObj: TScrollBox; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ScrollBox_SetFocus(AObj: TScrollBox); extdecl;
begin
  AObj.SetFocus;
end;

procedure ScrollBox_Update(AObj: TScrollBox); extdecl;
begin
  AObj.Update;
end;

procedure ScrollBox_BringToFront(AObj: TScrollBox); extdecl;
begin
  AObj.BringToFront;
end;

procedure ScrollBox_ClientToScreen(AObj: TScrollBox; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure ScrollBox_ClientToParent(AObj: TScrollBox; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function ScrollBox_Dragging(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function ScrollBox_HasParent(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ScrollBox_Hide(AObj: TScrollBox); extdecl;
begin
  AObj.Hide;
end;

function ScrollBox_Perform(AObj: TScrollBox; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ScrollBox_Refresh(AObj: TScrollBox); extdecl;
begin
  AObj.Refresh;
end;

procedure ScrollBox_ScreenToClient(AObj: TScrollBox; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure ScrollBox_ParentToClient(AObj: TScrollBox; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure ScrollBox_SendToBack(AObj: TScrollBox); extdecl;
begin
  AObj.SendToBack;
end;

procedure ScrollBox_Show(AObj: TScrollBox); extdecl;
begin
  AObj.Show;
end;

function ScrollBox_GetTextBuf(AObj: TScrollBox; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function ScrollBox_GetTextLen(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure ScrollBox_SetTextBuf(AObj: TScrollBox; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function ScrollBox_FindComponent(AObj: TScrollBox; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ScrollBox_GetNamePath(AObj: TScrollBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure ScrollBox_Assign(AObj: TScrollBox; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function ScrollBox_ClassType(AObj: TScrollBox): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function ScrollBox_ClassName(AObj: TScrollBox): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function ScrollBox_InstanceSize(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function ScrollBox_InheritsFrom(AObj: TScrollBox; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function ScrollBox_Equals(AObj: TScrollBox; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ScrollBox_GetHashCode(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ScrollBox_ToString(AObj: TScrollBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function ScrollBox_GetAlign(AObj: TScrollBox): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure ScrollBox_SetAlign(AObj: TScrollBox; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function ScrollBox_GetAnchors(AObj: TScrollBox): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ScrollBox_SetAnchors(AObj: TScrollBox; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function ScrollBox_GetAutoSize(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure ScrollBox_SetAutoSize(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.AutoSize := AValue;
end;

function ScrollBox_GetBiDiMode(AObj: TScrollBox): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ScrollBox_SetBiDiMode(AObj: TScrollBox; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function ScrollBox_GetBorderStyle(AObj: TScrollBox): TBorderStyle; extdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure ScrollBox_SetBorderStyle(AObj: TScrollBox; AValue: TBorderStyle); extdecl;
begin
  AObj.BorderStyle := AValue;
end;

function ScrollBox_GetDockSite(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure ScrollBox_SetDockSite(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function ScrollBox_GetDoubleBuffered(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ScrollBox_SetDoubleBuffered(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ScrollBox_GetDragCursor(AObj: TScrollBox): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure ScrollBox_SetDragCursor(AObj: TScrollBox; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function ScrollBox_GetDragKind(AObj: TScrollBox): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure ScrollBox_SetDragKind(AObj: TScrollBox; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function ScrollBox_GetDragMode(AObj: TScrollBox): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure ScrollBox_SetDragMode(AObj: TScrollBox; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function ScrollBox_GetEnabled(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ScrollBox_SetEnabled(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function ScrollBox_GetColor(AObj: TScrollBox): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure ScrollBox_SetColor(AObj: TScrollBox; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function ScrollBox_GetFont(AObj: TScrollBox): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure ScrollBox_SetFont(AObj: TScrollBox; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function ScrollBox_GetParentColor(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure ScrollBox_SetParentColor(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function ScrollBox_GetParentFont(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ScrollBox_SetParentFont(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function ScrollBox_GetParentShowHint(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ScrollBox_SetParentShowHint(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ScrollBox_GetPopupMenu(AObj: TScrollBox): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ScrollBox_SetPopupMenu(AObj: TScrollBox; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ScrollBox_GetShowHint(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ScrollBox_SetShowHint(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function ScrollBox_GetTabOrder(AObj: TScrollBox): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ScrollBox_SetTabOrder(AObj: TScrollBox; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function ScrollBox_GetTabStop(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ScrollBox_SetTabStop(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function ScrollBox_GetVisible(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ScrollBox_SetVisible(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure ScrollBox_SetOnClick(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnClick := nil;
    EventClass.Remove(AObj, geClick);
    Exit;
  end;
  AObj.OnClick := @EventClass.OnClick;
  EventClass.Add(AObj, geClick, AEventId);
end;

procedure ScrollBox_SetOnDblClick(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDblClick := nil;
    EventClass.Remove(AObj, geDblClick);
    Exit;
  end;
  AObj.OnDblClick := @EventClass.OnDblClick;
  EventClass.Add(AObj, geDblClick, AEventId);
end;

procedure ScrollBox_SetOnDockDrop(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDockDrop := nil;
    EventClass.Remove(AObj, geDockDrop);
    Exit;
  end;
  AObj.OnDockDrop := @EventClass.OnDockDrop;
  EventClass.Add(AObj, geDockDrop, AEventId);
end;

procedure ScrollBox_SetOnDragDrop(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragDrop := nil;
    EventClass.Remove(AObj, geDragDrop);
    Exit;
  end;
  AObj.OnDragDrop := @EventClass.OnDragDrop;
  EventClass.Add(AObj, geDragDrop, AEventId);
end;

procedure ScrollBox_SetOnDragOver(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragOver := nil;
    EventClass.Remove(AObj, geDragOver);
    Exit;
  end;
  AObj.OnDragOver := @EventClass.OnDragOver;
  EventClass.Add(AObj, geDragOver, AEventId);
end;

procedure ScrollBox_SetOnEndDrag(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDrag := nil;
    EventClass.Remove(AObj, geEndDrag);
    Exit;
  end;
  AObj.OnEndDrag := @EventClass.OnEndDrag;
  EventClass.Add(AObj, geEndDrag, AEventId);
end;

procedure ScrollBox_SetOnEnter(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnEnter := nil;
    EventClass.Remove(AObj, geEnter);
    Exit;
  end;
  AObj.OnEnter := @EventClass.OnEnter;
  EventClass.Add(AObj, geEnter, AEventId);
end;

procedure ScrollBox_SetOnExit(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnExit := nil;
    EventClass.Remove(AObj, geExit);
    Exit;
  end;
  AObj.OnExit := @EventClass.OnExit;
  EventClass.Add(AObj, geExit, AEventId);
end;

procedure ScrollBox_SetOnGetSiteInfo(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnGetSiteInfo := nil;
    EventClass.Remove(AObj, geGetSiteInfo);
    Exit;
  end;
  AObj.OnGetSiteInfo := @EventClass.OnGetSiteInfo;
  EventClass.Add(AObj, geGetSiteInfo, AEventId);
end;

procedure ScrollBox_SetOnMouseDown(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseDown := nil;
    EventClass.Remove(AObj, geMouseDown);
    Exit;
  end;
  AObj.OnMouseDown := @EventClass.OnMouseDown;
  EventClass.Add(AObj, geMouseDown, AEventId);
end;

procedure ScrollBox_SetOnMouseEnter(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseEnter := nil;
    EventClass.Remove(AObj, geMouseEnter);
    Exit;
  end;
  AObj.OnMouseEnter := @EventClass.OnMouseEnter;
  EventClass.Add(AObj, geMouseEnter, AEventId);
end;

procedure ScrollBox_SetOnMouseLeave(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseLeave := nil;
    EventClass.Remove(AObj, geMouseLeave);
    Exit;
  end;
  AObj.OnMouseLeave := @EventClass.OnMouseLeave;
  EventClass.Add(AObj, geMouseLeave, AEventId);
end;

procedure ScrollBox_SetOnMouseMove(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseMove := nil;
    EventClass.Remove(AObj, geMouseMove);
    Exit;
  end;
  AObj.OnMouseMove := @EventClass.OnMouseMove;
  EventClass.Add(AObj, geMouseMove, AEventId);
end;

procedure ScrollBox_SetOnMouseUp(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseUp := nil;
    EventClass.Remove(AObj, geMouseUp);
    Exit;
  end;
  AObj.OnMouseUp := @EventClass.OnMouseUp;
  EventClass.Add(AObj, geMouseUp, AEventId);
end;

procedure ScrollBox_SetOnMouseWheel(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseWheel := nil;
    EventClass.Remove(AObj, geMouseWheel);
    Exit;
  end;
  AObj.OnMouseWheel := @EventClass.OnMouseWheel;
  EventClass.Add(AObj, geMouseWheel, AEventId);
end;

procedure ScrollBox_SetOnMouseWheelDown(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseWheelDown := nil;
    EventClass.Remove(AObj, geMouseWheelDown);
    Exit;
  end;
  AObj.OnMouseWheelDown := @EventClass.OnMouseWheelDown;
  EventClass.Add(AObj, geMouseWheelDown, AEventId);
end;

procedure ScrollBox_SetOnMouseWheelUp(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseWheelUp := nil;
    EventClass.Remove(AObj, geMouseWheelUp);
    Exit;
  end;
  AObj.OnMouseWheelUp := @EventClass.OnMouseWheelUp;
  EventClass.Add(AObj, geMouseWheelUp, AEventId);
end;

procedure ScrollBox_SetOnResize(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnResize := nil;
    EventClass.Remove(AObj, geResize);
    Exit;
  end;
  AObj.OnResize := @EventClass.OnResize;
  EventClass.Add(AObj, geResize, AEventId);
end;

procedure ScrollBox_SetOnUnDock(AObj: TScrollBox; AEventId: NativeUInt); extdecl;
begin
  if AEventId = 0 then
  begin
    AObj.OnUnDock := nil;
    EventClass.Remove(AObj, geUnDock);
    Exit;
  end;
  AObj.OnUnDock := @EventClass.OnUnDock;
  EventClass.Add(AObj, geUnDock, AEventId);
end;

function ScrollBox_GetDockClientCount(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function ScrollBox_GetVisibleDockClientCount(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function ScrollBox_GetBrush(AObj: TScrollBox): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function ScrollBox_GetControlCount(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ScrollBox_GetHandle(AObj: TScrollBox): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function ScrollBox_GetParentWindow(AObj: TScrollBox): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ScrollBox_SetParentWindow(AObj: TScrollBox; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ScrollBox_GetUseDockManager(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure ScrollBox_SetUseDockManager(AObj: TScrollBox; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function ScrollBox_GetAction(AObj: TScrollBox): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure ScrollBox_SetAction(AObj: TScrollBox; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure ScrollBox_GetBoundsRect(AObj: TScrollBox; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ScrollBox_SetBoundsRect(AObj: TScrollBox; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ScrollBox_GetClientHeight(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ScrollBox_SetClientHeight(AObj: TScrollBox; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ScrollBox_GetClientOrigin(AObj: TScrollBox; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure ScrollBox_GetClientRect(AObj: TScrollBox; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ScrollBox_GetClientWidth(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ScrollBox_SetClientWidth(AObj: TScrollBox; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function ScrollBox_GetControlState(AObj: TScrollBox): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure ScrollBox_SetControlState(AObj: TScrollBox; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function ScrollBox_GetControlStyle(AObj: TScrollBox): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure ScrollBox_SetControlStyle(AObj: TScrollBox; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function ScrollBox_GetFloating(AObj: TScrollBox): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function ScrollBox_GetParent(AObj: TScrollBox): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ScrollBox_SetParent(AObj: TScrollBox; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function ScrollBox_GetLeft(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure ScrollBox_SetLeft(AObj: TScrollBox; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function ScrollBox_GetTop(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure ScrollBox_SetTop(AObj: TScrollBox; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function ScrollBox_GetWidth(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure ScrollBox_SetWidth(AObj: TScrollBox; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function ScrollBox_GetHeight(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure ScrollBox_SetHeight(AObj: TScrollBox; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function ScrollBox_GetCursor(AObj: TScrollBox): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ScrollBox_SetCursor(AObj: TScrollBox; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function ScrollBox_GetHint(AObj: TScrollBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure ScrollBox_SetHint(AObj: TScrollBox; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function ScrollBox_GetComponentCount(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ScrollBox_GetComponentIndex(AObj: TScrollBox): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ScrollBox_SetComponentIndex(AObj: TScrollBox; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ScrollBox_GetOwner(AObj: TScrollBox): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function ScrollBox_GetName(AObj: TScrollBox): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure ScrollBox_SetName(AObj: TScrollBox; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function ScrollBox_GetTag(AObj: TScrollBox): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ScrollBox_SetTag(AObj: TScrollBox; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function ScrollBox_GetDockClients(AObj: TScrollBox; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function ScrollBox_GetControls(AObj: TScrollBox; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ScrollBox_GetComponents(AObj: TScrollBox; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function ScrollBox_StaticClassType: TClass; extdecl;
begin
  Result := TScrollBox;
end;

exports
  ScrollBox_Create,
  ScrollBox_Free,
  ScrollBox_CanFocus,
  ScrollBox_ContainsControl,
  ScrollBox_ControlAtPos,
  ScrollBox_DisableAlign,
  ScrollBox_EnableAlign,
  ScrollBox_FindChildControl,
  ScrollBox_FlipChildren,
  ScrollBox_Focused,
  ScrollBox_HandleAllocated,
  ScrollBox_InsertControl,
  ScrollBox_Invalidate,
  ScrollBox_RemoveControl,
  ScrollBox_Realign,
  ScrollBox_Repaint,
  ScrollBox_ScaleBy,
  ScrollBox_ScrollBy,
  ScrollBox_SetBounds,
  ScrollBox_SetFocus,
  ScrollBox_Update,
  ScrollBox_BringToFront,
  ScrollBox_ClientToScreen,
  ScrollBox_ClientToParent,
  ScrollBox_Dragging,
  ScrollBox_HasParent,
  ScrollBox_Hide,
  ScrollBox_Perform,
  ScrollBox_Refresh,
  ScrollBox_ScreenToClient,
  ScrollBox_ParentToClient,
  ScrollBox_SendToBack,
  ScrollBox_Show,
  ScrollBox_GetTextBuf,
  ScrollBox_GetTextLen,
  ScrollBox_SetTextBuf,
  ScrollBox_FindComponent,
  ScrollBox_GetNamePath,
  ScrollBox_Assign,
  ScrollBox_ClassType,
  ScrollBox_ClassName,
  ScrollBox_InstanceSize,
  ScrollBox_InheritsFrom,
  ScrollBox_Equals,
  ScrollBox_GetHashCode,
  ScrollBox_ToString,
  ScrollBox_GetAlign,
  ScrollBox_SetAlign,
  ScrollBox_GetAnchors,
  ScrollBox_SetAnchors,
  ScrollBox_GetAutoSize,
  ScrollBox_SetAutoSize,
  ScrollBox_GetBiDiMode,
  ScrollBox_SetBiDiMode,
  ScrollBox_GetBorderStyle,
  ScrollBox_SetBorderStyle,
  ScrollBox_GetDockSite,
  ScrollBox_SetDockSite,
  ScrollBox_GetDoubleBuffered,
  ScrollBox_SetDoubleBuffered,
  ScrollBox_GetDragCursor,
  ScrollBox_SetDragCursor,
  ScrollBox_GetDragKind,
  ScrollBox_SetDragKind,
  ScrollBox_GetDragMode,
  ScrollBox_SetDragMode,
  ScrollBox_GetEnabled,
  ScrollBox_SetEnabled,
  ScrollBox_GetColor,
  ScrollBox_SetColor,
  ScrollBox_GetFont,
  ScrollBox_SetFont,
  ScrollBox_GetParentColor,
  ScrollBox_SetParentColor,
  ScrollBox_GetParentFont,
  ScrollBox_SetParentFont,
  ScrollBox_GetParentShowHint,
  ScrollBox_SetParentShowHint,
  ScrollBox_GetPopupMenu,
  ScrollBox_SetPopupMenu,
  ScrollBox_GetShowHint,
  ScrollBox_SetShowHint,
  ScrollBox_GetTabOrder,
  ScrollBox_SetTabOrder,
  ScrollBox_GetTabStop,
  ScrollBox_SetTabStop,
  ScrollBox_GetVisible,
  ScrollBox_SetVisible,
  ScrollBox_SetOnClick,
  ScrollBox_SetOnDblClick,
  ScrollBox_SetOnDockDrop,
  ScrollBox_SetOnDragDrop,
  ScrollBox_SetOnDragOver,
  ScrollBox_SetOnEndDrag,
  ScrollBox_SetOnEnter,
  ScrollBox_SetOnExit,
  ScrollBox_SetOnGetSiteInfo,
  ScrollBox_SetOnMouseDown,
  ScrollBox_SetOnMouseEnter,
  ScrollBox_SetOnMouseLeave,
  ScrollBox_SetOnMouseMove,
  ScrollBox_SetOnMouseUp,
  ScrollBox_SetOnMouseWheel,
  ScrollBox_SetOnMouseWheelDown,
  ScrollBox_SetOnMouseWheelUp,
  ScrollBox_SetOnResize,
  ScrollBox_SetOnUnDock,
  ScrollBox_GetDockClientCount,
  ScrollBox_GetVisibleDockClientCount,
  ScrollBox_GetBrush,
  ScrollBox_GetControlCount,
  ScrollBox_GetHandle,
  ScrollBox_GetParentWindow,
  ScrollBox_SetParentWindow,
  ScrollBox_GetUseDockManager,
  ScrollBox_SetUseDockManager,
  ScrollBox_GetAction,
  ScrollBox_SetAction,
  ScrollBox_GetBoundsRect,
  ScrollBox_SetBoundsRect,
  ScrollBox_GetClientHeight,
  ScrollBox_SetClientHeight,
  ScrollBox_GetClientOrigin,
  ScrollBox_GetClientRect,
  ScrollBox_GetClientWidth,
  ScrollBox_SetClientWidth,
  ScrollBox_GetControlState,
  ScrollBox_SetControlState,
  ScrollBox_GetControlStyle,
  ScrollBox_SetControlStyle,
  ScrollBox_GetFloating,
  ScrollBox_GetParent,
  ScrollBox_SetParent,
  ScrollBox_GetLeft,
  ScrollBox_SetLeft,
  ScrollBox_GetTop,
  ScrollBox_SetTop,
  ScrollBox_GetWidth,
  ScrollBox_SetWidth,
  ScrollBox_GetHeight,
  ScrollBox_SetHeight,
  ScrollBox_GetCursor,
  ScrollBox_SetCursor,
  ScrollBox_GetHint,
  ScrollBox_SetHint,
  ScrollBox_GetComponentCount,
  ScrollBox_GetComponentIndex,
  ScrollBox_SetComponentIndex,
  ScrollBox_GetOwner,
  ScrollBox_GetName,
  ScrollBox_SetName,
  ScrollBox_GetTag,
  ScrollBox_SetTag,
  ScrollBox_GetDockClients,
  ScrollBox_GetControls,
  ScrollBox_GetComponents,
  ScrollBox_StaticClassType;

