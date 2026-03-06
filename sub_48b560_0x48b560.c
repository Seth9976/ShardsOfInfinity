// 函数名称: sub_48b560
// 虚拟地址: 0x48b560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_48b560(uint32_t arg1, void* arg2, int32_t* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t* var_c = arg3
    int32_t* var_c = arg3
    
    if (*(arg2 + 8) == 0)
        return 
    
    for (int32_t i = 0; i != 0xffffffff; )
        int32_t ecx_2 = i * 0xf
        i += 1
        
        if (i s>= *(arg2 + 8))
            i = 0xffffffff
        
        sub_48b3f0(0xffffffff, *(arg2 + 4) + (ecx_2 << 2), arg3, arg4)
}
