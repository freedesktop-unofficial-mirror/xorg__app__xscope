#include "x11.h"

/* common.c */
void enterprocedure(char *s);
void warn(char *s);
void panic(char *s);
void *Malloc(long n);
void Free(void *p);
void SetSignalHandling(void);
void SetUpConnectionSocket(int iport, int (*connectionFunc)());
/* decode11.c */
void InitReplyQ(void);
void FlushReplyQ(FD fd);
void KeepLastReplyExpected(void);
void DecodeRequest(FD fd, unsigned char *buf, long n);
void DecodeReply(FD fd, unsigned char *buf, long n);
void DecodeError(FD fd, unsigned char *buf, long n);
void DecodeEvent(FD fd, unsigned char *buf, long n);
/* print11.c */
void PrintSetUpMessage(unsigned char *buf);
void PrintSetUpReply(unsigned char *buf);
void RequestError(unsigned char *buf);
void ValueError(unsigned char *buf);
void WindowError(unsigned char *buf);
void PixmapError(unsigned char *buf);
void AtomError(unsigned char *buf);
void CursorError(unsigned char *buf);
void FontError(unsigned char *buf);
void MatchError(unsigned char *buf);
void DrawableError(unsigned char *buf);
void AccessError(unsigned char *buf);
void AllocError(unsigned char *buf);
void ColormapError(unsigned char *buf);
void GContextError(unsigned char *buf);
void IDChoiceError(unsigned char *buf);
void NameError(unsigned char *buf);
void LengthError(unsigned char *buf);
void ImplementationError(unsigned char *buf);
void KeyPressEvent(unsigned char *buf);
void KeyReleaseEvent(unsigned char *buf);
void ButtonPressEvent(unsigned char *buf);
void ButtonReleaseEvent(unsigned char *buf);
void MotionNotifyEvent(unsigned char *buf);
void EnterNotifyEvent(unsigned char *buf);
void LeaveNotifyEvent(unsigned char *buf);
void FocusInEvent(unsigned char *buf);
void FocusOutEvent(unsigned char *buf);
void KeymapNotifyEvent(unsigned char *buf);
void ExposeEvent(unsigned char *buf);
void GraphicsExposureEvent(unsigned char *buf);
void NoExposureEvent(unsigned char *buf);
void VisibilityNotifyEvent(unsigned char *buf);
void CreateNotifyEvent(unsigned char *buf);
void DestroyNotifyEvent(unsigned char *buf);
void UnmapNotifyEvent(unsigned char *buf);
void MapNotifyEvent(unsigned char *buf);
void MapRequestEvent(unsigned char *buf);
void ReparentNotifyEvent(unsigned char *buf);
void ConfigureNotifyEvent(unsigned char *buf);
void ConfigureRequestEvent(unsigned char *buf);
void GravityNotifyEvent(unsigned char *buf);
void ResizeRequestEvent(unsigned char *buf);
void CirculateNotifyEvent(unsigned char *buf);
void CirculateRequestEvent(unsigned char *buf);
void PropertyNotifyEvent(unsigned char *buf);
void SelectionClearEvent(unsigned char *buf);
void SelectionRequestEvent(unsigned char *buf);
void SelectionNotifyEvent(unsigned char *buf);
void ColormapNotifyEvent(unsigned char *buf);
void ClientMessageEvent(unsigned char *buf);
void MappingNotifyEvent(unsigned char *buf);
void CreateWindow(unsigned char *buf);
void ChangeWindowAttributes(unsigned char *buf);
void GetWindowAttributes(unsigned char *buf);
void GetWindowAttributesReply(unsigned char *buf);
void DestroyWindow(unsigned char *buf);
void DestroySubwindows(unsigned char *buf);
void ChangeSaveSet(unsigned char *buf);
void ReparentWindow(unsigned char *buf);
void MapWindow(unsigned char *buf);
void MapSubwindows(unsigned char *buf);
void UnmapWindow(unsigned char *buf);
void UnmapSubwindows(unsigned char *buf);
void ConfigureWindow(unsigned char *buf);
void CirculateWindow(unsigned char *buf);
void GetGeometry(unsigned char *buf);
void GetGeometryReply(unsigned char *buf);
void QueryTree(unsigned char *buf);
void QueryTreeReply(unsigned char *buf);
void InternAtom(unsigned char *buf);
void InternAtomReply(unsigned char *buf);
void GetAtomName(unsigned char *buf);
void GetAtomNameReply(unsigned char *buf);
void ChangeProperty(unsigned char *buf);
void DeleteProperty(unsigned char *buf);
void GetProperty(unsigned char *buf);
void GetPropertyReply(unsigned char *buf);
void ListProperties(unsigned char *buf);
void ListPropertiesReply(unsigned char *buf);
void SetSelectionOwner(unsigned char *buf);
void GetSelectionOwner(unsigned char *buf);
void GetSelectionOwnerReply(unsigned char *buf);
void ConvertSelection(unsigned char *buf);
void SendEvent(unsigned char *buf);
void GrabPointer(unsigned char *buf);
void GrabPointerReply(unsigned char *buf);
void UngrabPointer(unsigned char *buf);
void GrabButton(unsigned char *buf);
void UngrabButton(unsigned char *buf);
void ChangeActivePointerGrab(unsigned char *buf);
void GrabKeyboard(unsigned char *buf);
void GrabKeyboardReply(unsigned char *buf);
void UngrabKeyboard(unsigned char *buf);
void GrabKey(unsigned char *buf);
void UngrabKey(unsigned char *buf);
void AllowEvents(unsigned char *buf);
void GrabServer(unsigned char *buf);
void UngrabServer(unsigned char *buf);
void QueryPointer(unsigned char *buf);
void QueryPointerReply(unsigned char *buf);
void GetMotionEvents(unsigned char *buf);
void GetMotionEventsReply(unsigned char *buf);
void TranslateCoordinates(unsigned char *buf);
void TranslateCoordinatesReply(unsigned char *buf);
void WarpPointer(unsigned char *buf);
void SetInputFocus(unsigned char *buf);
void GetInputFocus(unsigned char *buf);
void GetInputFocusReply(unsigned char *buf);
void QueryKeymap(unsigned char *buf);
void QueryKeymapReply(unsigned char *buf);
void OpenFont(unsigned char *buf);
void CloseFont(unsigned char *buf);
void QueryFont(unsigned char *buf);
void QueryFontReply(unsigned char *buf);
void QueryTextExtents(unsigned char *buf);
void QueryTextExtentsReply(unsigned char *buf);
void ListFonts(unsigned char *buf);
void ListFontsReply(unsigned char *buf);
void ListFontsWithInfo(unsigned char *buf);
void ListFontsWithInfoReply(unsigned char *buf);
void SetFontPath(unsigned char *buf);
void GetFontPath(unsigned char *buf);
void GetFontPathReply(unsigned char *buf);
void CreatePixmap(unsigned char *buf);
void FreePixmap(unsigned char *buf);
void CreateGC(unsigned char *buf);
void ChangeGC(unsigned char *buf);
void CopyGC(unsigned char *buf);
void SetDashes(unsigned char *buf);
void SetClipRectangles(unsigned char *buf);
void FreeGC(unsigned char *buf);
void ClearArea(unsigned char *buf);
void CopyArea(unsigned char *buf);
void CopyPlane(unsigned char *buf);
void PolyPoint(unsigned char *buf);
void PolyLine(unsigned char *buf);
void PolySegment(unsigned char *buf);
void PolyRectangle(unsigned char *buf);
void PolyArc(unsigned char *buf);
void FillPoly(unsigned char *buf);
void PolyFillRectangle(unsigned char *buf);
void PolyFillArc(unsigned char *buf);
void PutImage(unsigned char *buf);
void GetImage(unsigned char *buf);
void GetImageReply(unsigned char *buf);
void PolyText8(unsigned char *buf);
void PolyText16(unsigned char *buf);
void ImageText8(unsigned char *buf);
void ImageText16(unsigned char *buf);
void CreateColormap(unsigned char *buf);
void FreeColormap(unsigned char *buf);
void CopyColormapAndFree(unsigned char *buf);
void InstallColormap(unsigned char *buf);
void UninstallColormap(unsigned char *buf);
void ListInstalledColormaps(unsigned char *buf);
void ListInstalledColormapsReply(unsigned char *buf);
void AllocColor(unsigned char *buf);
void AllocColorReply(unsigned char *buf);
void AllocNamedColor(unsigned char *buf);
void AllocNamedColorReply(unsigned char *buf);
void AllocColorCells(unsigned char *buf);
void AllocColorCellsReply(unsigned char *buf);
void AllocColorPlanes(unsigned char *buf);
void AllocColorPlanesReply(unsigned char *buf);
void FreeColors(unsigned char *buf);
void StoreColors(unsigned char *buf);
void StoreNamedColor(unsigned char *buf);
void QueryColors(unsigned char *buf);
void QueryColorsReply(unsigned char *buf);
void LookupColor(unsigned char *buf);
void LookupColorReply(unsigned char *buf);
void CreateCursor(unsigned char *buf);
void CreateGlyphCursor(unsigned char *buf);
void FreeCursor(unsigned char *buf);
void RecolorCursor(unsigned char *buf);
void QueryBestSize(unsigned char *buf);
void QueryBestSizeReply(unsigned char *buf);
void QueryExtension(unsigned char *buf);
void QueryExtensionReply(unsigned char *buf);
void ListExtensions(unsigned char *buf);
void ListExtensionsReply(unsigned char *buf);
void ChangeKeyboardMapping(unsigned char *buf);
void GetKeyboardMapping(unsigned char *buf);
void GetKeyboardMappingReply(unsigned char *buf);
void ChangeKeyboardControl(unsigned char *buf);
void GetKeyboardControl(unsigned char *buf);
void GetKeyboardControlReply(unsigned char *buf);
void Bell(unsigned char *buf);
void ChangePointerControl(unsigned char *buf);
void GetPointerControl(unsigned char *buf);
void GetPointerControlReply(unsigned char *buf);
void SetScreenSaver(unsigned char *buf);
void GetScreenSaver(unsigned char *buf);
void GetScreenSaverReply(unsigned char *buf);
void ChangeHosts(unsigned char *buf);
void ListHosts(unsigned char *buf);
void ListHostsReply(unsigned char *buf);
void SetAccessControl(unsigned char *buf);
void SetCloseDownMode(unsigned char *buf);
void KillClient(unsigned char *buf);
void RotateProperties(unsigned char *buf);
void ForceScreenSaver(unsigned char *buf);
void SetPointerMapping(unsigned char *buf);
void SetPointerMappingReply(unsigned char *buf);
void GetPointerMapping(unsigned char *buf);
void GetPointerMappingReply(unsigned char *buf);
void SetModifierMapping(unsigned char *buf);
void SetModifierMappingReply(unsigned char *buf);
void GetModifierMapping(unsigned char *buf);
void GetModifierMappingReply(unsigned char *buf);
void NoOperation(unsigned char *buf);
/* prtype.c */
void SetIndentLevel(int which);
void DumpHexBuffer(unsigned char *buf, long n);
void DumpItem(char *name, FD fd, unsigned char *buf, long n);
void PrintField(unsigned char *buf, int start, int length, int FieldType, char *name);
long PrintList(unsigned char *buf, long number, int ListType, char *name);
long PrintListSTR(unsigned char *buf, long number, char *name);
int PrintBytes(unsigned char buf[], long number, char *name);
int PrintString8(unsigned char buf[], int number, char *name);
int PrintString16(unsigned char buf[], int number, char *name);
void PrintValues(unsigned char *control, int clength, int ctype, unsigned char *values, char *name);
int PrintTextList8(unsigned char *buf, int length, char *name);
int PrintTextList16(unsigned char *buf, int length, char *name);
/* scope.c */
void TimerExpired(void);
FD FDPair(FD fd);
FD ClientHalf(FD fd);
FD ServerHalf(FD fd);
char *ClientName(FD fd);
void NewConnection(FD fd);
/* server.c */
FD ConnectToServer(int report);
void ProcessBuffer(FD fd, unsigned char *buf, long n);
void ReportFromClient(FD fd, unsigned char *buf, long n);
void ReportFromServer(FD fd, unsigned char *buf, long n);
void PrintTime(void);
long pad(long n);
unsigned long ILong(unsigned char buf[]);
unsigned short IShort(unsigned char buf[]);
unsigned short IByte(unsigned char buf[]);
short IBool(unsigned char buf[]);
void StartClientConnection(FD fd);
void StopClientConnection(FD fd);
void StartServerConnection(FD fd);
void StopServerConnection(FD fd);
long StartSetUpMessage(FD fd, unsigned char *buf, long n);
long StartSetUpReply(FD fd, unsigned char *buf, long n);
/* table11.c */
void InitializeX11(void);

