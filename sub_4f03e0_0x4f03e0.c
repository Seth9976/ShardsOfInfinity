// 函数名称: sub_4f03e0
// 虚拟地址: 0x4f03e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4f03e0(int32_t* arg1, int32_t** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$??$raise_error@Vdomain_error@std@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_94 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* i_7 = *arg1
    sub_44e260("AtlasMaker: making page %s")
    int32_t var_5c
    i_7 = &var_5c
    QueryPerformanceCounter(i_7)
    int32_t var_84 = var_5c
    int32_t var_58
    int32_t var_80 = var_58
    int32_t* i_8 = nullptr
    int32_t var_64 = 0
    int32_t var_60 = 0
    int32_t i = 0
    var_8_1.b = 2
    
    if (arg1[2] s> 0)
        do
            int32_t ecx = arg1[1]
            i_7 = &i_8
            sub_4eff70(&i_8, arg2, *(ecx + (i << 2)), i_7)
            i += 1
        while (i s< arg1[2])
    
    char* result_1
    char* result_2
    
    if (arg1[2] s<= 0 || var_60 s<= 0)
        i_7 = *arg1
        sub_44e260("AtlasMaker: not enough textures for atlas page: '%s'")
        var_8_1.b = 0xb
    else
        int32_t* i_1 = nullptr
        int64_t var_54 = 0
        int32_t edi_1 = var_54:4.d
        int32_t var_58_1 = edi_1
        int32_t var_4c_1 = var_54.d
        PSTR lpFileName_6
        void var_38
        int32_t var_24
        int32_t var_20
        
        do
            char* result_3 = result_2
            char* const result_6 = &data_5559b1
            i_7 = i_1
            int32_t var_9c_1 = *arg1
            
            if (result_3 != 0)
                result_6 = result_3
            
            char* const result_8 = result_6
            sub_44f980(&lpFileName_6, "%s-%s-%d.png")
            PSTR lpFileName_3 = lpFileName_6
            PSTR lpFileName = &data_5559b1
            
            if (lpFileName_3 != 0)
                lpFileName = lpFileName_3
            
            i_7 = &var_38
            
            if (GetFileAttributesExA(lpFileName, GetFileExInfoStandard, i_7) == 0)
                var_8_1.b = 6
                
                if (data_cdf414 != 0)
                    PSTR lpFileName_8 = lpFileName_6
                    
                    if (lpFileName_8 != 0 && *lpFileName_8 != 0)
                        char* eax_10 = sub_44f000(&lpFileName_6)
                        int32_t temp2_1 = *(eax_10 + 4)
                        *(eax_10 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
                            lpFileName_6 = &data_5559b1
                
                var_8_1.b = 2
                break
            
            if (var_20 u>= edi_1 && (var_20 u> edi_1 || var_24 u> var_4c_1))
                edi_1 = var_20
                var_4c_1 = var_24
                var_58_1 = edi_1
            
            var_8_1.b = 7
            
            if (data_cdf414 != 0)
                PSTR lpFileName_7 = lpFileName_6
                
                if (lpFileName_7 != 0 && *lpFileName_7 != 0)
                    char* eax_9 = sub_44f000(&lpFileName_6)
                    int32_t temp3_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                        lpFileName_6 = &data_5559b1
            
            i_1 += 1
            var_8_1.b = 2
        while (i_1 s< 0x64)
        
        int32_t* i_9 = i_8
        
        if (edi_1 != 0 || var_4c_1 != 0)
            char* lpFileName_4 = result_1
            char* const lpFileName_1 = &data_5559b1
            
            if (lpFileName_4 != 0)
                lpFileName_1 = lpFileName_4
            
            i_7 = &var_38
            
            if (GetFileAttributesExA(lpFileName_1, GetFileExInfoStandard, i_7) == 0)
                goto label_4f0746
            
            char var_3d_1 = 1
            
            if (var_20 u>= edi_1 && (var_20 u> edi_1 || var_24 u>= var_4c_1))
                i_7 = "AtlasMaker: rebuilding page because atlasmaker file is new"
                sub_44e260(i_7)
                var_3d_1 = 0
            
            int32_t* i_2 = i_9
            
            while (i_2 != 0)
                void* esi_1 = *i_2
                i_2 = i_2[1]
                
                if (*(esi_1 + 8) != 0)
                    bool cond:3_1 = sub_4aa2b0(esi_1) != 0
                    char* i_18 = *(esi_1 + 0x20)
                    
                    if (cond:3_1)
                        char* i_16 = &data_5559b1
                        
                        if (i_18 != 0)
                            i_16 = i_18
                        
                        i_7 = i_16
                        sub_44e260("AtlasMaker: rebuilding page for: '%s'")
                        goto label_4f0746
                    
                    char* i_21 = &data_5559b1
                    
                    if (i_18 != 0)
                        i_21 = i_18
                    
                    sub_4a93d0(&lpFileName_6, i_21)
                    PSTR lpFileName_5 = lpFileName_6
                    PSTR lpFileName_2 = &data_5559b1
                    
                    if (lpFileName_5 != 0)
                        lpFileName_2 = lpFileName_5
                    
                    i_7 = &var_38
                    
                    if (GetFileAttributesExA(lpFileName_2, GetFileExInfoStandard, i_7) == 0)
                        int32_t* i_20 = *(esi_1 + 0x20)
                        int32_t* i_12 = &data_5559b1
                        
                        if (i_20 != 0)
                            i_12 = i_20
                        
                        i_7 = i_12
                        sub_44e260("AtlasMaker: rebuilding page because no xbin for: '%s'")
                        var_8_1.b = 8
                    label_4f070f:
                        
                        if (data_cdf414 != 0)
                            PSTR lpFileName_10 = lpFileName_6
                            
                            if (lpFileName_10 != 0 && *lpFileName_10 != 0)
                                char* eax_17 = sub_44f000(&lpFileName_6)
                                int32_t temp7_1 = *(eax_17 + 4)
                                *(eax_17 + 4) -= 1
                                
                                if (temp7_1 == 1)
                                    sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                                    lpFileName_6 = &data_5559b1
                        
                        var_8_1.b = 2
                        goto label_4f0746
                    
                    if (var_20 u> var_58_1 || (var_20 u>= var_58_1 && var_24 u>= var_4c_1))
                        int32_t* i_19 = *(esi_1 + 0x20)
                        int32_t* i_11 = &data_5559b1
                        
                        if (i_19 != 0)
                            i_11 = i_19
                        
                        i_7 = i_11
                        sub_44e260("AtlasMaker: rebuilding page because image is new: '%s'")
                        var_8_1.b = 9
                        goto label_4f070f
                    
                    var_8_1.b = 0xa
                    
                    if (data_cdf414 != 0)
                        PSTR lpFileName_9 = lpFileName_6
                        
                        if (lpFileName_9 != 0 && *lpFileName_9 != 0)
                            char* eax_16 = sub_44f000(&lpFileName_6)
                            int32_t temp8_1 = *(eax_16 + 4)
                            *(eax_16 + 4) -= 1
                            
                            if (temp8_1 == 1)
                                sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                                lpFileName_6 = &data_5559b1
                    
                    var_8_1.b = 2
                else
                    char* i_17 = *(esi_1 + 0x20)
                    char* const i_10 = &data_5559b1
                    
                    if (i_17 != 0)
                        i_10 = i_17
                    
                    i_7 = i_10
                    sub_44e260("AtlasMaker: unknown asset '%s'")
            
            if (var_3d_1 == 0)
                goto label_4f0746
            
            i_7 = "AtlasMaker: atlas is up to date."
            sub_44e260(i_7)
            var_8_1.b = 0xb
        else
        label_4f0746:
            int32_t esi_2 = var_60 << 2
            var_54.d = sub_45cff0(esi_2)
            int32_t edi_2 = 0
            var_54:4.d = 0
            var_8_1.b = 0xe
            uint32_t (* var_78)[0x4] = sub_45cff0(esi_2)
            int32_t var_74_1 = 0
            int32_t* i_3 = i_9
            var_8_1.b = 0xf
            
            while (i_3 != 0)
                int32_t* eax_23 = *i_3
                i_3 = i_3[1]
                int32_t eax_24 = sub_4f0310(eax_23)
                
                if (eax_24.b != 0)
                    if (edi_2 s>= var_60)
                        i_7 = "XArray<struct XAsset *>::Append"
                        sub_44e4d0(eax_24, &data_5559b1, "mSize < mSizeReserved", 
                            "c:\ax2017\engine\xarray.h", 0x96, i_7)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    *(var_54.d + (edi_2 << 2)) = eax_23
                    edi_2 += 1
                    var_54:4.d = edi_2
            
            i_7 = sub_45ccc0(&var_84)
            int32_t* i_13 = sub_44e260("AtlasMaker: match and load assets time %d ms")
            uint32_t ebx_1 = &var_54
            uint32_t edi_3 = &var_78
            void* i_4
            
            for (i_4 = nullptr; i_4 s< 0x64; )
                char* eax_27 = result_2
                i_7 = i_13
                i_7 = eax_27
                char* result_4 = result_2
                
                if (result_4 != 0 && *result_4 != 0)
                    result_4 = sub_44f000(&i_7)
                    *(result_4 + 4) += 1
                
                i_13 = sub_4ef940(result_4, i_4, arg1, ebx_1, edi_3)
                
                if (*(edi_3 + 4) == 0)
                    break
                
                uint32_t eax_28 = ebx_1
                i_4 += 1
                ebx_1 = edi_3
                edi_3 = eax_28
                *(eax_28 + 4) = 0
            
            void* i_5 = i_4 + 1
            
            while (i_5 s< 0x64)
                char* result_5 = result_2
                char* result_7 = &data_5559b1
                i_7 = i_5
                
                if (result_5 != 0)
                    result_7 = result_5
                
                int32_t var_9c_3 = *arg1
                char* result_9 = result_7
                sub_44f980(&lpFileName_6, "%s-%s-%d.png")
                PSTR eax_30 = lpFileName_6
                PSTR i_14 = &data_5559b1
                
                if (eax_30 != 0)
                    i_14 = eax_30
                
                i_7 = i_14
                
                if (GetFileAttributesA(i_7) == 0xffffffff)
                    var_8_1.b = 0x10
                    
                    if (data_cdf414 != 0)
                        PSTR lpFileName_12 = lpFileName_6
                        
                        if (lpFileName_12 != 0 && *lpFileName_12 != 0)
                            char* eax_34 = sub_44f000(&lpFileName_6)
                            int32_t temp6_1 = *(eax_34 + 4)
                            *(eax_34 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_45d050(eax_34, *(eax_34 + 0xc) + 0x10)
                                lpFileName_6 = &data_5559b1
                    
                    var_8_1.b = 0xf
                    break
                
                PSTR eax_32 = lpFileName_6
                PSTR i_15 = &data_5559b1
                
                if (eax_32 != 0)
                    i_15 = eax_32
                
                i_7 = i_15
                sub_52b50d()
                var_8_1.b = 0x11
                
                if (data_cdf414 != 0)
                    PSTR lpFileName_11 = lpFileName_6
                    
                    if (lpFileName_11 != 0 && *lpFileName_11 != 0)
                        char* eax_33 = sub_44f000(&lpFileName_6)
                        int32_t temp9_1 = *(eax_33 + 4)
                        *(eax_33 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_45d050(eax_33, *(eax_33 + 0xc) + 0x10)
                            lpFileName_6 = &data_5559b1
                
                i_5 += 1
                var_8_1.b = 0xf
            
            int32_t* i_6 = i_8
            
            while (i_6 != 0)
                int32_t* ecx_24 = *i_6
                i_6 = i_6[1]
                
                if (ecx_24[2] != 4)
                    sub_4f0280(ecx_24)
            
            var_8_1.b = 0x12
            
            if (data_cdf414 != 0)
                uint32_t (* ecx_25)[0x4] = var_78
                
                if (ecx_25 != 0)
                    sub_45d050(ecx_25, var_60 << 2)
            
            var_8_1.b = 0x13
            
            if (data_cdf414 != 0)
                int32_t* ecx_26 = var_54.d
                
                if (ecx_26 != 0)
                    sub_45d050(ecx_26, var_60 << 2)
            
            var_8_1.b = 0x14
    
    char* result = sub_429100(&i_8)
    var_8_1.b = 0x15
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
                result_1 = &data_5559b1
    
    int32_t var_8_2 = 0x16
    
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
