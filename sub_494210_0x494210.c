// 函数名称: sub_494210
// 虚拟地址: 0x494210
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_494210(int32_t arg1, int32_t* arg2, char** arg3, void* arg4, char* arg5, uint32_t arg6)
{
    // 第一条实际指令: char** var_c = arg3
    char** var_c = arg3
    char** result = sub_44f590(arg3, arg5)
    
    if (*(arg4 + 8) != 0)
        for (int32_t i = 0; i != 0xffffffff; )
            int32_t ecx_2 = i * 0xf
            i += 1
            int32_t* eax_1 = *(arg4 + 4) + (ecx_2 << 2)
            
            if (i s>= *(arg4 + 8))
                i = 0xffffffff
            
            result = sub_493c70(eax_1, arg2, arg3, eax_1[3], eax_1, arg6)
    
    return result
}
