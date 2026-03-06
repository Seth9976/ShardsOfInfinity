// 函数名称: sub_469440
// 虚拟地址: 0x469440
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_469440(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: if (*(arg3 + 0x6a4) != 0 && *(arg3 + 0x6a8) == arg4 && *(arg3 + 0x784) != 0)
    if (*(arg3 + 0x6a4) != 0 && *(arg3 + 0x6a8) == arg4 && *(arg3 + 0x784) != 0)
        return arg3
    
    int32_t i = 0
    
    if (*(arg3 + 0x7f4) s> 0)
        do
            if (*(sub_4627e0(arg3, i) + 0x6a4) == arg2)
                int32_t eax_3 = sub_469440(arg4)
                
                if (eax_3 != 0)
                    return eax_3
            
            i += 1
        while (i s< *(arg3 + 0x7f4))
    
    return 0
}
