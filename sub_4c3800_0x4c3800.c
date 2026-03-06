// 函数名称: sub_4c3800
// 虚拟地址: 0x4c3800
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c3800(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5450c4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_60 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = arg2
    int32_t* var_14 = ebx
    ebx[0xa] = *(arg1 + 4)
    ebx[0xb] = *(arg1 + 8)
    ebx[0xc] = *(arg1 + 0xc)
    ebx[0xd] = *(arg1 + 0x10)
    int32_t eax_6
    eax_6.b = *(arg1 + 0x2c)
    ebx[0xe].b = eax_6.b
    eax_6.b = *(arg1 + 0x2d)
    *(ebx + 0x39) = eax_6.b
    int32_t eax_7 = *(arg1 + 0x18)
    int32_t esi_1 = eax_7 << 4
    ebx[1] = eax_7
    uint32_t (* edi)[0x4]
    
    if (esi_1 != 0)
        edi = sub_45cd70(esi_1)
        _memset(edi, 0, esi_1)
        eax_7 = ebx[1]
    else
        edi = nullptr
    
    *ebx = edi
    int32_t i_7 = 0
    char* const var_1c
    
    if (eax_7 s> 0)
        int32_t ecx_1 = 0
        int32_t edx = 0
        int32_t var_20_1 = 0
        int32_t var_2c_1 = 0
        int32_t i
        
        do
            char** ebx_2 = *ebx + edx
            var_1c = &data_5559b1
            int32_t* edi_2 = *(arg1 + 0x14) + ecx_1
            int32_t var_8_1 = 0
            char* eax_10 = *edi_2
            void* eax_11
            int32_t ecx_2
            int32_t edx_1
            eax_11, ecx_2, edx_1 = _strrchr(eax_10, 0x5f)
            float var_28
            int32_t eax_13
            
            if (eax_11 != 0)
                int32_t* var_64_2 = &var_28
                eax_13 = sub_4529c0(&var_28, edx_1, ecx_2, eax_11, "_fps%f")
            
            if (eax_11 == 0 || eax_13 != 1)
                var_28 = 0f
                sub_44f590(&var_1c, eax_10)
            else
                sub_44f690(&var_1c, eax_10, eax_11 - eax_10)
            
            float xmm0_1 = var_28
            xmm0_1 f- 0
            char** eax_15
            eax_15:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                var_28 = *(arg1 + 0xc)
            
            char* const esi_4 = var_1c
            ebx_2[2] = edi_2[2]
            ebx_2[1] = edi_2[1]
            char* const eax_20 = &data_5559b1
            
            if (esi_4 != 0)
                eax_20 = esi_4
            
            char* edi_3 = eax_20
            ebx_2[3] = var_28
            char* const var_4c_1 = eax_20
            void* ecx_5 = &edi_3[1]
            
            do
                eax_20.b = *edi_3
                edi_3 = &edi_3[1]
            while (eax_20.b != 0)
            
            char* eax_21 = sub_45cd70(edi_3 - ecx_5 + 1)
            *ebx_2 = eax_21
            sub_51d5b0(eax_21, var_4c_1, edi_3 - ecx_5 + 1)
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0 && esi_4 != 0 && *esi_4 != 0)
                char* eax_22 = sub_44f000(&var_1c)
                int32_t temp1_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                    var_1c = &data_5559b1
            
            ebx = var_14
            i = i_7 + 1
            int32_t var_8_3 = 0xffffffff
            edx = var_2c_1 + 0x10
            ecx_1 = var_20_1 + 0xc
            i_7 = i
            var_2c_1 = edx
            var_20_1 = ecx_1
        while (i s< ebx[1])
    
    int32_t edx_5 = 0
    int32_t esi_5 = 0
    ebx[2] = *(arg1 + 0x1c)
    ebx[3] = *(arg1 + 0x20)
    int32_t i_8 = *(arg1 + 0x28)
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0
    
    if (i_8 s> 0)
        void* eax_27 = *(arg1 + 0x24) + 0x10
        int32_t i_1
        
        do
            int32_t ecx_11 = *(eax_27 - 8)
            int32_t edi_6
            
            if (ecx_11 != 0)
                edi_6 = *eax_27
            else
                ecx_11 = 1
                edi_6 = 1
            
            esi_5 += edi_6
            edx_5 += ecx_11
            eax_27 += 0x14
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
    
    int32_t* eax_29 = var_14
    int32_t edi_8 = edx_5 * 0x14
    eax_29[5] = edx_5
    uint32_t (* ebx_3)[0x4]
    
    if (edi_8 != 0)
        ebx_3 = sub_45cd70(edi_8)
        _memset(ebx_3, 0, edi_8)
        eax_29 = var_14
    else
        ebx_3 = nullptr
    
    eax_29[4] = ebx_3
    var_14[7] = esi_5
    int32_t esi_7 = esi_5 * 0x60
    uint32_t (* edi_9)[0x4]
    
    if (esi_7 != 0)
        edi_9 = sub_45cd70(esi_7)
        _memset(edi_9, 0, esi_7)
    else
        edi_9 = nullptr
    
    var_14[6] = edi_9
    uint32_t (* eax_31)[0x4] = sub_45cd70(0x320)
    _memset(eax_31, 0, 0x320)
    void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
    var_14[8] = eax_31
    int32_t* esi_9 = var_14
    void* ecx_14 = *ThreadLocalStoragePointer
    esi_9[9] = 0
    
    if (data_e49cc0 s> *(ecx_14 + 4))
        __Init_thread_header(&data_e49cc0)
        
        if (data_e49cc0 == 0xffffffff)
            int32_t var_8_4 = 2
            data_e49cc4 = sub_48d5b0("sys/defaultflanim.texture", 3)
            int32_t var_8_5 = 0xffffffff
            __Init_thread_footer(&data_e49cc0)
    
    char* const edx_6 = nullptr
    int32_t var_18 = 0
    int32_t ebx_5 = 0
    void* ecx_15 = arg1
    var_1c = nullptr
    int32_t var_30 = 0
    int32_t result = *(ecx_15 + 0x28)
    
    if (result s> 0)
        int32_t var_34_2 = 0
        
        while (true)
            if (ebx_5 s>= result)
                sub_44e4d0(result, &data_5559b1, "mayaLayerIndex < pMayaDef->mLayerCount", 
                    "c:\ax2017\engine\flanim.cpp", 0x69a, "FlanimDefFromMayaDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t* edi_11 = *(ecx_15 + 0x24) + var_34_2
            int32_t* var_2c_2 = edi_11
            int32_t eax_34 = edi_11[2]
            int32_t esi_13
            
            if (eax_34 != 0)
                int32_t i_5 = 0
                
                if (eax_34 s<= 0)
                    esi_13 = var_18
                else
                    void* var_40_1 = nullptr
                    int32_t ebx_8 = edx_6 * 0x14
                    int32_t i_2
                    
                    do
                        if (edx_6 s>= esi_9[5])
                            sub_44e4d0(eax_34, &data_5559b1, 
                                "flanimLayerIndex < pFlanimDef->mLayerCount", 
                                "c:\ax2017\engine\flanim.cpp", 0x6ae, "FlanimDefFromMayaDef")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        char* edi_13 = *edi_11
                        int32_t eax_38 = esi_9[4]
                        int32_t var_38_1 = eax_38
                        
                        if (edi_13 == 0)
                            sub_44e4d0(eax_38, &data_5559b1, "pExistingString", 
                                "c:\ax2017\engine\definition.cpp", 0x25b, "DefDeepCopyString")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        char* esi_14 = edi_13
                        void* ecx_18 = &esi_14[1]
                        
                        do
                            eax_38.b = *esi_14
                            esi_14 = &esi_14[1]
                        while (eax_38.b != 0)
                        
                        char* eax_39 = sub_45cd70(esi_14 - ecx_18 + 1)
                        *(ebx_8 + var_38_1) = eax_39
                        sub_51d5b0(eax_39, edi_13, esi_14 - ecx_18 + 1)
                        edi_11 = var_2c_2
                        int32_t* edx_7 = var_40_1
                        int32_t eax_40 = edi_11[1]
                        var_1c = &var_1c[1]
                        *(ebx_8 + var_38_1 + 4) = *(edx_7 + eax_40) + var_18
                        *(ebx_8 + var_38_1 + 8) = *(edx_7 + edi_11[1] + 4) + var_18
                        *(ebx_8 + var_38_1 + 0xc) = *(edx_7 + edi_11[1] + 8) + var_18
                        eax_34 = *(edx_7 + edi_11[1] + 0xc) + var_18
                        var_40_1 = &edx_7[4]
                        esi_9 = var_14
                        edx_6 = var_1c
                        *(ebx_8 + var_38_1 + 0x10) = eax_34
                        ebx_8 += 0x14
                        i_2 = i_5 + 1
                        i_5 = i_2
                    while (i_2 s< edi_11[2])
                    esi_13 = var_18
                    ebx_5 = var_30
            else
                if (edx_6 s>= esi_9[5])
                    sub_44e4d0(eax_34, &data_5559b1, "flanimLayerIndex < pFlanimDef->mLayerCount", 
                        "c:\ax2017\engine\flanim.cpp", 0x69f, "FlanimDefFromMayaDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* edi_12 = edx_6 * 5
                int32_t ebx_6 = esi_9[4]
                char* eax_36 = *var_2c_2
                char* var_4c_2 = eax_36
                
                if (eax_36 == 0)
                    sub_44e4d0(eax_36, &data_5559b1, "pExistingString", 
                        "c:\ax2017\engine\definition.cpp", 0x25b, "DefDeepCopyString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                char* esi_10 = eax_36
                void* ecx_16 = &esi_10[1]
                
                do
                    eax_36.b = *esi_10
                    esi_10 = &esi_10[1]
                while (eax_36.b != 0)
                
                char* eax_37 = sub_45cd70(esi_10 - ecx_16 + 1)
                *(ebx_6 + (edi_12 << 2)) = eax_37
                sub_51d5b0(eax_37, var_4c_2, esi_10 - ecx_16 + 1)
                esi_13 = var_18
                var_1c = &var_1c[1]
                *(ebx_6 + (edi_12 << 2) + 4) = esi_13
                *(ebx_6 + (edi_12 << 2) + 8) = esi_13
                *(ebx_6 + (edi_12 << 2) + 0xc) = esi_13
                *(ebx_6 + (edi_12 << 2) + 0x10) = esi_13
                edi_11 = var_2c_2
                ebx_5 = var_30
            
            int32_t eax_55 = edi_11[4]
            void* ecx_23 = nullptr
            void* var_48_1 = nullptr
            
            if (eax_55 s> 0)
                int32_t edx_10 = esi_13 * 0x60
                int32_t var_4c_3 = edx_10
                
                do
                    int32_t* edi_14 = edi_11[3] + (ecx_23 << 3)
                    void* i_3 = ecx_23 + esi_13
                    int32_t* ecx_24 = var_14
                    
                    if (i_3 s>= ecx_24[7])
                        sub_44e4d0(i_3, &data_5559b1, "flanimVertexIndex < pFlanimDef->mVertexCount", 
                            "c:\ax2017\engine\flanim.cpp", 0x6c0, "FlanimDefFromMayaDef")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    float xmm1_1 = 0f
                    int32_t* ebx_10 = ecx_24[6] + edx_10
                    float xmm3_1 = 0f
                    int32_t xmm2_1 = 0
                    float xmm7_1 = 0f
                    float xmm5_1 = 1f
                    int32_t xmm4_1 = 0
                    int32_t xmm6_1 = 0x3f800000
                    int32_t edx_11 = 0xffffffff
                    int32_t var_40_2 = 0
                    int32_t var_3c_1 = 0
                    void* i_6 = nullptr
                    
                    if (edi_14[1] s> 0)
                        int32_t ecx_25 = 0
                        int32_t* esi_18 = nullptr
                        
                        do
                            int32_t edi_15 = *edi_14
                            float xmm0_4 = *(esi_18 + edi_15)
                            xmm0_4 - 12345f
                            i_3:1.b = (xmm0_4 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_4, 12345f) ? 1 : 0) << 2
                                | (xmm0_4 < 12345f ? 1 : 0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_4))
                                *(esi_18 + edi_15) = xmm1_1
                                *(esi_18 + edi_15 + 4) = xmm2_1
                            else
                                xmm2_1 = *(esi_18 + edi_15 + 4)
                                xmm1_1 = xmm0_4
                            
                            float xmm0_5 = *(esi_18 + edi_15 + 8)
                            xmm0_5 - 12345f
                            i_3:1.b = (xmm0_5 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_5, 12345f) ? 1 : 0) << 2
                                | (xmm0_5 < 12345f ? 1 : 0)
                            bool p_6 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_6))
                                *(esi_18 + edi_15 + 8) = xmm3_1
                                *(esi_18 + edi_15 + 0xc) = xmm4_1
                            else
                                xmm4_1 = *(esi_18 + edi_15 + 0xc)
                                xmm3_1 = xmm0_5
                            
                            float xmm0_6 = *(esi_18 + edi_15 + 0x10)
                            xmm0_6 - 12345f
                            i_3:1.b = (xmm0_6 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_6, 12345f) ? 1 : 0) << 2
                                | (xmm0_6 < 12345f ? 1 : 0)
                            bool p_8 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_8))
                                *(esi_18 + edi_15 + 0x10) = xmm5_1
                                *(esi_18 + edi_15 + 0x14) = xmm6_1
                            else
                                xmm6_1 = *(esi_18 + edi_15 + 0x14)
                                xmm5_1 = xmm0_6
                            
                            float xmm0_7 = *(esi_18 + edi_15 + 0x18)
                            xmm0_7 - 12345f
                            i_3:1.b = (xmm0_7 == 12345f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_7, 12345f) ? 1 : 0) << 2
                                | (xmm0_7 < 12345f ? 1 : 0)
                            bool p_10 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_10))
                                *(esi_18 + edi_15 + 0x18) = xmm7_1
                                *(esi_18 + edi_15 + 0x1c) = var_40_2
                            else
                                xmm7_1 = xmm0_7
                                var_40_2 = *(esi_18 + edi_15 + 0x1c)
                            
                            if (*(esi_18 + edi_15 + 0x20) != 0 || *(esi_18 + edi_15 + 0x21) != 0
                                    || *(esi_18 + edi_15 + 0x22) != 0
                                    || *(esi_18 + edi_15 + 0x23) != 0)
                                edx_11 = *(esi_18 + edi_15 + 0x20)
                            else
                                *(esi_18 + edi_15 + 0x20) = edx_11
                            
                            if (*(esi_18 + edi_15 + 0x24) != 0 || *(esi_18 + edi_15 + 0x25) != 0
                                    || *(esi_18 + edi_15 + 0x26) != 0
                                    || *(esi_18 + edi_15 + 0x27) != 0xff)
                                ecx_25 = *(esi_18 + edi_15 + 0x24)
                            else
                                *(esi_18 + edi_15 + 0x24) = ecx_25
                            
                            int32_t eax_52 = *(esi_18 + edi_15 + 0x28)
                            
                            if (eax_52 == data_e49cc4)
                                *(esi_18 + edi_15 + 0x28) = var_3c_1
                            else
                                var_3c_1 = eax_52
                            
                            esi_18 = &esi_18[0xc]
                            i_3 = i_6 + 1
                            i_6 = i_3
                        while (i_3 s< edi_14[1])
                        
                        int32_t var_20_2 = ecx_25
                        ecx_24 = var_14
                    
                    for (int32_t i_4 = 0; i_4 s< 8; )
                        if (i_4 == 0 || i_4 == 1 || i_4 == 3 || i_4 == 2)
                            i_3 = sub_4c33f0(i_3, ebx_10, edi_14, i_4)
                        else
                            if (i_4 != 4 && i_4 != 5 && i_4 != 6 && i_4 != 7)
                                sub_44e4d0(i_3, &data_5559b1, "Halt", "c:\ax2017\engine\flanim.cpp", 
                                    0x63d, "MayaDefCompressVertexList")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            i_3 = sub_4c3650(i_3, edi_14, ecx_24, ebx_10, i_4)
                        
                        ecx_24 = var_14
                        i_4 += 1
                        ebx_10 = &ebx_10[3]
                    
                    edi_11 = var_2c_2
                    ecx_23 = var_48_1 + 1
                    esi_13 = var_18
                    edx_10 = var_4c_3 + 0x60
                    eax_55 = edi_11[4]
                    var_48_1 = ecx_23
                    var_4c_3 = edx_10
                while (ecx_23 s< eax_55)
                
                ebx_5 = var_30
            
            ecx_15 = arg1
            ebx_5 += 1
            var_18 += eax_55
            var_34_2 += 0x14
            esi_9 = var_14
            result = *(ecx_15 + 0x28)
            var_30 = ebx_5
            
            if (ebx_5 s>= result)
                break
            
            edx_6 = var_1c
    
    if (esi_9[9] == 0)
        result = esi_9[8]
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        esi_9[8] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
