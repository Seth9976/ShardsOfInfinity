// 函数名称: sub_425c80
// 虚拟地址: 0x425c80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_425c80(int32_t arg1, int32_t* arg2, float arg3 @ xmm2)
{
    // 第一条实际指令: int32_t* edi = arg2
    int32_t* edi = arg2
    int32_t* var_40 = edi
    char var_41_1
    
    if ((*(data_cdf450 + 0xc) & 1) != 0)
        var_41_1 = 1
    
    if ((*(data_cdf450 + 0xc) & 1) == 0 || *(data_65ae04 + 0x18) == 0)
        var_41_1 = 0
    
    float var_28
    sub_44edc0(&var_28)
    float xmm0_2 = sub_4297a0(arg3 * 8f)
    float xmm0_3
    
    if (0 f<= xmm0_2)
        xmm0_3 = xmm0_2 + 0.5f
    else
        xmm0_3 = xmm0_2 - 0.5f
    
    int32_t esi = 0
    int32_t var_2c = int.d(xmm0_3)
    char* result
    
    while (true)
        int32_t var_54_1 = esi
        result = sub_469930(arg1)
        
        if (*edi == 1)
            if (var_41_1 != 0)
                result = sub_4628c0(arg1, esi)
                char* result_2 = result
                char const* const var_5c
                int32_t var_58
                char const* const var_54_3
                char* ecx_6
                
                if (result_2 == 0)
                    var_54_3 = "DataArray<struct UI2>::DataArrayGet"
                    var_58 = 0x6c
                    ecx_6 = "id != DATAID_NULL"
                label_425f81:
                    var_5c = "c:\ax2017\engine\dataarray.h"
                label_425f8b:
                    sub_44e4d0(result, &data_5559b1, ecx_6, var_5c, var_58, var_54_3)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                uint32_t edx_3 = zx.d(result_2.w)
                
                if (edx_3 u>= data_5c99a4)
                label_425f67:
                    var_54_3 = "DataArray<struct UI2>::DataArrayGet"
                    var_58 = 0x6d
                    ecx_6 = "DataArrayTryToGet(id) != NULL"
                    goto label_425f81
                
                int32_t edi_1 = data_5c99a0
                result = *(edx_3 * 0x1008 + edi_1 + 0x1004)
                char* result_1 = result
                
                if (result != result_2)
                    goto label_425f67
                
                result = edx_3 * 0x1008
                int128_t var_20_1 = *(result + edi_1 + 0x6cc)
                float xmm0_5[0x4] = *(result + edi_1 + 0x6cc)
                int32_t xmm3_2 = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xaa)
                
                if (xmm3_2 f< xmm0_5)
                label_425f51:
                    var_54_3 = "RectContains"
                    var_58 = 0xa4
                    var_5c = "c:\ax2017\engine\rect.cpp"
                    ecx_6 = "RectIsNormalized(r)"
                    goto label_425f8b
                
                float xmm2 = xmm0_5[3]
                float xmm1_1 = xmm0_5[1]
                
                if (xmm2 < xmm1_1)
                    goto label_425f51
                
                float xmm5_1 = var_28
                float var_24
                
                if (not(xmm5_1 f< xmm0_5) && not(var_24 < xmm1_1) && not(xmm3_2 f< xmm5_1)
                        && not(xmm2 < var_24))
                    edi = var_40
                    result = sub_425b30(result, esi, edi, arg3, 0)
                else if (esi == 0)
                    if (edx_3 u>= data_5c99a4 || result_1 != result_2)
                        goto label_425f67
                    
                    int128_t var_20_3 = *(result + edi_1 + 0x6cc)
                    float xmm0_7[0x4] = *(result + edi_1 + 0x6cc)
                    float xmm1_3 = xmm0_7[0] - 100000f
                    int32_t xmm0_8 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xaa)
                    
                    if (xmm0_8 f< xmm1_3)
                        goto label_425f51
                    
                    float xmm3_3 = xmm0_7[3]
                    float xmm2_2 = xmm0_7[1]
                    
                    if (xmm3_3 < xmm2_2)
                        goto label_425f51
                    
                    edi = var_40
                    
                    if (not(xmm5_1 < xmm1_3) && not(var_24 < xmm2_2) && not(xmm0_8 f< xmm5_1)
                            && not(xmm3_3 < var_24))
                        edi[1] = esi
                        result = sub_425b30(result, 0xffffffff, edi, arg3, esi.b)
                else if (esi != 7)
                    edi = var_40
                else
                    if (edx_3 u>= data_5c99a4 || result_1 != result_2)
                        goto label_425f67
                    
                    float xmm1_4[0x4] = *(result + edi_1 + 0x6cc)
                    int128_t var_20_5 = *(result + edi_1 + 0x6cc)
                    float xmm0_12 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa) + 100000f
                    
                    if (xmm0_12 f< xmm1_4)
                        goto label_425f51
                    
                    float xmm3_4 = xmm1_4[3]
                    float xmm2_4 = xmm1_4[1]
                    
                    if (xmm3_4 < xmm2_4)
                        goto label_425f51
                    
                    if (xmm5_1 f< xmm1_4 || var_24 < xmm2_4 || xmm0_12 < xmm5_1)
                        edi = var_40
                    else
                        edi = var_40
                        
                        if (not(xmm3_4 < var_24))
                            result = sub_425b30(result, esi, edi, arg3, 0)
            else
                *edi = 0
        
        esi += 1
        
        if (esi s>= 8)
            break
    
    return result
}
