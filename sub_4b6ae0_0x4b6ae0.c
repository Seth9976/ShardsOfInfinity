// 函数名称: sub_4b6ae0
// 虚拟地址: 0x4b6ae0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4b6ae0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebx = data_cdf428
    int32_t* ebx = data_cdf428
    
    if (ebx == 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void** ebx_1 = *ebx
    int32_t edx = 0
    int32_t xmm1 = (zx.o(0)).d
    void* i = nullptr
    label_4b6b05:
    int32_t var_8_1 = xmm1
    int32_t var_c_1 = edx
    label_4b6b10:
    void* i_1
    
    if (i != 0)
        i_1 = *ebx_1
        i += 0x6c
    else
        i = *ebx_1
        i_1 = i
    
    for (; i u< ebx_1[1] * 0x6c + i_1; i += 0x6c)
        int32_t j = *(i + 0x68)
        
        if ((j & 0xffff0000) != 0)
            int32_t* eax_5 = *arg2
            
            if (eax_5 != 0)
                int32_t* eax_6 = *eax_5
                
                if (eax_6 != 0)
                    while (*eax_6 != j)
                        eax_6 = eax_6[1]
                        
                        if (eax_6 == 0)
                            goto label_4b6bbf
                    
                    goto label_4b6b10
            
        label_4b6bbf:
            int32_t eax_7 = arg2[1]
            
            if (eax_7 != 0)
                xmm1 = var_8_1
                edx = var_c_1
                
                if (eax_7(arg2, j) == 0)
                    goto label_4b6b10
            
            uint32_t eax_9 = zx.d(arg2[3].b)
            xmm1 = var_8_1
            edx = var_c_1
            int32_t var_14
            
            if (sub_4b69a0(eax_9, arg1, i, eax_9.b, &var_14) == 0)
                goto label_4b6b10
            
            int32_t xmm0_5 = var_14
            
            if (edx != 0 && xmm1 f<= xmm0_5)
                goto label_4b6b10
            
            edx = *(i + 0x68)
            xmm1 = xmm0_5
            goto label_4b6b05
    
    if (edx == 0)
        void* eax_2
        eax_2.b = 0
        return eax_2
    
    float xmm4_1[0x4] = *arg1 + arg1[3] f* xmm1
    int64_t xmm1_2 = arg1[1] f+ arg1[4] f* xmm1
    float xmm0_4 = arg1[2] f+ arg1[5] f* xmm1
    arg2[7] = edx
    *(arg2 + 0x10) = _mm_unpacklo_ps(xmm4_1, xmm1_2)
    arg2[6] = xmm0_4
    float eax_4
    eax_4.b = 1
    return eax_4
}
