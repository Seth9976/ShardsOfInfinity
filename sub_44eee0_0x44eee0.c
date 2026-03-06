// 函数名称: sub_44eee0
// 虚拟地址: 0x44eee0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_44eee0(char* arg1)
{
    // 第一条实际指令: char* ebx = arg1
    char* ebx = arg1
    char* eax = ebx
    void* edx = &eax[1]
    
    do
        arg1.b = *eax
        eax = &eax[1]
    while (arg1.b != 0)
    
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, eax - edx + 1)
    sub_51d5b0(GlobalLock(hMem), ebx, eax - edx + 1)
    GlobalUnlock(hMem)
    OpenClipboard(nullptr)
    EmptyClipboard()
    SetClipboardData(1, hMem)
    return CloseClipboard() __tailcall
}
