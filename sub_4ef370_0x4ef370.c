// 函数名称: sub_4ef370
// 虚拟地址: 0x4ef370
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4ef370(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5463b3
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_f0 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg3
    int32_t* var_40 = edi
    uint32_t (* var_34)[0x4] = nullptr
    char eax_3 = 0
    
    if (data_65acf2 != 0)
        eax_3 = 1
    
    int32_t var_30 = 0
    int32_t var_2c = 0
    int32_t var_8_1 = 0
    var_34 = sub_45cff0(0x70000)
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0x4000
    sub_4ee380(arg2, &var_34)
    uint32_t (* var_50)[0x4] = nullptr
    int32_t var_4c = 0
    int32_t var_48 = 0
    var_8_1.b = 1
    int32_t var_44 = 0
    uint32_t (* eax_5)[0x4]
    int32_t* lpPerformanceCount_4
    eax_5, lpPerformanceCount_4 = sub_45cff0(var_2c_1 * 0x1c)
    var_50 = eax_5
    int32_t var_4c_1 = 0
    int32_t* var_5c = nullptr
    int32_t var_58 = 0
    int32_t var_54 = 0
    int32_t* lpPerformanceCount = lpPerformanceCount_4
    var_8_1.b = 2
    int32_t result = sub_4ee6a0(var_2c_1, edi[3], edi[4], &var_50)
    int32_t* lpPerformanceCount_7 = nullptr
    int32_t result_1 = result
    
    if (result s> 0)
        do
            char* const ecx_4 = &data_5559b1
            lpPerformanceCount = lpPerformanceCount_7
            int32_t var_f8_1 = *edi
            char* eax_7 = *arg4
            
            if (eax_7 != 0)
                ecx_4 = eax_7
            
            char* const var_fc_1 = ecx_4
            int32_t* lpPerformanceCount_2
            sub_44f980(&lpPerformanceCount_2, "%s-%s-%d.png")
            var_8_1.b = 3
            char* const ecx_5 = &data_5559b1
            char* eax_8 = *arg4
            lpPerformanceCount = lpPerformanceCount_7
            int32_t var_f8_2 = *edi
            
            if (eax_8 != 0)
                ecx_5 = eax_8
            
            char* const var_fc_2 = ecx_5
            char* var_20
            sub_44f980(&var_20, "%s-%s-%d.texture")
            int128_t var_e0
            __builtin_memset(&var_e0, 0, 0x30)
            var_8_1.b = 5
            int32_t var_b0_1 = 1
            int32_t var_a0_1 = 0x1000
            int32_t eax_10 = sub_4dd620(1) << 0xc
            int32_t edi_1
            
            if (eax_10 s>= 4)
                eax_10 = sub_4dd620(1)
                edi_1 = eax_10 << 0xc
            else
                edi_1 = 4
            
            int32_t var_a8_1 = edi_1
            lpPerformanceCount = 1
            int32_t* lpPerformanceCount_3 = sub_4dd7f0(eax_10, 0x1000, 0x1000, lpPerformanceCount)
            int32_t* lpPerformanceCount_8 = lpPerformanceCount_3
            uint32_t (* lpPerformanceCount_13)[0x4] = sub_45cd70(lpPerformanceCount_3)
            lpPerformanceCount = lpPerformanceCount_3
            int32_t* lpPerformanceCount_1 = lpPerformanceCount_13
            _memset(lpPerformanceCount_13, 0, lpPerformanceCount)
            char* edx_1 = var_20
            char* const ecx_7 = &data_5559b1
            int32_t* lpPerformanceCount_9 = lpPerformanceCount_1
            
            if (edx_1 != 0)
                ecx_7 = edx_1
            
            int32_t* eax_12 = sub_48d5b0(ecx_7, 3)
            int32_t var_70
            lpPerformanceCount = &var_70
            int32_t* var_9c_1 = eax_12
            QueryPerformanceCounter(lpPerformanceCount)
            int32_t var_98_1 = var_70
            lpPerformanceCount = &var_50
            int32_t var_90_1 = var_40[4]
            int32_t var_94_1 = var_40[3]
            uint32_t lpPerformanceCount_14
            uint32_t lpPerformanceCount_26
            lpPerformanceCount_14, lpPerformanceCount_26 =
                sub_4eeef0(&var_5c, &var_34, &var_e0, &var_5c, lpPerformanceCount_7, lpPerformanceCount)
            uint32_t lpPerformanceCount_5 = 8
            
            if (lpPerformanceCount_14 s> 8)
                lpPerformanceCount_5 = lpPerformanceCount_14
            
            uint32_t lpPerformanceCount_21 = 8
            uint32_t lpPerformanceCount_11 = lpPerformanceCount_5
            
            if (lpPerformanceCount_26 s> 8)
                lpPerformanceCount_21 = lpPerformanceCount_26
            
            uint32_t lpPerformanceCount_12 = lpPerformanceCount_21
            
            if (eax_3 != 0)
                uint32_t lpPerformanceCount_22 = sub_41b670(lpPerformanceCount_5)
                lpPerformanceCount_5 = lpPerformanceCount_12
                lpPerformanceCount_11 = lpPerformanceCount_22
                lpPerformanceCount_12 = sub_41b670(lpPerformanceCount_5)
            
            lpPerformanceCount = lpPerformanceCount_5
            lpPerformanceCount = lpPerformanceCount_2
            char* lpPerformanceCount_15 = lpPerformanceCount_2
            
            if (lpPerformanceCount_15 != 0 && *lpPerformanceCount_15 != 0)
                char* eax_16 = sub_44f000(&lpPerformanceCount)
                *(eax_16 + 4) += 1
            
            var_8_1.b = 6
            char* const var_24
            char* eax_18 = *sub_48e630(&var_24)
            char* edx_3 = &data_5559b1
            
            if (eax_18 != 0)
                edx_3 = eax_18
            
            char* lpPerformanceCount_20
            sub_4a8b60(&lpPerformanceCount_20, edx_3)
            var_8_1.b = 9
            
            if (data_cdf414 != 0)
                char* eax_19 = var_24
                
                if (eax_19 != 0 && *eax_19 != 0)
                    char* eax_20 = sub_44f000(&var_24)
                    int32_t temp0_1 = *(eax_20 + 4)
                    *(eax_20 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                        var_24 = &data_5559b1
            
            var_8_1.b = 8
            char* const lpPerformanceCount_27 = &data_5559b1
            char* lpPerformanceCount_23 = lpPerformanceCount_20
            
            if (lpPerformanceCount_23 != 0)
                lpPerformanceCount_27 = lpPerformanceCount_23
            
            sub_48c200(lpPerformanceCount_27)
            char* lpPerformanceCount_24 = lpPerformanceCount_20
            int32_t var_78_1 = edi_1
            char* lpPerformanceCount_28 = &data_5559b1
            
            if (lpPerformanceCount_24 != 0)
                lpPerformanceCount_28 = lpPerformanceCount_24
            
            int32_t var_74_1 = 1
            uint32_t lpPerformanceCount_18 = lpPerformanceCount_11
            uint32_t lpPerformanceCount_19 = lpPerformanceCount_12
            int32_t* lpPerformanceCount_10 = lpPerformanceCount_1
            
            if (sub_51af30(&lpPerformanceCount_10, lpPerformanceCount_28) == 0)
                char* lpPerformanceCount_16 = lpPerformanceCount_20
                char* const lpPerformanceCount_6 = &data_5559b1
                
                if (lpPerformanceCount_16 != 0)
                    lpPerformanceCount_6 = lpPerformanceCount_16
                
                lpPerformanceCount = lpPerformanceCount_6
                sub_44e260("AtlasMaker: failed to png write %s")
            
            if (lpPerformanceCount_1 != 0)
                lpPerformanceCount = lpPerformanceCount_1
                _aligned_free_base(lpPerformanceCount)
            
            int32_t eax_24 = sub_48d180(eax_12)
            lpPerformanceCount = nullptr
            char** eax_25 = sub_48da50(eax_24, 1, eax_12, lpPerformanceCount.b)
            
            if (eax_12[1] != 3)
                lpPerformanceCount = "TextureGetDef"
                sub_44e4d0(eax_25, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                    "c:\ax2017\engine\texture.h", 0x84, lpPerformanceCount)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t* eax_26 = sub_4459f0(eax_12)
            *(*eax_26 + 0x28) = var_70
            sub_484240(eax_12)
            var_8_1.b = 0xa
            
            if (data_cdf414 != 0)
                char* lpPerformanceCount_25 = lpPerformanceCount_20
                
                if (lpPerformanceCount_25 != 0 && *lpPerformanceCount_25 != 0)
                    char* eax_28 = sub_44f000(&lpPerformanceCount_20)
                    int32_t temp1_1 = *(eax_28 + 4)
                    *(eax_28 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_28, *(eax_28 + 0xc) + 0x10)
                        lpPerformanceCount_20 = &data_5559b1
            
            sub_4ee0a0(&var_e0)
            var_8_1.b = 0xb
            
            if (data_cdf414 != 0)
                char* eax_29 = var_20
                
                if (eax_29 != 0 && *eax_29 != 0)
                    char* eax_30 = sub_44f000(&var_20)
                    int32_t temp2_1 = *(eax_30 + 4)
                    *(eax_30 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
                        var_20 = &data_5559b1
            
            var_8_1.b = 0xc
            
            if (data_cdf414 != 0)
                int32_t* lpPerformanceCount_17 = lpPerformanceCount_2
                
                if (lpPerformanceCount_17 != 0 && *lpPerformanceCount_17 != 0)
                    char* eax_31 = sub_44f000(&lpPerformanceCount_2)
                    int32_t temp3_1 = *(eax_31 + 4)
                    *(eax_31 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(eax_31, *(eax_31 + 0xc) + 0x10)
                        lpPerformanceCount_2 = &data_5559b1
            
            result = result_1
            lpPerformanceCount_7 += 1
            edi = var_40
            var_8_1.b = 2
        while (lpPerformanceCount_7 s< result)
    
    var_8_1.b = 0xd
    
    if (data_cdf414 != 0)
        int32_t* ecx_30 = var_5c
        
        if (ecx_30 != 0)
            sub_45d050(ecx_30, var_54 * 0x18)
    
    var_8_1.b = 0xe
    
    if (data_cdf414 != 0)
        uint32_t (* ecx_31)[0x4] = var_50
        
        if (ecx_31 != 0)
            sub_45d050(ecx_31, var_2c_1 * 0x1c)
    
    int32_t var_8_2 = 0xf
    
    if (data_cdf414 != 0)
        uint32_t (* ecx_32)[0x4] = var_34
        
        if (ecx_32 != 0)
            sub_45d050(ecx_32, var_2c_1 * 0x1c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
