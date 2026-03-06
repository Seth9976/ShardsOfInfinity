// 函数名称: sub_4d51d0
// 虚拟地址: 0x4d51d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4d51d0()
{
    // 第一条实际指令: char* ecx
    char* ecx
    
    if (data_ce26d8 s> 1 && sub_4caf20(ecx) != 0)
        int32_t* ecx_1 = data_65ae00
        int32_t eax_2 = data_ce26d8 - 1
        data_ce26d8 = eax_2
        int32_t esi = (&data_ce24d4)[eax_2]
        (*(*ecx_1 + 4))()
        sub_4d4fb0()
        void* eax_4 = data_65ae04
        HWND hWnd = data_ce1790
        *(eax_4 + 0x1c) = 1
        *(eax_4 + 0x28) = 0
        *(eax_4 + 0x20) = 0
        *(eax_4 + 0x24) = esi
        SetFocus(hWnd)
        HWND result
        result.b = 1
        return result
    
    return 0
}
