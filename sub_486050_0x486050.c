// 函数名称: sub_486050
// 虚拟地址: 0x486050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_486050(int32_t arg1, int32_t arg2, int32_t* arg3, float arg4 @ xmm1, int128_t* arg5, int128_t* arg6)
{
    // 第一条实际指令: arg4 - 1f
    arg4 - 1f
    int32_t esi = arg2
    arg1:1.b = (arg4 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg4, 1f) ? 1 : 0) << 2 | (arg4 < 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1 && esi s>= 0)
        int32_t temp1_1
        
        do
            void* eax = sub_485490(arg3, esi)
            
            if (*(eax + 4) == 6)
                float xmm0_6 = arg4 - 0f
                float xmm3
                
                if (not(0 f< xmm0_6))
                    xmm3 = (zx.o(0)).d
                else if (xmm0_6 < 1f)
                    xmm3 = sub_4145f0(4, xmm0_6, (zx.o(0)).d, 1f)
                else
                    xmm3 = 1f
                
                int32_t ecx_3 = arg6[5].d
                int128_t xmm0_8 = *arg6
                int128_t xmm1_1 = arg6[1]
                int128_t xmm4 = arg6[3]
                int128_t xmm5 = arg6[4]
                int128_t xmm3_1 = arg6[2]
                int128_t var_64
                var_64:4.d = (0f f- *(eax + 0x60)) * xmm3 f+ *(eax + 0x60) f+ xmm0_8:4.d
                var_64:8.d = ((1f f- *(eax + 0x54)) * xmm3 f+ *(eax + 0x54)) f* xmm0_8:8.d
                var_64.d = (0f f- *(eax + 0x5c)) * xmm3 f+ *(eax + 0x5c) f+ xmm0_8
                *arg5 = var_64
                arg5[1] = xmm1_1
                arg5[2] = xmm3_1
                arg5[3] = xmm4
                arg5[4] = xmm5
                arg5[5].d = ecx_3
                return arg5
            
            temp1_1 = esi
            esi -= 1
        while (temp1_1 - 1 s>= 0)
    
    *arg5 = *arg6
    arg5[1] = arg6[1]
    arg5[2] = arg6[2]
    arg5[3] = arg6[3]
    int32_t ecx_2 = arg6[5].d
    arg5[4] = arg6[4]
    arg5[5].d = ecx_2
    return arg5
}
