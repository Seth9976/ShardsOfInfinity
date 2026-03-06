// 函数名称: sub_476650
// 虚拟地址: 0x476650
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_476650()
{
    // 第一条实际指令: int32_t esi = data_5cea2c
    int32_t esi = data_5cea2c
    int32_t var_c
    uint32_t eax
    char const* const ecx
    
    if (esi s> 0)
        int32_t ecx_1 = 0xffffffff
        eax = 0
        
        if (esi s> 0)
            do
                int32_t edx_1 = (&data_5cda2c)[eax]
                
                if (ecx_1 == 0xffffffff || ecx_1 s< edx_1)
                    ecx_1 = edx_1
                
                eax += 1
            while (eax s< esi)
            
            if (ecx_1 != 0xffffffff)
                return sub_4694c0(eax, data_5cd9fc, data_5cd9f8, ecx_1)
        
        char const* const var_8_2 = "UI2GetLowestEl"
        var_c = 0x2edd
        ecx = "bestIndex != -1"
    else
        char const* const var_8 = "UI2GetLowestEl"
        var_c = 0x2ed0
        ecx = "gUI2Editor.s.activeSetCount > 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\ui2.cpp", var_c, "UI2GetLowestEl")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
