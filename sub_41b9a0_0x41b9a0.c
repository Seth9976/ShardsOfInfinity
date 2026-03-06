// 函数名称: sub_41b9a0
// 虚拟地址: 0x41b9a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_41b9a0()
{
    // 第一条实际指令: int32_t eax_13 = data_65ac14
    int32_t eax_13 = data_65ac14
    
    if (eax_13 == 0)
        return sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x10
    
    if (eax_13 == 1)
        return sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x118
    
    int32_t esi = data_65ac18
    void* eax_4 = sub_411690()
    
    if (esi != 0)
        uint32_t eax_5 = zx.d(esi.w)
        
        if (eax_5 u< *(eax_4 + 0x448))
            void* eax_7 = eax_5 * 0x1d0 + *(eax_4 + 0x444)
            
            if (*(eax_7 + 0x1c8) == esi)
                if (data_65ac14 == 2)
                    return &sub_416cc0(data_65ac18)[2]
                
                sub_44e4d0(eax_7, &data_5559b1, "gCreateDlg.style == DISPLAY_MULTIPAYER", 
                    "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xaf, "GetActiveGameSetup")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
    
    return sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x118
}
