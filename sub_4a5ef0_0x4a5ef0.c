// 函数名称: sub_4a5ef0
// 虚拟地址: 0x4a5ef0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4a5ef0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544118
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_144 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* const lpFileName
    
    if (data_5b2e40 != 0)
        lpFileName = &data_588d00
        
        if (GetFileAttributesA(lpFileName) == 0xffffffff)
            lpFileName = "../res"
            
            if (GetFileAttributesA(lpFileName) == 0xffffffff)
                lpFileName = "../../res"
                
                if (GetFileAttributesA(lpFileName) == 0xffffffff)
                    lpFileName = "../../../res"
                    
                    if (GetFileAttributesA(lpFileName) == 0xffffffff)
                        lpFileName = "../../../../res"
                        
                        if (GetFileAttributesA(lpFileName) == 0xffffffff)
                            lpFileName = "../../../../../res"
                            
                            if (GetFileAttributesA(lpFileName) == 0xffffffff)
                                lpFileName = "../../../../../../res"
                                
                                if (GetFileAttributesA(lpFileName) == 0xffffffff)
                                    lpFileName = 0x104
                                    void var_11c
                                    void* var_150_1 = __getcwd(&var_11c, lpFileName)
                                    sub_44e260("Can't find res directory %s\n")
                                else
                                    lpFileName = "../../../../../.."
                                    sub_52bf49()
                            else
                                lpFileName = "../../../../.."
                                sub_52bf49()
                        else
                            lpFileName = "../../../.."
                            sub_52bf49()
                    else
                        lpFileName = "../../.."
                        sub_52bf49()
                else
                    lpFileName = "../.."
                    sub_52bf49()
            else
                lpFileName = &data_592bf4
                sub_52bf49()
    
    lpFileName = 0x104
    void* result = __getcwd(&data_ce18a0, lpFileName)
    
    if (result == 0)
        lpFileName = "AppSetWorkingDirectory"
        sub_44e4d0(result, &data_5559b1, "result", "c:\ax2017\engine\assetsource.cpp", 0x1e8, 
            lpFileName)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (data_5b2e40 == 0)
        int32_t ecx_101 = 0
        
        do
            result.b = (&data_ce18a0)[ecx_101]
            ecx_101 += 1
            *(ecx_101 + &data_ce1794:3) = result.b
        while (result.b != 0)
    else
        char* lpFileName_14
        sub_44f240(&lpFileName_14, &data_ce18a0)
        int32_t var_8_1 = 0
        char* lpFileName_13 = lpFileName_14
        char* lpFileName_22 = lpFileName_13
        char* lpFileName_23 = lpFileName_22
        
        if (lpFileName_13 != 0 && *lpFileName_13 != 0)
            char* eax_11 = sub_44f000(&lpFileName_23)
            *(eax_11 + 4) += 1
        
        var_8_1.b = 1
        void* result_2
        sub_44f240(&result_2, "/sys")
        var_8_1.b = 2
        lpFileName = &result_2
        char* const lpFileName_24 = &data_5559b1
        char* const lpFileName_3 = &data_5559b1
        void* result_1
        char* lpFileName_15 = *sub_44f810(&lpFileName_23, &result_1, lpFileName)
        
        if (lpFileName_15 != 0)
            lpFileName_3 = lpFileName_15
        
        lpFileName = lpFileName_3
        void** lpFileName_4
        result, lpFileName_4 = GetFileAttributesA(lpFileName)
        bool var_121_1 = result == 0xffffffff
        var_8_1.b = 3
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                lpFileName_4 = &result_1
                result = sub_44f000(lpFileName_4)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result, lpFileName_4 = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5559b1
        
        var_8_1.b = 4
        
        if (data_cdf414 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                lpFileName_4 = &result_2
                result = sub_44f000(lpFileName_4)
                int32_t temp1_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp1_1 == 1)
                    result, lpFileName_4 = sub_45d050(result, *(result + 0xc) + 0x10)
        
        var_8_1.b = 1
        
        if (var_121_1 != 0)
            lpFileName = lpFileName_4
            lpFileName = lpFileName_13
            
            if (lpFileName_13 != 0 && *lpFileName_13 != 0)
                char* eax_13 = sub_44f000(&lpFileName)
                *(eax_13 + 4) += 1
            
            lpFileName = sub_4a9e20(&result_2)
            var_8_1.b = 5
            sub_44f510(&lpFileName_14, lpFileName)
            var_8_1.b = 6
            
            if (data_cdf414 != 0)
                void* result_3 = result_2
                
                if (result_3 != 0 && *result_3 != 0)
                    char* eax_15 = sub_44f000(&result_2)
                    int32_t temp2_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
            
            var_8_1.b = 1
            sub_44f240(&result_1, "Engine")
            var_8_1.b = 7
            lpFileName = &result_1
            lpFileName = sub_44f810(&lpFileName_14, &result_2, lpFileName)
            var_8_1.b = 8
            sub_44f510(&lpFileName_23, lpFileName)
            var_8_1.b = 9
            
            if (data_cdf414 != 0)
                void* result_4 = result_2
                
                if (result_4 != 0 && *result_4 != 0)
                    char* eax_17 = sub_44f000(&result_2)
                    int32_t temp3_1 = *(eax_17 + 4)
                    *(eax_17 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                        result_2 = &data_5559b1
            
            var_8_1.b = 0xa
            
            if (data_cdf414 != 0)
                void* result_5 = result_1
                
                if (result_5 != 0 && *result_5 != 0)
                    char* eax_18 = sub_44f000(&result_1)
                    int32_t temp5_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
            
            var_8_1.b = 1
            sub_44f240(&result_1, "/sys")
            var_8_1.b = 0xb
            lpFileName = &result_1
            char* const lpFileName_5 = &data_5559b1
            char* lpFileName_16 = *sub_44f810(&lpFileName_23, &result_2, lpFileName)
            
            if (lpFileName_16 != 0)
                lpFileName_5 = lpFileName_16
            
            lpFileName = lpFileName_5
            bool var_121_2 = GetFileAttributesA(lpFileName) == 0xffffffff
            var_8_1.b = 0xc
            
            if (data_cdf414 != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_2)
                    int32_t temp7_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_45d050(result, *(result + 0xc) + 0x10)
                        result_2 = &data_5559b1
            
            var_8_1.b = 0xd
            
            if (data_cdf414 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_1)
                    int32_t temp8_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_45d050(result, *(result + 0xc) + 0x10)
            
            var_8_1.b = 1
            
            if (var_121_2 != 0)
                sub_44f240(&result_1, "trunk/Engine")
                var_8_1.b = 0xe
                lpFileName = &result_1
                lpFileName = sub_44f810(&lpFileName_14, &result_2, lpFileName)
                var_8_1.b = 0xf
                sub_44f510(&lpFileName_23, lpFileName)
                var_8_1.b = 0x10
                
                if (data_cdf414 != 0)
                    void* result_6 = result_2
                    
                    if (result_6 != 0 && *result_6 != 0)
                        char* eax_21 = sub_44f000(&result_2)
                        int32_t temp9_1 = *(eax_21 + 4)
                        *(eax_21 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
                            result_2 = &data_5559b1
                
                var_8_1.b = 0x11
                
                if (data_cdf414 != 0)
                    void* result_7 = result_1
                    
                    if (result_7 != 0 && *result_7 != 0)
                        char* eax_22 = sub_44f000(&result_1)
                        int32_t temp10_1 = *(eax_22 + 4)
                        *(eax_22 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                
                var_8_1.b = 1
                sub_44f240(&result_1, "/sys")
                var_8_1.b = 0x12
                lpFileName = &result_1
                char* const lpFileName_6 = &data_5559b1
                char* lpFileName_17 = *sub_44f810(&lpFileName_23, &result_2, lpFileName)
                
                if (lpFileName_17 != 0)
                    lpFileName_6 = lpFileName_17
                
                lpFileName = lpFileName_6
                void** lpFileName_7
                result, lpFileName_7 = GetFileAttributesA(lpFileName)
                bool var_121_3 = result == 0xffffffff
                var_8_1.b = 0x13
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        lpFileName_7 = &result_2
                        result = sub_44f000(lpFileName_7)
                        int32_t temp11_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp11_1 == 1)
                            result, lpFileName_7 = sub_45d050(result, *(result + 0xc) + 0x10)
                            result_2 = &data_5559b1
                
                var_8_1.b = 0x14
                
                if (data_cdf414 != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        lpFileName_7 = &result_1
                        result = sub_44f000(lpFileName_7)
                        int32_t temp12_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp12_1 == 1)
                            result, lpFileName_7 = sub_45d050(result, *(result + 0xc) + 0x10)
                
                var_8_1.b = 1
                
                if (var_121_3 != 0)
                    char* lpFileName_1 = lpFileName_14
                    lpFileName = lpFileName_7
                    lpFileName = lpFileName_1
                    
                    if (lpFileName_1 != 0 && *lpFileName_1 != 0)
                        char* eax_24 = sub_44f000(&lpFileName)
                        *(eax_24 + 4) += 1
                    
                    lpFileName = sub_4a9e20(&result_2)
                    var_8_1.b = 0x15
                    sub_44f510(&lpFileName_14, lpFileName)
                    var_8_1.b = 0x16
                    
                    if (data_cdf414 != 0)
                        void* result_8 = result_2
                        
                        if (result_8 != 0 && *result_8 != 0)
                            char* eax_26 = sub_44f000(&result_2)
                            int32_t temp13_1 = *(eax_26 + 4)
                            *(eax_26 + 4) -= 1
                            
                            if (temp13_1 == 1)
                                sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
                    
                    var_8_1.b = 1
                    sub_44f240(&result_1, "Engine")
                    var_8_1.b = 0x17
                    lpFileName = &result_1
                    lpFileName = sub_44f810(&lpFileName_14, &result_2, lpFileName)
                    var_8_1.b = 0x18
                    sub_44f510(&lpFileName_23, lpFileName)
                    var_8_1.b = 0x19
                    
                    if (data_cdf414 != 0)
                        void* result_9 = result_2
                        
                        if (result_9 != 0 && *result_9 != 0)
                            char* eax_28 = sub_44f000(&result_2)
                            int32_t temp14_1 = *(eax_28 + 4)
                            *(eax_28 + 4) -= 1
                            
                            if (temp14_1 == 1)
                                sub_45d050(eax_28, *(eax_28 + 0xc) + 0x10)
                                result_2 = &data_5559b1
                    
                    var_8_1.b = 0x1a
                    
                    if (data_cdf414 != 0)
                        void* result_10 = result_1
                        
                        if (result_10 != 0 && *result_10 != 0)
                            char* eax_29 = sub_44f000(&result_1)
                            int32_t temp15_1 = *(eax_29 + 4)
                            *(eax_29 + 4) -= 1
                            
                            if (temp15_1 == 1)
                                sub_45d050(eax_29, *(eax_29 + 0xc) + 0x10)
                    
                    var_8_1.b = 1
                    sub_44f240(&result_1, "/sys")
                    var_8_1.b = 0x1b
                    lpFileName = &result_1
                    char* const lpFileName_8 = &data_5559b1
                    char* lpFileName_18 = *sub_44f810(&lpFileName_23, &result_2, lpFileName)
                    
                    if (lpFileName_18 != 0)
                        lpFileName_8 = lpFileName_18
                    
                    lpFileName = lpFileName_8
                    bool var_121_4 = GetFileAttributesA(lpFileName) == 0xffffffff
                    var_8_1.b = 0x1c
                    
                    if (data_cdf414 != 0)
                        result = result_2
                        
                        if (result != 0 && *result != 0)
                            result = sub_44f000(&result_2)
                            int32_t temp16_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp16_1 == 1)
                                sub_45d050(result, *(result + 0xc) + 0x10)
                                result_2 = &data_5559b1
                    
                    var_8_1.b = 0x1d
                    
                    if (data_cdf414 != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_44f000(&result_1)
                            int32_t temp17_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp17_1 == 1)
                                sub_45d050(result, *(result + 0xc) + 0x10)
                    
                    var_8_1.b = 1
                    
                    if (var_121_4 != 0)
                        sub_44f240(&result_1, "trunk/Engine")
                        var_8_1.b = 0x1e
                        lpFileName = &result_1
                        lpFileName = sub_44f810(&lpFileName_14, &result_2, lpFileName)
                        var_8_1.b = 0x1f
                        sub_44f510(&lpFileName_23, lpFileName)
                        var_8_1.b = 0x20
                        
                        if (data_cdf414 != 0)
                            void* result_11 = result_2
                            
                            if (result_11 != 0 && *result_11 != 0)
                                char* eax_32 = sub_44f000(&result_2)
                                int32_t temp18_1 = *(eax_32 + 4)
                                *(eax_32 + 4) -= 1
                                
                                if (temp18_1 == 1)
                                    sub_45d050(eax_32, *(eax_32 + 0xc) + 0x10)
                                    result_2 = &data_5559b1
                        
                        var_8_1.b = 0x21
                        
                        if (data_cdf414 != 0)
                            void* result_12 = result_1
                            
                            if (result_12 != 0 && *result_12 != 0)
                                char* eax_33 = sub_44f000(&result_1)
                                int32_t temp19_1 = *(eax_33 + 4)
                                *(eax_33 + 4) -= 1
                                
                                if (temp19_1 == 1)
                                    sub_45d050(eax_33, *(eax_33 + 0xc) + 0x10)
                        
                        var_8_1.b = 1
                        sub_44f240(&result_1, "/sys")
                        var_8_1.b = 0x22
                        lpFileName = &result_1
                        char* const lpFileName_9 = &data_5559b1
                        char* lpFileName_19 = *sub_44f810(&lpFileName_23, &result_2, lpFileName)
                        
                        if (lpFileName_19 != 0)
                            lpFileName_9 = lpFileName_19
                        
                        lpFileName = lpFileName_9
                        void** lpFileName_10
                        result, lpFileName_10 = GetFileAttributesA(lpFileName)
                        bool var_121_5 = result == 0xffffffff
                        var_8_1.b = 0x23
                        
                        if (data_cdf414 != 0)
                            result = result_2
                            
                            if (result != 0 && *result != 0)
                                lpFileName_10 = &result_2
                                result = sub_44f000(lpFileName_10)
                                int32_t temp20_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp20_1 == 1)
                                    result, lpFileName_10 = sub_45d050(result, *(result + 0xc) + 0x10)
                                    result_2 = &data_5559b1
                        
                        var_8_1.b = 0x24
                        
                        if (data_cdf414 != 0)
                            result = result_1
                            
                            if (result != 0 && *result != 0)
                                lpFileName_10 = &result_1
                                result = sub_44f000(lpFileName_10)
                                int32_t temp21_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp21_1 == 1)
                                    result, lpFileName_10 = sub_45d050(result, *(result + 0xc) + 0x10)
                        
                        var_8_1.b = 1
                        
                        if (var_121_5 != 0)
                            char* lpFileName_2 = lpFileName_14
                            lpFileName = lpFileName_10
                            lpFileName = lpFileName_2
                            
                            if (lpFileName_2 != 0 && *lpFileName_2 != 0)
                                char* eax_35 = sub_44f000(&lpFileName)
                                *(eax_35 + 4) += 1
                            
                            lpFileName = sub_4a9e20(&result_2)
                            var_8_1.b = 0x25
                            sub_44f510(&lpFileName_14, lpFileName)
                            var_8_1.b = 0x26
                            
                            if (data_cdf414 != 0)
                                void* result_13 = result_2
                                
                                if (result_13 != 0 && *result_13 != 0)
                                    char* eax_37 = sub_44f000(&result_2)
                                    int32_t temp22_1 = *(eax_37 + 4)
                                    *(eax_37 + 4) -= 1
                                    
                                    if (temp22_1 == 1)
                                        sub_45d050(eax_37, *(eax_37 + 0xc) + 0x10)
                            
                            var_8_1.b = 1
                            sub_44f240(&result_1, "Engine")
                            var_8_1.b = 0x27
                            lpFileName = &result_1
                            lpFileName = sub_44f810(&lpFileName_14, &result_2, lpFileName)
                            var_8_1.b = 0x28
                            sub_44f510(&lpFileName_23, lpFileName)
                            var_8_1.b = 0x29
                            
                            if (data_cdf414 != 0)
                                void* result_14 = result_2
                                
                                if (result_14 != 0 && *result_14 != 0)
                                    char* eax_39 = sub_44f000(&result_2)
                                    int32_t temp23_1 = *(eax_39 + 4)
                                    *(eax_39 + 4) -= 1
                                    
                                    if (temp23_1 == 1)
                                        sub_45d050(eax_39, *(eax_39 + 0xc) + 0x10)
                                        result_2 = &data_5559b1
                            
                            var_8_1.b = 0x2a
                            
                            if (data_cdf414 != 0)
                                void* result_15 = result_1
                                
                                if (result_15 != 0 && *result_15 != 0)
                                    char* eax_40 = sub_44f000(&result_1)
                                    int32_t temp24_1 = *(eax_40 + 4)
                                    *(eax_40 + 4) -= 1
                                    
                                    if (temp24_1 == 1)
                                        sub_45d050(eax_40, *(eax_40 + 0xc) + 0x10)
                            
                            var_8_1.b = 1
                            sub_44f240(&result_1, "/sys")
                            var_8_1.b = 0x2b
                            lpFileName = &result_1
                            char* const lpFileName_11 = &data_5559b1
                            char* lpFileName_20 = *sub_44f810(&lpFileName_23, &result_2, lpFileName)
                            
                            if (lpFileName_20 != 0)
                                lpFileName_11 = lpFileName_20
                            
                            lpFileName = lpFileName_11
                            bool var_121_6 = GetFileAttributesA(lpFileName) == 0xffffffff
                            var_8_1.b = 0x2c
                            
                            if (data_cdf414 != 0)
                                result = result_2
                                
                                if (result != 0 && *result != 0)
                                    result = sub_44f000(&result_2)
                                    int32_t temp25_1 = *(result + 4)
                                    *(result + 4) -= 1
                                    
                                    if (temp25_1 == 1)
                                        sub_45d050(result, *(result + 0xc) + 0x10)
                                        result_2 = &data_5559b1
                            
                            var_8_1.b = 0x2d
                            
                            if (data_cdf414 != 0)
                                result = result_1
                                
                                if (result != 0 && *result != 0)
                                    result = sub_44f000(&result_1)
                                    int32_t temp26_1 = *(result + 4)
                                    *(result + 4) -= 1
                                    
                                    if (temp26_1 == 1)
                                        sub_45d050(result, *(result + 0xc) + 0x10)
                            
                            var_8_1.b = 1
                            
                            if (var_121_6 != 0)
                                sub_44f240(&result_1, "trunk/Engine")
                                var_8_1.b = 0x2e
                                lpFileName = &result_1
                                lpFileName = sub_44f810(&lpFileName_14, &result_2, lpFileName)
                                var_8_1.b = 0x2f
                                sub_44f510(&lpFileName_23, lpFileName)
                                var_8_1.b = 0x30
                                
                                if (data_cdf414 != 0)
                                    void* result_16 = result_2
                                    
                                    if (result_16 != 0 && *result_16 != 0)
                                        char* eax_43 = sub_44f000(&result_2)
                                        int32_t temp27_1 = *(eax_43 + 4)
                                        *(eax_43 + 4) -= 1
                                        
                                        if (temp27_1 == 1)
                                            sub_45d050(eax_43, *(eax_43 + 0xc) + 0x10)
                                            result_2 = &data_5559b1
                                
                                var_8_1.b = 0x31
                                
                                if (data_cdf414 != 0)
                                    void* result_17 = result_1
                                    
                                    if (result_17 != 0 && *result_17 != 0)
                                        char* eax_44 = sub_44f000(&result_1)
                                        int32_t temp28_1 = *(eax_44 + 4)
                                        *(eax_44 + 4) -= 1
                                        
                                        if (temp28_1 == 1)
                                            sub_45d050(eax_44, *(eax_44 + 0xc) + 0x10)
                                
                                var_8_1.b = 1
                                sub_44f240(&result_1, "/sys")
                                var_8_1.b = 0x32
                                lpFileName = &result_1
                                char* const lpFileName_12 = &data_5559b1
                                char* lpFileName_21 = *sub_44f810(&lpFileName_23, &result_2, lpFileName)
                                
                                if (lpFileName_21 != 0)
                                    lpFileName_12 = lpFileName_21
                                
                                lpFileName = lpFileName_12
                                bool var_121_7 = GetFileAttributesA(lpFileName) == 0xffffffff
                                var_8_1.b = 0x33
                                
                                if (data_cdf414 != 0)
                                    result = result_2
                                    
                                    if (result != 0 && *result != 0)
                                        result = sub_44f000(&result_2)
                                        int32_t temp29_1 = *(result + 4)
                                        *(result + 4) -= 1
                                        
                                        if (temp29_1 == 1)
                                            sub_45d050(result, *(result + 0xc) + 0x10)
                                            result_2 = &data_5559b1
                                
                                var_8_1.b = 0x34
                                
                                if (data_cdf414 != 0)
                                    result = result_1
                                    
                                    if (result != 0 && *result != 0)
                                        result = sub_44f000(&result_1)
                                        int32_t temp30_1 = *(result + 4)
                                        *(result + 4) -= 1
                                        
                                        if (temp30_1 == 1)
                                            sub_45d050(result, *(result + 0xc) + 0x10)
                                
                                var_8_1.b = 1
                                
                                if (var_121_7 != 0)
                                    lpFileName = &data_ce18a0
                                    sub_44f590(&lpFileName_14, lpFileName)
                                    lpFileName = &data_ce18a0
                                    sub_44e450("Can't find sys directory %s\n")
            
            lpFileName_22 = lpFileName_23
            lpFileName_13 = lpFileName_14
        
        if (lpFileName_22 != 0)
            lpFileName_24 = lpFileName_22
        
        void* ecx_96 = 0xce1798 - lpFileName_24
        
        do
            result.b = *lpFileName_24
            lpFileName_24 = &lpFileName_24[1]
            *(lpFileName_24 + ecx_96 - 1) = result.b
        while (result.b != 0)
        
        var_8_1.b = 0x35
        
        if (data_cdf414 != 0 && lpFileName_22 != 0 && *lpFileName_22 != result.b)
            result = sub_44f000(&lpFileName_23)
            int32_t temp4_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp4_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
        
        int32_t var_8_2 = 0x36
        
        if (data_cdf414 != 0 && lpFileName_13 != 0 && *lpFileName_13 != 0)
            result = sub_44f000(&lpFileName_14)
            int32_t temp6_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp6_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
