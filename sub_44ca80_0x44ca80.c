// 函数名称: sub_44ca80
// 虚拟地址: 0x44ca80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_44ca80()
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t* result = sub_446460(eax, 2, &data_dfd4c8, 0xffffffff)
    int32_t* i = result
    
    while (i s> 0)
        int32_t edx_1 = 0
        int32_t eax_2 = data_dfee9c * 0x41c64e6d + 0x3039
        data_dfee9c = eax_2
        int32_t eax_4 = sub_446a60(divu.dp.d(edx_1:eax_2, i), 2, &data_dfd4c8, 0xffffffff, 
            modu.dp.d(edx_1:eax_2, i))
        int32_t var_8
        *sub_4460d0(&var_8, 2, &data_dfd4c8, 0xffffffff, &var_8) = eax_4
        uint32_t eax_7 = zx.d(eax_4.w)
        
        if (eax_7 u>= 0xc8)
            sub_44e4d0(eax_7, &data_5559b1, "idNoMimic < MAX_CARDS", 
                "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x90, "CardGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t ecx_1 = var_8
        i -= 1
        result = (eax_7 << 5) + 0xdfd4cc
        result[1] = 0xffffffff
        *result = 2
        result[3] = ecx_1
        result[2] = 0
    
    return result
}
