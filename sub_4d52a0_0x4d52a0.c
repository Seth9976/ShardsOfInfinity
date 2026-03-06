// 函数名称: sub_4d52a0
// 虚拟地址: 0x4d52a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4d52a0(char* arg1, char arg2)
{
    // 第一条实际指令: char* var_4 = arg1
    char* var_4 = arg1
    int32_t ebx
    ebx.b = arg2
    char eax = sub_4caf20(arg1)
    
    if (eax == 0)
        return eax
    
    if (ebx.b != 0)
        data_ce1afc = arg1
        sub_4d28d0()
    
    int32_t* ecx_1 = data_65ae00
    *((data_ce26d8 << 2) + &data_ce24d8) = arg1
    int32_t eax_3 = data_ce26d8 + 1
    data_ce26d8 = eax_3
    data_ce26dc = eax_3
    (*(*ecx_1 + 4))()
    sub_4d4fb0()
    void* eax_5 = data_65ae04
    HWND hWnd = data_ce1790
    *(eax_5 + 0x1c) = 1
    *(eax_5 + 0x28) = 0
    *(eax_5 + 0x20) = 0
    *(eax_5 + 0x24) = arg1
    SetFocus(hWnd)
    HWND eax_6
    eax_6.b = 1
    return eax_6
}
