// 函数名称: sub_4ef940
// 虚拟地址: 0x4ef940
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4ef940(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4, uint32_t arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_546416
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_d4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_88 = arg4
    int32_t var_14_1 = 0
    char* const result_7 = &data_5559b1
    char* result_3
    char* result_4 = result_3
    void* lpPerformanceCount = arg2
    int32_t var_dc = *arg3
    
    if (result_4 != 0)
        result_7 = result_4
    
    char* const result_10 = result_7
    void* result_1
    sub_44f980(&result_1, "%s-%s-%d.png")
    var_14_1.b = 1
    char* const result_8 = &data_5559b1
    char* result_5 = result_3
    lpPerformanceCount = arg2
    int32_t var_dc_1 = *arg3
    
    if (result_5 != 0)
        result_8 = result_5
    
    char* const result_11 = result_8
    char* result_2
    sub_44f980(&result_2, "%s-%s-%d.texture")
    int32_t i_1 = 0
    int128_t var_80
    __builtin_memset(&var_80, 0, 0x1c)
    var_14_1.b = 3
    int64_t xmm0 = 0
    int32_t var_54 = 0
    int32_t var_50 = 1
    int32_t var_40 = 0x1000
    int32_t eax_5 = sub_4dd730(0x1000, 1)
    lpPerformanceCount = 1
    void* lpPerformanceCount_1 = sub_4dd7f0(eax_5, 0x1000, 0x1000, lpPerformanceCount)
    void* lpPerformanceCount_9 = lpPerformanceCount_1
    void* lpPerformanceCount_2 = sub_45cd70(lpPerformanceCount_1)
    lpPerformanceCount = lpPerformanceCount_1
    _memset(lpPerformanceCount_2, 0, lpPerformanceCount)
    char* result_6 = result_2
    char* const result_9 = &data_5559b1
    
    if (result_6 != 0)
        result_9 = result_6
    
    int32_t* eax_6 = sub_48d5b0(result_9, 3)
    uint32_t var_a8
    lpPerformanceCount = &var_a8
    QueryPerformanceCounter(lpPerformanceCount)
    uint32_t eax_7 = var_a8
    int32_t var_34 = arg3[3]
    int32_t var_30 = arg3[4]
    int32_t* eax_10 = sub_45cfa0(0x10)
    eax_10[3] += 1
    int32_t* ecx_1 = *eax_10
    
    if (ecx_1 == 0)
        sub_45ce30(eax_10)
        ecx_1 = *eax_10
    
    int32_t* edi_2 = var_88
    *eax_10 = *ecx_1
    *ecx_1 = 0
    ecx_1[1] = 0
    ecx_1[2] = 0
    ecx_1[3] = 0
    int32_t eax_12 = edi_2[1]
    int96_t var_70
    var_70.d = ecx_1
    var_80:0xc.d = ecx_1
    int32_t* ecx_3 = *edi_2
    lpPerformanceCount = sub_4ec820
    var_70:4.d = 1
    int32_t var_84_1 = 0
    sub_4f1dd0(eax_12, &ecx_3[eax_12], ecx_3, eax_12, lpPerformanceCount)
    int32_t eax_13 = edi_2[1]
    int32_t esi_3 = 0
    
    if (eax_13 s> 0)
        uint32_t lpPerformanceCount_4
        int32_t edi_5
        
        while (true)
            if (esi_3 s< 0 || esi_3 s>= eax_13)
                lpPerformanceCount = "XArray<struct XAsset *>::GetAt"
                sub_44e4d0(eax_13, &data_5559b1, "index >= 0 && index < mSize", 
                    "c:\ax2017\engine\xarray.h", 0xae, lpPerformanceCount)
                
                if (IsDebuggerPresent() != 1)
                    sub_44e680()
                    noreturn
                
                breakpoint
            
            int32_t* edi_3 = *(*edi_2 + (esi_3 << 2))
            int32_t eax_15 = edi_3[1]
            int32_t eax_16
            
            if (eax_15 != 3)
                if (eax_15 == 0x12)
                    eax_16, lpPerformanceCount_4 = sub_4edaa0(edi_3, &var_80)
                    goto label_4efb58
                
                void* lpPerformanceCount_10 = edi_3[8]
                void* lpPerformanceCount_5 = &data_5559b1
                
                if (lpPerformanceCount_10 != 0)
                    lpPerformanceCount_5 = lpPerformanceCount_10
                
                lpPerformanceCount = lpPerformanceCount_5
                lpPerformanceCount_4 = sub_44e260("AtlasMaker: I don't handle this asset type yet %s")
                edi_5 = var_84_1
            else
                eax_16, lpPerformanceCount_4 = sub_4ed180(edi_3, &var_80)
            label_4efb58:
                
                if (eax_16 != 2)
                    if (eax_16 == 1)
                        lpPerformanceCount_4 = arg5
                        int32_t edx_3 = *(lpPerformanceCount_4 + 4)
                        
                        if (edx_3 s>= *(lpPerformanceCount_4 + 8))
                            lpPerformanceCount = "XArray<struct XAsset *>::Append"
                            sub_44e4d0(eax_16, &data_5559b1, "mSize < mSizeReserved", 
                                "c:\ax2017\engine\xarray.h", 0x96, lpPerformanceCount)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        *(*lpPerformanceCount_4 + (edx_3 << 2)) = edi_3
                        *(lpPerformanceCount_4 + 4) += 1
                    
                    edi_5 = var_84_1
                else
                    edi_5 = var_84_1 + 1
                    var_84_1 = edi_5
            esi_3 += 1
            eax_13 = var_88[1]
            
            if (esi_3 s>= eax_13)
                break
            
            edi_2 = var_88
            continue
        
        if (edi_5 s> 0)
            uint32_t esi_4
            uint32_t edi_6
            
            if (data_65acf2 == 0)
                esi_4 = 8
                edi_6 = 8
                
                if (xmm0.d s> 8)
                    edi_6 = xmm0.d
                
                if (xmm0:4.d s> 8)
                    esi_4 = xmm0:4.d
            else
                lpPerformanceCount_4 = xmm0:4.d
                edi_6 = sub_41b670(xmm0.d)
                esi_4 = sub_41b670(lpPerformanceCount_4)
            
            void* lpPerformanceCount_3 = result_1
            lpPerformanceCount = lpPerformanceCount_4
            lpPerformanceCount = lpPerformanceCount_3
            
            if (lpPerformanceCount_3 != 0 && *lpPerformanceCount_3 != 0)
                char* eax_21 = sub_44f000(&lpPerformanceCount)
                *(eax_21 + 4) += 1
            
            var_14_1.b = 4
            char* eax_23 = *sub_48e630(&var_88)
            char* edx_4 = &data_5559b1
            
            if (eax_23 != 0)
                edx_4 = eax_23
            
            char* lpPerformanceCount_12
            sub_4a8b60(&lpPerformanceCount_12, edx_4)
            var_14_1.b = 7
            
            if (data_cdf414 != 0)
                int32_t* eax_24 = var_88
                
                if (eax_24 != 0 && *eax_24 != 0)
                    char* eax_25 = sub_44f000(&var_88)
                    int32_t temp0_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
                        var_88 = &data_5559b1
            
            var_14_1.b = 6
            char* const lpPerformanceCount_16 = &data_5559b1
            char* lpPerformanceCount_13 = lpPerformanceCount_12
            
            if (lpPerformanceCount_13 != 0)
                lpPerformanceCount_16 = lpPerformanceCount_13
            
            sub_48c200(lpPerformanceCount_16)
            char* lpPerformanceCount_14 = lpPerformanceCount_12
            var_a8 = esi_4
            char* lpPerformanceCount_17 = &data_5559b1
            
            if (lpPerformanceCount_14 != 0)
                lpPerformanceCount_17 = lpPerformanceCount_14
            
            uint32_t var_ac = edi_6
            int32_t var_a0 = var_50
            int32_t var_a4 = eax_5
            void* lpPerformanceCount_8 = lpPerformanceCount_2
            
            if (sub_51af30(&lpPerformanceCount_8, lpPerformanceCount_17) == 0)
                char* lpPerformanceCount_11 = lpPerformanceCount_12
                char* lpPerformanceCount_6 = &data_5559b1
                
                if (lpPerformanceCount_11 != 0)
                    lpPerformanceCount_6 = lpPerformanceCount_11
                
                lpPerformanceCount = lpPerformanceCount_6
                sub_44e260("AtlasMaker: failed to png write %s")
            
            if (lpPerformanceCount_2 != 0)
                lpPerformanceCount = lpPerformanceCount_2
                _aligned_free_base(lpPerformanceCount)
            
            int32_t i = i_1
            
            if (i != 0)
                int32_t* esi_6 = var_70:8.d
                
                do
                    int32_t* eax_29 = esi_6[5]
                    int32_t* ecx_13 = esi_6
                    esi_6 = eax_29
                    var_70:8.d = esi_6
                    
                    if (eax_29 == 0)
                        var_70:0xc.d = 0
                    else
                        esi_6[6] = 0
                    
                    i -= 1
                    int32_t i_2 = i
                    lpPerformanceCount_8.o = *ecx_13
                    sub_45d050(ecx_13, 0x1c)
                    void* lpPerformanceCount_7 = _mm_bsrli_si128(lpPerformanceCount_8.o, 8)
                    
                    if (lpPerformanceCount_7 != 0)
                        lpPerformanceCount = lpPerformanceCount_7
                        _aligned_free_base(lpPerformanceCount)
                while (i != 0)
            
            int32_t eax_31 = sub_48d180(eax_6)
            lpPerformanceCount = nullptr
            char** eax_32 = sub_48da50(eax_31, 1, eax_6, lpPerformanceCount.b)
            
            if (eax_6[1] != 3)
                lpPerformanceCount = "TextureGetDef"
                sub_44e4d0(eax_32, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                    "c:\ax2017\engine\texture.h", 0x84, lpPerformanceCount)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            *(*sub_4459f0(eax_6) + 0x28) = eax_7
            sub_484240(eax_6)
            var_14_1.b = 8
            
            if (data_cdf414 != 0)
                char* lpPerformanceCount_15 = lpPerformanceCount_12
                
                if (lpPerformanceCount_15 != 0 && *lpPerformanceCount_15 != 0)
                    char* eax_35 = sub_44f000(&lpPerformanceCount_12)
                    int32_t temp1_1 = *(eax_35 + 4)
                    *(eax_35 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                        lpPerformanceCount_12 = &data_5559b1
            
            char* result = sub_4ee0a0(&var_80)
            var_14_1.b = 9
            
            if (data_cdf414 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_2)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_45d050(result, *(result + 0xc) + 0x10)
                        result_2 = &data_5559b1
            
            var_14_1.b = 0xa
            
            if (data_cdf414 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_1)
                    int32_t temp3_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp3_1 == 1)
                        result = sub_45d050(result, *(result + 0xc) + 0x10)
                        result_1 = &data_5559b1
            
            int32_t var_14_2 = 0xb
            
            if (data_cdf414 != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_3)
                    int32_t temp4_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp4_1 == 1)
                        result = sub_45d050(result, *(result + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
    
    lpPerformanceCount = "AtlasMakerPlacePage"
    sub_44e4d0(eax_13, &data_5559b1, "imagesOnPage > 0", "c:\ax2017\engine\editor\atlasmaker.cpp", 
        0x5ad, lpPerformanceCount)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
