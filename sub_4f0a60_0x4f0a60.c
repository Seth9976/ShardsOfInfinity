// 函数名称: sub_4f0a60
// 虚拟地址: 0x4f0a60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4f0a60(int32_t* arg1, int32_t** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5464b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_84 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_88 = *arg1
    sub_44e260("AtlasMaker: making page %s")
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t var_58
    int32_t var_70 = var_58
    int32_t* i_8 = nullptr
    int32_t var_64 = 0
    int32_t var_60 = 0
    int32_t i = 0
    var_8_1.b = 2
    
    if (arg1[2] s> 0)
        do
            sub_4eff70(&i_8, arg2, *(arg1[1] + (i << 2)), &i_8)
            i += 1
        while (i s< arg1[2])
    
    char* result_1
    char* result_2
    
    if (arg1[2] s<= 0 || var_60 s<= 0)
        int32_t var_88_12 = *arg1
        sub_44e260("AtlasMaker: not enough textures for atlas page: '%s'")
        var_8_1.b = 0xb
    else
        int32_t i_1 = 0
        int64_t var_54 = 0
        int32_t edi_1 = var_54:4.d
        int32_t ebx_1 = var_54.d
        int32_t var_58_1 = edi_1
        int32_t var_4c_1 = ebx_1
        char* lpFileName_8
        void fileInformation
        int32_t var_24
        int32_t var_20
        
        do
            char* result_3 = result_2
            char* const result_5 = &data_5559b1
            int32_t i_6 = i_1
            
            if (result_3 != 0)
                result_5 = result_3
            
            int32_t var_8c_1 = *arg1
            char* const result_7 = result_5
            sub_44f980(&lpFileName_8, "%s-%s-%d.png")
            char* lpFileName_4 = lpFileName_8
            char* const lpFileName = &data_5559b1
            
            if (lpFileName_4 != 0)
                lpFileName = lpFileName_4
            
            if (GetFileAttributesExA(lpFileName, GetFileExInfoStandard, &fileInformation) == 0)
                var_8_1.b = 6
                
                if (data_cdf414 != 0)
                    char* lpFileName_10 = lpFileName_8
                    
                    if (lpFileName_10 != 0 && *lpFileName_10 != 0)
                        char* eax_10 = sub_44f000(&lpFileName_8)
                        int32_t temp2_1 = *(eax_10 + 4)
                        *(eax_10 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
                            lpFileName_8 = &data_5559b1
                
                var_8_1.b = 2
                break
            
            if (var_20 u>= edi_1 && (var_20 u> edi_1 || var_24 u> ebx_1))
                ebx_1 = var_24
                edi_1 = var_20
                var_4c_1 = ebx_1
                var_58_1 = edi_1
            
            var_8_1.b = 7
            
            if (data_cdf414 != 0)
                char* lpFileName_9 = lpFileName_8
                
                if (lpFileName_9 != 0 && *lpFileName_9 != 0)
                    char* eax_9 = sub_44f000(&lpFileName_8)
                    int32_t temp3_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                        lpFileName_8 = &data_5559b1
            
            i_1 += 1
            var_8_1.b = 2
        while (i_1 s< 0x64)
        
        int32_t* i_5 = i_8
        
        if (edi_1 != 0 || var_4c_1 != 0)
            char* lpFileName_5 = result_1
            char* const lpFileName_1 = &data_5559b1
            
            if (lpFileName_5 != 0)
                lpFileName_1 = lpFileName_5
            
            if (GetFileAttributesExA(lpFileName_1, GetFileExInfoStandard, &fileInformation) == 0)
                goto label_4f0dd6
            
            char var_3d_1 = 1
            
            if (var_20 u>= edi_1 && (var_20 u> edi_1 || var_24 u>= var_4c_1))
                sub_44e260("AtlasMaker: rebuilding page because atlasmaker file is new")
                var_3d_1 = 0
            
            int32_t* i_2 = i_5
            
            while (i_2 != 0)
                void* esi_1 = *i_2
                i_2 = i_2[1]
                
                if (*(esi_1 + 8) != 0)
                    bool cond:4_1 = sub_4aa2b0(esi_1) != 0
                    char* eax_14 = *(esi_1 + 0x20)
                    
                    if (cond:4_1)
                        char* ecx_24 = &data_5559b1
                        
                        if (eax_14 != 0)
                            ecx_24 = eax_14
                        
                        char* var_88_11 = ecx_24
                        sub_44e260("AtlasMaker: rebuilding page for: '%s'")
                        goto label_4f0dd6
                    
                    char* edx_5 = &data_5559b1
                    
                    if (eax_14 != 0)
                        edx_5 = eax_14
                    
                    sub_4a93d0(&lpFileName_8, edx_5)
                    char* lpFileName_6 = lpFileName_8
                    char* lpFileName_2 = &data_5559b1
                    
                    if (lpFileName_6 != 0)
                        lpFileName_2 = lpFileName_6
                    
                    if (GetFileAttributesExA(lpFileName_2, GetFileExInfoStandard, &fileInformation)
                            == 0)
                        char* eax_20 = *(esi_1 + 0x20)
                        char* const ecx_14 = &data_5559b1
                        
                        if (eax_20 != 0)
                            ecx_14 = eax_20
                        
                        char* const var_88_8 = ecx_14
                        sub_44e260("AtlasMaker: rebuilding page because no xbin for: '%s'")
                        var_8_1.b = 8
                    label_4f0d93:
                        
                        if (data_cdf414 != 0)
                            char* lpFileName_12 = lpFileName_8
                            
                            if (lpFileName_12 != 0 && *lpFileName_12 != 0)
                                char* eax_21 = sub_44f000(&lpFileName_8)
                                int32_t temp8_1 = *(eax_21 + 4)
                                *(eax_21 + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
                                    lpFileName_8 = &data_5559b1
                        
                        var_8_1.b = 2
                        goto label_4f0dd6
                    
                    if (var_20 u> var_58_1 || (var_20 u>= var_58_1 && var_24 u>= var_4c_1))
                        char* eax_19 = *(esi_1 + 0x20)
                        char* const ecx_13 = &data_5559b1
                        
                        if (eax_19 != 0)
                            ecx_13 = eax_19
                        
                        char* const var_88_7 = ecx_13
                        sub_44e260("AtlasMaker: rebuilding page because image is new: '%s'")
                        var_8_1.b = 9
                        goto label_4f0d93
                    
                    var_8_1.b = 0xa
                    
                    if (data_cdf414 != 0)
                        char* lpFileName_11 = lpFileName_8
                        
                        if (lpFileName_11 != 0 && *lpFileName_11 != 0)
                            char* eax_18 = sub_44f000(&lpFileName_8)
                            int32_t temp9_1 = *(eax_18 + 4)
                            *(eax_18 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                                lpFileName_8 = &data_5559b1
                    
                    var_8_1.b = 2
                else
                    char* eax_12 = *(esi_1 + 0x20)
                    char* const ecx_8 = &data_5559b1
                    
                    if (eax_12 != 0)
                        ecx_8 = eax_12
                    
                    char* const var_88_5 = ecx_8
                    sub_44e260("AtlasMaker: unknown asset '%s'")
            
            if (var_3d_1 == 0)
                goto label_4f0dd6
            
            sub_44e260("AtlasMaker: atlas is up to date.")
            var_8_1.b = 0xb
        else
        label_4f0dd6:
            int32_t edi_2 = 0
            var_54.d = sub_45cff0(var_60 << 2)
            var_54:4.d = 0
            int32_t var_4c_2 = var_60
            int32_t* i_3 = i_5
            var_8_1.b = 0xe
            
            while (i_3 != 0)
                int32_t* eax_23 = *i_3
                i_3 = i_3[1]
                int32_t eax_24 = sub_4f0310(eax_23)
                
                if (eax_24.b != 0)
                    if (edi_2 s>= var_60)
                        sub_44e4d0(eax_24, &data_5559b1, "mSize < mSizeReserved", 
                            "c:\ax2017\engine\xarray.h", 0x96, "XArray<struct XAsset *>::Append")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    *(var_54.d + (edi_2 << 2)) = eax_23
                    edi_2 += 1
                    var_54:4.d = edi_2
            
            uint32_t var_88_9 = sub_45ccc0(&performanceCount_1)
            sub_44e260("AtlasMaker: match and load assets time %d ms")
            int32_t i_4 = sub_4ef370(&result_2, &var_54, arg1, &result_2)
            
            while (i_4 s< 0x64)
                char* result_4 = result_2
                int32_t i_7 = i_4
                int32_t var_8c_2 = *arg1
                char* result_6 = &data_5559b1
                
                if (result_4 != 0)
                    result_6 = result_4
                
                char* result_8 = result_6
                sub_44f980(&lpFileName_8, "%s-%s-%d.png")
                char* lpFileName_7 = lpFileName_8
                char* lpFileName_3 = &data_5559b1
                
                if (lpFileName_7 != 0)
                    lpFileName_3 = lpFileName_7
                
                if (GetFileAttributesA(lpFileName_3) == 0xffffffff)
                    var_8_1.b = 0xf
                    
                    if (data_cdf414 != 0)
                        char* lpFileName_15 = lpFileName_8
                        
                        if (lpFileName_15 != 0 && *lpFileName_15 != 0)
                            char* eax_31 = sub_44f000(&lpFileName_8)
                            int32_t temp6_1 = *(eax_31 + 4)
                            *(eax_31 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_45d050(eax_31, *(eax_31 + 0xc) + 0x10)
                                lpFileName_8 = &data_5559b1
                    
                    var_8_1.b = 0xe
                    break
                
                char* lpFileName_13 = lpFileName_8
                char* lpFileName_16 = &data_5559b1
                
                if (lpFileName_13 != 0)
                    lpFileName_16 = lpFileName_13
                
                char* lpFileName_17 = lpFileName_16
                sub_52b50d()
                var_8_1.b = 0x10
                
                if (data_cdf414 != 0)
                    char* lpFileName_14 = lpFileName_8
                    
                    if (lpFileName_14 != 0 && *lpFileName_14 != 0)
                        char* eax_30 = sub_44f000(&lpFileName_8)
                        int32_t temp7_1 = *(eax_30 + 4)
                        *(eax_30 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
                            lpFileName_8 = &data_5559b1
                
                i_4 += 1
                var_8_1.b = 0xe
            
            while (i_5 != 0)
                int32_t* ecx_27 = *i_5
                i_5 = i_5[1]
                
                if (ecx_27[2] != 4)
                    sub_4f0280(ecx_27)
            
            var_8_1.b = 0x11
            
            if (data_cdf414 != 0)
                int32_t* eax_32 = var_54.d
                
                if (eax_32 != 0)
                    sub_45d050(eax_32, var_60 << 2)
            
            var_8_1.b = 0x12
    
    char* result = sub_429100(&i_8)
    var_8_1.b = 0x13
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
                result_1 = &data_5559b1
    
    int32_t var_8_2 = 0x14
    
    if (data_cdf414 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_2)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
