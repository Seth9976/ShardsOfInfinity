// 函数名称: sub_503110
// 虚拟地址: 0x503110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

WPARAM __convention("regparm")sub_503110(char arg1, int32_t arg2, HWND arg3, char* arg4)
{
    // 第一条实际指令: HWND var_8 = arg3
    HWND var_8 = arg3
    char* edx = arg4
    
    do
        arg1 = *edx
        edx = &edx[1]
    while (arg1 != 0)
    
    if (edx != &edx[1] && SendMessageA(arg3, 0x18b, 0, 0) s> 0)
        WPARAM wParam = 0
        
        if (SendMessageA(arg3, 0x18b, 0, 0) s> 0)
            LRESULT eax_4
            
            do
                LRESULT eax_2 = SendMessageA(arg3, 0x199, wParam, 0)
                
                if (eax_2 != 0xffffffff && eax_2 != 0 && __mbsicmp(*eax_2, arg4) == 0)
                    return wParam
                
                wParam += 1
                eax_4 = SendMessageA(arg3, 0x18b, 0, 0)
            while (wParam s< eax_4)
    
    return 0xffffffff
}
