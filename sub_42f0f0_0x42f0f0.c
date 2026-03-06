// 函数名称: sub_42f0f0
// 虚拟地址: 0x42f0f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_42f0f0(int32_t arg1, int32_t arg2, char** arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: int32_t eax = *(arg5 + 4)
    int32_t eax = *(arg5 + 4)
    char** var_c = arg3
    
    if (eax != 0xa)
        if (eax != 8)
            if (eax != 5)
                goto label_42f14e
            
            sub_44f240(arg3, "End turn")
            return arg3
        
        if (*(arg5 + 0x28) != 0)
        label_42f14e:
            int32_t edi_1 = *(arg4 * 0x9c + arg2 + 0x1e58)
            int32_t eax_6 = *(*(sub_445bb0(arg2, (*(arg5 + 8)).w) + 0x10) + 0x24)
            
            switch (*(arg5 + 4))
                case 0
                    int32_t var_20 = eax_6
                    int32_t var_24 = edi_1
                    sub_44f980(arg3, "%s plays %s")
                    return arg3
                case 1
                    int32_t var_20_1 = eax_6
                    int32_t var_24_1 = edi_1
                    sub_44f980(arg3, "%s uses %s")
                    return arg3
                case 2
                    int32_t var_20_2 = eax_6
                    int32_t var_24_2 = edi_1
                    
                    if (*(arg5 + 0x2c) != 3)
                        sub_44f980(arg3, "%s buys %s")
                        return arg3
                    
                    sub_44f980(arg3, "%s mercs %s")
                    return arg3
                case 4, 0xb
                    int32_t var_20_3 = eax_6
                    int32_t var_24_3 = edi_1
                    sub_44f980(arg3, "%s destroys %s")
                    return arg3
                case 6
                    int32_t var_20_4 = eax_6
                    int32_t var_24_4 = edi_1
                    sub_44f980(arg3, "%s acquires %s")
                    return arg3
                case 7
                    int32_t var_20_5 = eax_6
                    int32_t var_24_5 = edi_1
                    sub_44f980(arg3, "%s copies %s")
                    return arg3
                case 8
                    int32_t var_20_6 = eax_6
                    int32_t var_24_6 = edi_1
                    sub_44f980(arg3, "%s banished %s")
                    return arg3
                case 0xc
                    int32_t var_20_7 = eax_6
                    int32_t var_24_7 = edi_1
                    sub_44f980(arg3, "%s returns %s")
                    return arg3
    
    sub_44f240(arg3, &data_5559b1)
    return arg3
}
