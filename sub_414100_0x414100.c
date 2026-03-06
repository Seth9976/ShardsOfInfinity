// 函数名称: sub_414100
// 虚拟地址: 0x414100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_414100(int32_t arg1, int32_t arg2, int32_t* arg3, int64_t* arg4)
{
    // 第一条实际指令: int64_t* result = arg4
    int64_t* result = arg4
    int32_t* ebx = arg3
    int32_t* var_14 = &data_5bb160
    int32_t* var_c = ebx
    *result = 0
    result[1].d = 0
    *(result + 4) = 0xffffffff
    void* var_10 = nullptr
    void* eax = sub_414460(&data_5bb160, &var_10)
    void* edi = var_10
    
    if (edi != 0xffffffff)
        while (true)
            float xmm4_1 = *(edi + 0x610)
            int64_t var_28_1 = 0
            float xmm0_1 = *(edi + 0x608)
            int32_t var_20_1 = 0
            var_28_1:4.d = 0xffffffff
            
            if (not(xmm4_1 < xmm0_1))
                int32_t xmm3_1 = *(edi + 0x60c)
                int32_t xmm2_1 = *(edi + 0x614)
                
                if (not(xmm2_1 f< xmm3_1))
                    int32_t xmm1_1 = *ebx
                    
                    if (not(xmm1_1 f< xmm0_1))
                        int32_t xmm0_2 = ebx[1]
                        
                        if (not(xmm0_2 f< xmm3_1) && not(xmm4_1 f< xmm1_1) && not(xmm2_1 f< xmm0_2))
                            int32_t esi = 0
                            
                            if (*(edi + 0x400) s<= 0)
                            label_414242:
                                result = arg4
                            else
                                void* ebx_1 = edi + 0x404
                                
                                while (true)
                                    *ebx_1
                                    void var_48
                                    int128_t* eax_1 = sub_47a430(&var_48, 0)
                                    float xmm1_2[0x4] = *eax_1
                                    float xmm4_3 = _mm_shuffle_ps(xmm1_2, xmm1_2, 0xaa)
                                    
                                    if (not(xmm4_3 f< xmm1_2))
                                        float xmm0_3 = xmm1_2[3]
                                        float xmm2_2 = xmm1_2[1]
                                        
                                        if (not(xmm0_3 < xmm2_2))
                                            int32_t xmm3_2 = *var_c
                                            
                                            if (not(xmm3_2 f< xmm1_2))
                                                int32_t xmm1_3 = var_c[1]
                                                
                                                if (not(xmm1_3 f< xmm2_2) && not(xmm4_3 f< xmm3_2)
                                                        && xmm0_3 f>= xmm1_3)
                                                    int32_t eax_4 = *(edi + 0x604)
                                                    var_28_1:4.d = esi
                                                    result = arg4
                                                    var_28_1.d = edi
                                                    
                                                    if (esi != 0xffffffff && (
                                                            *(result + 4) == 0xffffffff
                                                            || eax_4 u> result[1].d))
                                                        *result = var_28_1
                                                        result[1].d = eax_4
                                                    
                                                    ebx = var_c
                                                    break
                                            
                                            esi += 1
                                            ebx_1 += 4
                                            
                                            if (esi s< *(edi + 0x400))
                                                continue
                                            
                                            ebx = var_c
                                            goto label_414242
                                    
                                    sub_44e4d0(eax_1, &data_5559b1, "RectIsNormalized(r)", 
                                        "c:\ax2017\engine\rect.cpp", 0xa4, "RectContains")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                    
                    eax = sub_414460(var_14, &var_10)
                    edi = var_10
                    
                    if (edi == 0xffffffff)
                        break
                    
                    continue
            
            sub_44e4d0(eax, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0xa4, 
                "RectContains")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return result
}
