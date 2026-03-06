// 函数名称: sub_5017c0
// 虚拟地址: 0x5017c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_5017c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = data_e47264
    void* eax = data_e47264
    int32_t ecx
    
    if (arg2 == 0 || (*(eax + 0x14) != arg2 && *(eax + 0x1c) != arg2 && *(eax + 0x20) != arg2
            && *(eax + 0x10) != arg2 && *(eax + 0xc) != arg2))
        ecx = 0
    else
        ecx = 1
    
    *(eax + 0x38) = ecx
    BOOL result = data_e47264
    
    if (*(result + 0x38) != 0)
        return result
    
    return RedrawWindow(*(result + 0x14), nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
}
