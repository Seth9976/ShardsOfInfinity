// 函数名称: sub_4441f0
// 虚拟地址: 0x4441f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4441f0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* ecx_1 = data_65aabc
    
    if (ecx_1 == 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edx = data_5bcd60
    int32_t esi = data_5bcd64
    int32_t result = edx & esi
    
    if (result != 0xffffffff)
        int32_t temp0_1 = ecx_1[1]
        
        if (temp0_1 s> esi)
            return result
        
        if (temp0_1 s>= esi && *ecx_1 u>= edx)
            return result
    
    int32_t var_14_1 = 0xffffffff
    return sub_469930(arg1)
}
