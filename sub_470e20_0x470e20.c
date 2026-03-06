// 函数名称: sub_470e20
// 虚拟地址: 0x470e20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_470e20(char* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg2
    ebx.b ^= 1
    
    if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_65ae04 + 0x18) != 0)
        HWND eax_2 = GetFocus()
        
        if ((eax_2 == data_ce1790 || eax_2 == 0) && (0x8000 & GetKeyState(0x12)) != 0
                && *(data_65ae04 + 0x18) != 0)
            HWND eax_5 = GetFocus()
            
            if (eax_5 == data_ce1790 || eax_5 == 0)
                return sub_470da0(eax_5, arg1, data_5cd9f8, ebx.b.d)
    
    void* eax_7 = sub_46b120(arg1, 0x7f)
    sub_4b8610(eax_7, eax_7, &data_5b1d6c, 0x7f, zx.d(ebx.b))
    return sub_46e560(arg1)
}
