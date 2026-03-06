// 函数名称: sub_4e0590
// 虚拟地址: 0x4e0590
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4e0590(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] != 1)
    if (arg1[1] != 1)
        return 
    
    int32_t var_8_1 = *arg1
    uint32_t eax = _fwrite(0x59a27c, 1, 1)
    
    if (eax != 1)
        sub_44e4d0(eax, &data_5559b1, "resultCount == len", "c:\ax2017\engine\xmlwriter.cpp", 0x29, 
            "sXmlEmit")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    arg1[1] = 3
}
