// 函数名称: sub_4c8e60
// 虚拟地址: 0x4c8e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4c8e60(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: *arg3 = 0
    *arg3 = 0
    arg3[1] = 0
    void* eax
    int32_t edx
    eax, edx = sub_4c6d50()
    
    if (eax != 0)
        int32_t i = 0
        
        if (*(eax + 4) s> 0)
            do
                edx.b = 0
                int32_t eax_1
                int32_t edx_1
                eax_1, edx_1 = sub_4c70b0(i, edx.b)
                int32_t eax_3
                int32_t edx_2
                edx_2:eax_3 = sx.q(eax_1 - arg2)
                
                if ((eax_3 ^ edx_2) - edx_2 s< 5)
                    int32_t eax_7
                    edx_2:eax_7 = sx.q(edx_1 - arg4)
                    int32_t eax_9 = (eax_7 ^ edx_2) - edx_2
                    
                    if (eax_9 s< 5)
                        *arg3 = 1
                        arg3[1] = i
                        return eax_9
                
                edx_2.b = 1
                int32_t eax_10
                int32_t edx_3
                eax_10, edx_3 = sub_4c70b0(i, edx_2.b)
                int32_t eax_12
                edx:eax_12 = sx.q(eax_10 - arg2)
                
                if ((eax_12 ^ edx) - edx s< 5)
                    int32_t eax_16
                    edx:eax_16 = sx.q(edx_3 - arg4 - 5)
                    int32_t eax_18 = (eax_16 ^ edx) - edx
                    
                    if (eax_18 s< 0xa)
                        arg3[1] = i
                        *arg3 = 2
                        return eax_18
                
                i += 1
            while (i s< *(eax + 4))
        
        int128_t var_20
        int128_t xmm0_1 = *sub_4c7040(&var_20)
        eax = xmm0_1
        var_20 = xmm0_1
        
        if (arg2 s>= eax && arg2 s<= var_20:8.d && arg4 s>= var_20:4.d && arg4 s<= var_20:0xc.d)
            *arg3 = 3
    
    return eax
}
