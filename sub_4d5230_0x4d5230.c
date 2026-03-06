// 函数名称: sub_4d5230
// 虚拟地址: 0x4d5230
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4d5230()
{
    // 第一条实际指令: char* ecx
    char* ecx
    
    if (data_ce26d8 != data_ce26dc && sub_4caf20(ecx).b != 0)
        int32_t eax_1 = data_ce26d8
        int32_t* ecx_1 = data_65ae00
        int32_t esi = *((eax_1 << 2) + &data_ce24d8)
        data_ce26d8 = eax_1 + 1
        (*(*ecx_1 + 4))()
        sub_4d4fb0()
        void* eax_4 = data_65ae04
        HWND hWnd = data_ce1790
        *(eax_4 + 0x1c) = 1
        *(eax_4 + 0x28) = 0
        *(eax_4 + 0x20) = 0
        *(eax_4 + 0x24) = esi
        SetFocus(hWnd)
        HWND eax_5
        eax_5.b = 1
        return eax_5
    
    struct _EXCEPTION_REGISTRATION_RECORD** eax
    eax.b = 0
    return eax
}
