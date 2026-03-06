// 函数名称: sub_48b160
// 虚拟地址: 0x48b160
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_48b160(int32_t* arg1, void* arg2))[0x4]
{
    // 第一条实际指令: int32_t* var_c = arg1
    int32_t* var_c = arg1
    void* eax = *(arg2 + 0xc)
    
    if (eax == 0)
        sub_44e4d0(eax, &data_5559b1, "pDefMap->definitionSize != 0", 
            "c:\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t (* result)[0x4] = _memset(arg1, 0, eax)
    
    if (*(arg2 + 8) != 0)
        for (int32_t i = 0; i != 0xffffffff; )
            int32_t ecx_2 = i * 0xf
            i += 1
            void* edx = *(arg2 + 4) + (ecx_2 << 2)
            
            if (i s>= *(arg2 + 8))
                i = 0xffffffff
            
            result = sub_48af50(0xffffffff, *(edx + 0xc), arg1, edx)
    
    return result
}
