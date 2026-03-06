// 函数名称: sub_4cf940
// 虚拟地址: 0x4cf940
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULTsub_4cf940()
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545590
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_14 = eax_2
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_16c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_170 = 0xac
    HWND hWnd = GetDlgItem(data_ce1c90, 0xac)
    int32_t var_170_1 = 0
    int32_t var_174_1 = 0
    int32_t var_178 = 0x184
    HWND hWnd_1 = hWnd
    LRESULT result = SendMessageA(hWnd, 0x184, 0, 0)
    
    if (data_ce37a4 != 0)
        result = sub_4f7520(data_ce27a4)
        
        if (result != 0)
            uint32_t ecx_2 = zx.d(*(result + 0x30))
            int32_t var_174_2 = 0
            int32_t var_178_1 = 0x180
            int32_t var_11c_1 = 8
            char const* const lParam_1 = "General"
            char const* const var_12c_1 = "Hidden"
            char* const var_124_1 = &data_5559b1
            uint32_t var_120_1 = ecx_2
            char const* const var_128 = nullptr
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_120_2 = *(result + 4)
            int32_t var_174_3 = 0
            int32_t var_178_2 = 0x180
            int32_t var_11c_2 = 0
            lParam_1 = "General"
            char const* const var_12c_2 = "Name"
            char* const var_124_2 = &data_5559b1
            var_128 = nullptr
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            void* const eax_5 = &data_572748
            char* const eax_6
            
            while (true)
                if (*eax_5 == *result)
                    eax_6 = *(eax_5 + 4)
                    break
                
                eax_5 += 8
                
                if (*(eax_5 + 4) == 0)
                    eax_6 = &data_5559b1
                    break
            
            char* const var_138_1 = eax_6
            int32_t var_174_4 = 0
            int32_t var_178_3 = 0x180
            int32_t var_134_1 = 1
            char const* const lParam = "General"
            char const* const var_144_1 = "Type"
            char* const var_13c_1 = &data_5559b1
            char const* const var_140 = "Model"
            SendMessageA(hWnd, 0x180, 0, &lParam)
            var_174_4.q = _mm_cvtps_pd(*(result + 0x10))
            HWND var_17c_3
            var_17c_3.q = _mm_cvtps_pd(*(result + 0xc))
            int64_t var_184_1 = _mm_cvtps_pd(*(result + 8))
            char const* const var_188_1 = "%g %g %g"
            char* const var_118
            sub_44f980(&var_118, "%g %g %g")
            char* eax_7 = var_118
            char* const edi = &data_5559b1
            int32_t var_11c_3 = 0
            lParam_1 = "General"
            char* const ecx_4 = &data_5559b1
            char const* const var_12c_3 = "Position"
            
            if (eax_7 != 0)
                ecx_4 = eax_7
            
            char* const var_124_3 = &data_5559b1
            char* const var_120_3 = ecx_4
            int32_t var_174_5 = 0
            int32_t var_178_4 = 0x180
            var_128 = nullptr
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_1 = 0
            
            if (data_cdf414 != 0)
                char* eax_8 = var_118
                
                if (eax_8 != 0 && *eax_8 != 0)
                    char* eax_9 = sub_44f000(&var_118)
                    int32_t temp0_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                        var_118 = &data_5559b1
            
            int32_t var_8_2 = 0xffffffff
            var_174_5.q = _mm_cvtps_pd(*(result + 0x1c))
            HWND var_17c_4
            var_17c_4.q = _mm_cvtps_pd(*(result + 0x18))
            int64_t var_184_2 = _mm_cvtps_pd(*(result + 0x14))
            char const* const var_188_2 = "%g %g %g"
            sub_44f980(&var_118, "%g %g %g")
            char* const eax_10 = var_118
            int32_t var_11c_4 = 0
            char* const ecx_7 = &data_5559b1
            lParam_1 = "General"
            
            if (eax_10 != 0)
                ecx_7 = eax_10
            
            char const* const var_12c_4 = "Rotation"
            char* const var_124_4 = &data_5559b1
            int32_t var_174_6 = 0
            int32_t var_178_5 = 0x180
            char* const var_120_4 = ecx_7
            var_128 = nullptr
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_3 = 1
            
            if (data_cdf414 != 0)
                char* const eax_11 = var_118
                
                if (eax_11 != 0 && *eax_11 != 0)
                    char* eax_12 = sub_44f000(&var_118)
                    int32_t temp1_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
                        var_118 = &data_5559b1
            
            int32_t var_8_4 = 0xffffffff
            var_174_6.q = _mm_cvtps_pd(*(result + 0x28))
            HWND var_17c_5
            var_17c_5.q = _mm_cvtps_pd(*(result + 0x24))
            int64_t var_184_3 = _mm_cvtps_pd(*(result + 0x20))
            char const* const var_188_3 = "%g %g %g"
            sub_44f980(&var_118, "%g %g %g")
            char* const eax_13 = var_118
            int32_t var_11c_5 = 0
            char* const ecx_10 = &data_5559b1
            lParam_1 = "General"
            
            if (eax_13 != 0)
                ecx_10 = eax_13
            
            char const* const var_12c_5 = "Scale"
            char* const var_124_5 = &data_5559b1
            int32_t var_174_7 = 0
            int32_t var_178_6 = 0x180
            char* const var_120_5 = ecx_10
            var_128 = nullptr
            char* const* ecx_11 = SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_5 = 2
            
            if (data_cdf414 != 0)
                char* const eax_14 = var_118
                
                if (eax_14 != 0 && *eax_14 != 0)
                    ecx_11 = &var_118
                    char* eax_15 = sub_44f000(ecx_11)
                    int32_t temp2_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        ecx_11 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                        var_118 = &data_5559b1
            
            int32_t var_8_6 = 0xffffffff
            
            switch (*result - 1)
                case 0
                    void* eax_43 = *(result + 0x38)
                    
                    if (eax_43 != 0)
                        char* eax_44 = *(eax_43 + 0x20)
                        
                        if (eax_44 != 0)
                            edi = eax_44
                    else
                        edi = &data_5559b1
                    
                    int32_t var_170_16 = 0
                    char* const var_13c_5 = edi
                    char const* const* var_174_16 = &var_140
                    int32_t var_178_14 = 6
                    char* const* var_17c_13 = ecx_11
                    char const* const var_134_5 = "Image"
                    var_140 = "Choose Image"
                    char const* const var_138_5 = "Image (*.jpg, *.png)"
                    var_184_3:4.d = "Image"
                    sub_4cf800(&var_140, "Image", hWnd)
                case 1
                    void* eax_32 = *(result + 0x74)
                    
                    if (eax_32 != 0)
                        char* eax_33 = *(eax_32 + 0x20)
                        
                        if (eax_33 != 0)
                            edi = eax_33
                    else
                        edi = &data_5559b1
                    
                    int32_t var_170_12 = 0
                    char* const var_13c_3 = edi
                    char const* const* var_174_12 = &var_140
                    int32_t var_178_11 = 6
                    char* const* var_17c_10 = ecx_11
                    void* const var_134_3 = &data_587a58
                    var_140 = "Choose UI"
                    char const* const var_138_3 = "UI (*.ui)"
                    var_184_3:4.d = &data_5938bc
                    sub_4cf800(&var_140, &data_5938bc, hWnd)
                case 2
                    void* eax_18 = *(result + 0x58)
                    char* const ecx_13
                    
                    if (eax_18 != 0)
                        char* eax_19 = *(eax_18 + 0x20)
                        ecx_13 = &data_5559b1
                        
                        if (eax_19 != 0)
                            ecx_13 = eax_19
                    else
                        ecx_13 = &data_5559b1
                    
                    int32_t var_170_8 = 0
                    char* const var_13c_2 = ecx_13
                    char const* const* var_174_8 = &var_140
                    int32_t var_178_7 = 6
                    char* const var_17c_7 = ecx_13
                    var_184_3:4.d = "Model"
                    void* const var_134_2 = &data_597e58
                    var_140 = "Choose Model"
                    char const* const var_138_2 = "Model (*.fbx)"
                    int32_t eax_21
                    int32_t ecx_15
                    eax_21, ecx_15 = sub_4cf800(&var_140, "Model", hWnd)
                    int32_t var_170_9 = 0
                    int32_t var_174_9 = *(result + 0x5c)
                    int32_t var_178_8 = 0
                    int32_t var_17c_8 = ecx_15
                    var_184_3:4.d = "Animation"
                    int32_t eax_22 = sub_4cf800(eax_21, "Model", hWnd)
                    int32_t* ecx_17 = *(result + 0x58)
                    
                    if (ecx_17[1] != 2)
                        char const* const var_170_23 = "StructureGetDef"
                        int32_t var_174_23 = 0x559
                        char const* const var_178_22 = "c:\ax2017\engine\structure.cpp"
                        sub_44e4d0(eax_22, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                            "c:\ax2017\engine\structure.cpp", 0x559, "StructureGetDef")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    void* eax_23 = sub_4459f0(ecx_17)
                    void var_10d
                    void* edx_9 = &var_10d
                    int32_t var_114
                    __builtin_strncpy(&var_114, "<none>", 7)
                    char* const ecx_18
                    ecx_18.w = 0x3e65
                    ecx_18.b = 0
                    void* var_154_1 = eax_23
                    int32_t var_150_1 = 0
                    
                    if (*(eax_23 + 0x30) s> 0)
                        ecx_18 = nullptr
                        var_118 = nullptr
                        bool cond:8_1
                        
                        do
                            char* eax_25 = *(ecx_18 + *(eax_23 + 0x2c))
                            char* ecx_19 = eax_25
                            void* eax_26
                            
                            do
                                eax_26.b = *ecx_19
                                ecx_19 = &ecx_19[1]
                            while (eax_26.b != 0)
                            void* ecx_20 = ecx_19 - &ecx_19[1]
                            void* eax_28 = edx_9 + 1 + ecx_20
                            hWnd = hWnd_1
                            
                            if (eax_28 u>= &var_14)
                                char const* const var_170_24 = "GetModelLooks"
                                int32_t var_174_24 = 0x132d
                                char const* const var_178_23 =
                                    "c:\ax2017\engine\windows\editorwindow.cpp"
                                sub_44e4d0(eax_28, &data_5559b1, "cur + lenName + 1 < buffer + maxLen", 
                                    "c:\ax2017\engine\windows\editorwindow.cpp", 0x132d, 
                                    "GetModelLooks")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            sub_51d5b0(edx_9, eax_25, ecx_20 + 1)
                            var_118 = &var_118[0xc]
                            edx_9 = eax_28
                            cond:8_1 = var_150_1 + 1 s< *(var_154_1 + 0x30)
                            ecx_18 = var_118
                            var_150_1 += 1
                            eax_23 = var_154_1
                        while (cond:8_1)
                    
                    *edx_9 = 0
                    int32_t* var_170_11 = &var_114
                    int32_t var_174_11 = *(result + 0x70)
                    int32_t var_178_10 = 1
                    char* const var_17c_9 = ecx_18
                    var_184_3:4.d = "Look"
                    sub_4cf800(&var_114, "Model", hWnd)
                case 4
                    if (*(result + 0x94) s< 1)
                        int32_t var_170_13 = 0
                        char* const* var_174_13 = ecx_11
                        int32_t* eax_35 = sub_48c3c0(data_e47018, 0x90)
                        sub_4d2b10(eax_35, eax_35, result, 0)
                    
                    void* eax_37 = **(result + 0x90)
                    char* const ecx_24
                    
                    if (eax_37 != 0)
                        char* eax_38 = *(eax_37 + 0x20)
                        ecx_24 = &data_5559b1
                        
                        if (eax_38 != 0)
                            ecx_24 = eax_38
                    else
                        ecx_24 = &data_5559b1
                    
                    int32_t var_170_14 = 0
                    char* const var_13c_4 = ecx_24
                    char const* const* var_174_14 = &var_140
                    int32_t var_178_12 = 6
                    char* const var_17c_11 = ecx_24
                    var_184_3:4.d = "Subfab"
                    void* const var_134_4 = &data_597ea4
                    var_140 = "Choose Fab"
                    char const* const var_138_4 = "Fab (*.fab)"
                    int32_t ecx_26 = sub_4cf800(&var_140, "Distribute", hWnd)
                    uint128_t xmm1_1 = zx.o(*(result + 0x80))
                    uint128_t xmm2_1 = zx.o(*(result + 0x7c))
                    float xmm0_20[0x2] = _mm_cvtepi32_ps(zx.o(*(result + 0x84)))
                    var_184_3.d = ecx_26
                    float xmm1_2[0x2] = _mm_cvtepi32_ps(xmm1_1)
                    int64_t xmm0_21 = _mm_cvtps_pd(xmm0_20)
                    float xmm2_2[0x2] = _mm_cvtepi32_ps(xmm2_1)
                    var_174_14.q = xmm0_21
                    var_17c_11.q = _mm_cvtps_pd(xmm1_2)
                    int64_t var_184_4 = _mm_cvtps_pd(xmm2_2)
                    char const* const var_188_4 = "%g %g %g"
                    int32_t ecx_27 = sub_44f980(&var_118, "%g %g %g")
                    char* const eax_40 = var_118
                    
                    if (eax_40 != 0)
                        edi = eax_40
                    
                    int32_t var_170_15 = 0
                    char* const var_174_15 = edi
                    int32_t var_178_13 = 0
                    int32_t var_17c_12 = ecx_27
                    var_184_4:4.d = "Dimensions"
                    sub_4cf800(eax_40, "Distribute", hWnd)
                    int32_t var_8_7 = 3
                    
                    if (data_cdf414 != 0)
                        char* const eax_41 = var_118
                        
                        if (eax_41 != 0 && *eax_41 != 0)
                            char* eax_42 = sub_44f000(&var_118)
                            int32_t temp4_1 = *(eax_42 + 4)
                            *(eax_42 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                case 5
                    void* const eax_47 = &data_572648
                    int32_t ecx_31 = *(result + 0x98)
                    char* const eax_48
                    
                    while (true)
                        if (*eax_47 == ecx_31)
                            eax_48 = *(eax_47 + 4)
                            break
                        
                        eax_47 += 8
                        
                        if (*(eax_47 + 4) == 0)
                            eax_48 = &data_5559b1
                            break
                    
                    char const* const var_170_18 = "Directional"
                    char* const var_174_18 = eax_48
                    int32_t var_178_16 = 1
                    int32_t var_17c_15 = ecx_31
                    var_184_3:4.d = "Light Type"
                    sub_4cf800(eax_48, "Light", hWnd)
                    var_174_18.q = _mm_cvtps_pd(*(result + 0xa8))
                    void* const var_178_17 = &data_584ae4
                    int32_t ecx_33 = sub_44f980(&var_118, &data_584ae4)
                    char* const eax_49 = var_118
                    
                    if (eax_49 != 0)
                        edi = eax_49
                    
                    int32_t var_170_19 = 0
                    char* const var_174_19 = edi
                    int32_t var_178_18 = 0
                    int32_t var_17c_17 = ecx_33
                    var_184_3:4.d = "Intensity"
                    sub_4cf800(eax_49, "Light", hWnd)
                    int32_t var_8_8 = 4
                    
                    if (data_cdf414 != 0)
                        char* const eax_50 = var_118
                        
                        if (eax_50 != 0 && *eax_50 != 0)
                            char* eax_51 = sub_44f000(&var_118)
                            int32_t temp3_1 = *(eax_51 + 4)
                            *(eax_51 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_45d050(eax_51, *(eax_51 + 0xc) + 0x10)
                    
                    int32_t var_170_20 = 0
                    uint32_t eax_52
                    int32_t ecx_38
                    eax_52, ecx_38 = sub_4cd670(result + 0x9c)
                    uint32_t var_174_20 = eax_52
                    int32_t var_178_19 = 4
                    int32_t var_17c_18 = ecx_38
                    var_184_3:4.d = "Color"
                    sub_4cf800(eax_52, "Light", hWnd)
                    
                    if (*(result + 0x98) == 3)
                        char* eax_53
                        int32_t ecx_41
                        eax_53, ecx_41 = sub_4cf840(*(result + 0xac))
                        int32_t var_170_21 = 0
                        char* var_124_6 = eax_53
                        void* const var_11c_6 = &data_59394c
                        int32_t* var_174_21 = &var_128
                        int32_t var_178_20 = 6
                        int32_t var_17c_19 = ecx_41
                        var_128 = "Choose IBL"
                        char const* const var_120_6 = "IBL (*.hdr)"
                        var_184_3:4.d = &data_59394c
                        sub_4cf800(&var_128, "Light", hWnd)
                case 7
                    void* eax_45 = *(result + 0xb0)
                    
                    if (eax_45 != 0)
                        char* eax_46 = *(eax_45 + 0x20)
                        
                        if (eax_46 != 0)
                            edi = eax_46
                    else
                        edi = &data_5559b1
                    
                    int32_t var_170_17 = 0
                    char* const var_13c_6 = edi
                    char const* const* var_174_17 = &var_140
                    int32_t var_178_15 = 6
                    char* const* var_17c_14 = ecx_11
                    char const* const var_134_6 = "Particle"
                    var_140 = "Choose Particle"
                    char const* const var_138_6 = "Particle (*.particle)"
                    var_184_3:4.d = "Particle"
                    sub_4cf800(&var_140, "Particle", hWnd)
            
            int32_t var_170_22 = 0
            int32_t var_174_22 = 0
            int32_t var_178_21 = 0x401
            result = SendMessageA(hWnd, 0x401, 0, 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
    return result
}
