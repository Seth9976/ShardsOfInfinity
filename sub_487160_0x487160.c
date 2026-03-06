// 函数名称: sub_487160
// 虚拟地址: 0x487160
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_487160(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x1600)
    int32_t edx = *(arg1 + 0x1600)
    int32_t eax
    
    if (edx s<= 0)
        sub_44e4d0(eax, &data_5559b1, "stack.numEntries > 0", "c:\ax2017\engine\uidef.cpp", 0x683, 
            "PopOne")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edx_1 = edx - 1
    
    if (edx - 1 s< 0)
        return 
    
    void* ecx_1 = arg1 + 0x54 + edx_1 * 0x58
    int32_t temp1_1
    
    do
        eax = *ecx_1
        
        if (eax s>= 0)
            if (eax != 1)
                *ecx_1 = eax - 1
            else
                *(arg1 + 0x1600) -= 1
        
        ecx_1 -= 0x58
        temp1_1 = edx_1
        edx_1 -= 1
    while (temp1_1 - 1 s>= 0)
}
