// 函数名称: sub_4e05f0
// 虚拟地址: 0x4e05f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4e05f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    
    if (arg1[1] == 0)
        return 
    
    sub_4e0590(arg1)
    int32_t var_10_1 = *arg1
    uint32_t eax = _fwrite(0x586f8c, 1, 2)
    
    if (eax != 2)
    label_4e0658:
        sub_44e4d0(eax, &data_5559b1, "resultCount == len", "c:\ax2017\engine\xmlwriter.cpp", 0x29, 
            "sXmlEmit")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi_1 = 0
    
    if (arg1[2] s<= 0)
        return 
    
    while (true)
        int32_t var_10_2 = *arg1
        eax = _fwrite(0x59a280, 1, 2)
        
        if (eax != 2)
            break
        
        esi_1 += 1
        
        if (esi_1 s>= arg1[2])
            return 
    
    goto label_4e0658
}
