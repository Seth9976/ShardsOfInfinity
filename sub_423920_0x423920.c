// 函数名称: sub_423920
// 虚拟地址: 0x423920
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_423920(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = data_65aabc
    void* esi = data_65aabc
    
    if (esi == 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_1 = sub_41b1b0(esi + 0x444, arg1)
    int32_t* eax_2 = sub_41b1b0(esi + 0x444, arg2)
    int32_t ebx
    ebx.b = sub_4238a0(eax_1)
    uint32_t eax_4 = sub_4238a0(eax_2)
    
    if (ebx.b != 0)
        if (eax_4.b != 0)
            goto label_423978
        
        eax_4.b = 1
        return eax_4
    
    if (eax_4.b == 0)
    label_423978:
        
        if (eax_1[2] == eax_2[2] && eax_1[3] == eax_2[3])
            int32_t eax_5
            eax_5.b = arg1 s< arg2
            return eax_5
    
    eax_4.b = 0
    return eax_4
}
