// 函数名称: sub_461b10
// 虚拟地址: 0x461b10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_461b10(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char arg5, float arg6, char* arg7)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5428ac
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_74 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = arg3
    char var_5d
    char* result
    
    if (arg2 != *(edi + 0x64c) || *(edi + 0x6a4) != *(edi + 0x648))
        int32_t edi_1 = *(edi + 0x6a4)
        var_5d = 1
        int32_t ecx = *(arg3 + 0x63c)
        int32_t esi_1 = *(arg3 + 0x648)
        *(arg3 + 0x64c) = arg2
        *(arg3 + 0x648) = edi_1
        *(arg3 + 0x644) = ecx
        int32_t eax_6 = sub_461500(ecx, ecx)
        void* ecx_1 = edi
        *(ecx_1 + 0x640) = eax_6
        void* eax_9 = eax_6 * 0x208 + 0x10 + ecx_1
        edi = ecx_1
        
        if (edi_1 != esi_1 && *(*(ecx_1 + 0x63c) * 0x208 + edi + 0x19c) != 0)
            *(edi + 0x7f4) = 0
        
        if (data_e48e60 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_e48e60)
            
            if (data_e48e60 == 0xffffffff)
                int32_t var_14_1 = 0
                sub_4612e0()
                _atexit(sub_547250)
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer(&data_e48e60)
        
        sub_51d5b0(eax_9, 0xe48e68, 0x204)
        char* eax_13 = *(eax_9 + 0x204)
        
        if (eax_13 != 0 && eax_13 != &data_5559b1)
            if (data_cdf414 != 0 && *eax_13 != 0)
                char* eax_14 = sub_44f000(eax_9 + 0x204)
                int32_t temp2_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
            
            *(eax_9 + 0x204) = &data_5559b1
        
        void* var_5c_2 = *(edi + 0x640) * 0x208 + 0x10 + edi
        int32_t* eax_18 = sub_45d320(edi)
        char* eax_19 = sub_4b88a0(eax_18, eax_18, &data_5b1d6c, 0x66)
        *(edi + 0x69c) = eax_19
        int32_t* ecx_6 = data_5c99e4
        
        if (ecx_6 != 0 && ecx_6 != *(edi + 0x6a4))
            void* eax_20 = eax_19 - 3
            char const* const edx_4
            
            if (eax_19 == 3)
                edx_4 = "Text"
            label_461d26:
                eax_19 = sub_45f310(ecx_6, edx_4)
                
                if (eax_19 != 0)
                    int32_t var_78_1 = 1
                    eax_19 = sub_4611a0(eax_19, arg4, arg5)
            else
                eax_19 = eax_20 - 2
                
                if (eax_20 == 2)
                    edx_4 = "Button"
                    goto label_461d26
        
        sub_44f590(edi + 0x6a0, sub_4b8a40(eax_19, eax_18, &data_5b1d6c, 0x67))
        int32_t* ecx_9 = data_5c99e4
        
        if (ecx_9 != 0)
            char* edx_7 = *(edi + 0x6a0)
            
            if (edx_7 != 0 && *edx_7 != 0)
                uint32_t* eax_22 = sub_45f310(ecx_9, edx_7)
                
                if (eax_22 != 0)
                    int32_t var_78_3 = 1
                    sub_4611a0(eax_22, arg4, arg5)
        
        int32_t eax_23 = *(edi + 0x6a8)
        int32_t* ecx_11 = *(edi + 0x6a4)
        void* eax_26 = *(edi + 0x640) * 0x208 + 0x10 + edi
        void* var_58_2 = eax_26
        
        if (ecx_11[1] != 0x22)
            sub_44e4d0(eax_26, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI2", 
                "c:\ax2017\engine\ui2.cpp", 0x623, "UI2DefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* eax_27 = sub_4459f0(ecx_11)
        
        if (eax_23 s>= *(eax_27 + 4))
            sub_44e4d0(eax_27, &data_5559b1, "sourceIndex < def.el.numItems", 
                "c:\ax2017\engine\ui2.cpp", 0xd23, "UI2MergeAttribs")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (eax_23 s< 0)
            sub_44e4d0(eax_27, &data_5559b1, "sourceIndex >= 0", "c:\ax2017\engine\ui2.cpp", 0xd24, 
                "UI2MergeAttribs")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t var_78_4 = 0
        int32_t var_84_3 = eax_23
        sub_4611a0(sub_45d320(edi), arg4, arg5)
        int32_t ecx_15 = *(edi + 0x6ac)
        int32_t eax_29 = ecx_15
        
        if (*(edi + 0x6c0) == ecx_15 && ecx_15 != 0)
            *(*(edi + 0x640) * 0x208 + edi + 0x14) = *(edi + 0x6b0)
            eax_29 = *(edi + 0x6ac)
        
        if (*(edi + 0x6c8) == eax_29 && eax_29 != 0)
            *(*(edi + 0x640) * 0x208 + edi + 0xdc) = *(edi + 0x6c4)
        
        void* esi_4 = *(edi + 0x640) * 0x208
        void* ecx_17 = *(edi + 0x63c) * 0x208
        void* var_64_1 = ecx_17
        int32_t eax_32 = *(esi_4 + edi + 0x118)
        
        if (eax_32 != *(ecx_17 + edi + 0x118))
            *(edi + 0x634) = *(data_cdf428 + 0x2c)
        else
            if (eax_32 != 1)
                goto label_461f16
            
            if (*(esi_4 + edi + 0x114) != 7)
                *(edi + 0x634) = *(data_cdf428 + 0x2c)
            else
                float xmm0_2 = *(esi_4 + edi + 0x140)
                float temp5_1 = *(ecx_17 + edi + 0x140)
                xmm0_2 - temp5_1
                eax_32:1.b = (xmm0_2 == temp5_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_2, temp5_1) ? 1 : 0) << 2 | (xmm0_2 < temp5_1 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    *(edi + 0x634) = *(data_cdf428 + 0x2c)
                else
                    float xmm0_3 = *(esi_4 + edi + 0x134)
                    float temp7_1 = *(ecx_17 + edi + 0x134)
                    xmm0_3 - temp7_1
                    eax_32:1.b = (xmm0_3 == temp7_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_3, temp7_1) ? 1 : 0) << 2 | (xmm0_3 < temp7_1 ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        *(edi + 0x634) = *(data_cdf428 + 0x2c)
                    else
                        float xmm0_4 = *(esi_4 + edi + 0x138)
                        float temp9_1 = *(ecx_17 + edi + 0x138)
                        xmm0_4 - temp9_1
                        eax_32:1.b = (xmm0_4 == temp9_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_4, temp9_1) ? 1 : 0) << 2
                            | (xmm0_4 < temp9_1 ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            *(edi + 0x634) = *(data_cdf428 + 0x2c)
                        else
                            float xmm0_5 = *(esi_4 + edi + 0x13c)
                            float temp11_1 = *(ecx_17 + edi + 0x13c)
                            xmm0_5 - temp11_1
                            eax_32:1.b = (xmm0_5 == temp11_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_5, temp11_1) ? 1 : 0) << 2
                                | (xmm0_5 < temp11_1 ? 1 : 0)
                            bool p_8 = unimplemented  {test ah, 0x44}
                            
                            if (p_8)
                                *(edi + 0x634) = *(data_cdf428 + 0x2c)
                            else if (sub_47bf40(edi + 0x144 + esi_4, ecx_17 + 0x144 + edi) == 0)
                                *(edi + 0x634) = *(data_cdf428 + 0x2c)
                            else
                                ecx_17 = var_64_1
                            label_461f16:
                                
                                if (sub_461a90(ecx_17 + 0x4c + edi, edi + 0x4c + esi_4).b != 0)
                                    *(edi + 0x634) = *(data_cdf428 + 0x2c)
        
        float xmm0_6 = *(var_64_1 + edi + 0x14)
        float temp3_1 = *(esi_4 + edi + 0x14)
        xmm0_6 - temp3_1
        int32_t eax_38
        eax_38:1.b = (xmm0_6 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, temp3_1) ? 1 : 0) << 2
            | (xmm0_6 < temp3_1 ? 1 : 0)
        bool p_10 = unimplemented  {test ah, 0x44}
        
        if (p_10)
            *(edi + 0x62c) = 0
        else
            float xmm0_7 = *(var_64_1 + edi + 0x18)
            float temp4_1 = *(esi_4 + edi + 0x18)
            xmm0_7 - temp4_1
            eax_38:1.b = (xmm0_7 == temp4_1 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_7, temp4_1) ? 1 : 0) << 2 | (xmm0_7 < temp4_1 ? 1 : 0)
            bool p_12 = unimplemented  {test ah, 0x44}
            
            if (p_12)
                *(edi + 0x62c) = 0
            else
                float xmm0_8 = *(var_64_1 + edi + 0x1c)
                float temp6_1 = *(esi_4 + edi + 0x1c)
                xmm0_8 - temp6_1
                eax_38:1.b = (xmm0_8 == temp6_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_8, temp6_1) ? 1 : 0) << 2 | (xmm0_8 < temp6_1 ? 1 : 0)
                bool p_14 = unimplemented  {test ah, 0x44}
                
                if (p_14)
                    *(edi + 0x62c) = 0
                else
                    float xmm0_9 = *(var_64_1 + edi + 0x20)
                    float temp8_1 = *(esi_4 + edi + 0x20)
                    xmm0_9 - temp8_1
                    eax_38:1.b = (xmm0_9 == temp8_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_9, temp8_1) ? 1 : 0) << 2 | (xmm0_9 < temp8_1 ? 1 : 0)
                    bool p_16 = unimplemented  {test ah, 0x44}
                    
                    if (p_16)
                        *(edi + 0x62c) = 0
                    else
                        float xmm0_10 = *(var_64_1 + edi + 0x24)
                        float temp10_1 = *(esi_4 + edi + 0x24)
                        xmm0_10 - temp10_1
                        eax_38:1.b = (xmm0_10 == temp10_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_10, temp10_1) ? 1 : 0) << 2
                            | (xmm0_10 < temp10_1 ? 1 : 0)
                        bool p_18 = unimplemented  {test ah, 0x44}
                        
                        if (p_18)
                            *(edi + 0x62c) = 0
                        else
                            eax_38.b = *(var_64_1 + edi + 0x110)
                            
                            if (eax_38.b != *(esi_4 + edi + 0x110))
                                *(edi + 0x62c) = 0
                            else
                                eax_38.b = *(var_64_1 + edi + 0x111)
                                
                                if (eax_38.b != *(esi_4 + edi + 0x111))
                                    *(edi + 0x62c) = 0
                                else
                                    eax_38.b = *(var_64_1 + edi + 0x112)
                                    
                                    if (eax_38.b != *(esi_4 + edi + 0x112))
                                        *(edi + 0x62c) = 0
                                    else
                                        eax_38.b = *(var_64_1 + edi + 0x113)
                                        
                                        if (eax_38.b != *(esi_4 + edi + 0x113)
                                                || *(var_64_1 + edi + 0xdc) != *(esi_4 + edi + 0xdc))
                                            *(edi + 0x62c) = 0
                                        else if (sub_45c0e0(var_64_1 + 0xcc + edi, edi + 0xcc + esi_4)
                                                != 0)
                                            *(edi + 0x62c) = 0
                                        else
                                            float xmm0_11 = *(var_64_1 + edi + 0x1c8)
                                            float temp14_1 = *(esi_4 + edi + 0x1c8)
                                            xmm0_11 - temp14_1
                                            void* eax_42
                                            eax_42:1.b = (xmm0_11 == temp14_1 ? 1 : 0) << 6
                                                | (is_unordered.d(xmm0_11, temp14_1) ? 1 : 0) << 2
                                                | (xmm0_11 < temp14_1 ? 1 : 0)
                                            bool p_20 = unimplemented  {test ah, 0x44}
                                            
                                            if (p_20)
                                                *(edi + 0x62c) = 0
        
        *(edi + 0x638) = 0
        
        if (*(esi_4 + edi + 0x108) != 0)
            *(edi + 0x628) = *(data_cdf428 + 0x2c)
        
        void* eax_45 = sub_461a50(edi)
        int32_t xmm1_2 = (zx.o(0)).d
        int32_t esi_5 = *(edi + 0x640)
        int32_t ecx_26 = esi_5
        
        if (data_5cea34.b == 0 && data_64f848 == 0 && data_64f849 == 0 && data_64f84a == 0
                && data_64f84b == 0 && eax_45 != 0)
            int32_t edx_12 = *(eax_45 + 8)
            int32_t var_58_3 = 0
            
            if (edx_12 s>= 4)
                void* eax_47 = *(eax_45 + 4) + 4
                int32_t i_3 = ((edx_12 - 4) u>> 2) + 1
                var_58_3 = i_3 << 2
                esi_5 = *(edi + 0x640)
                int32_t i
                
                do
                    int32_t xmm0_14 = _mm_max_ss(*(eax_47 + 4) f+ *eax_47, xmm1_2)
                    int32_t xmm1_5 = _mm_max_ss(*(eax_47 + 0x14) f+ *(eax_47 + 0x10), xmm0_14)
                    int32_t xmm0_17 = _mm_max_ss(*(eax_47 + 0x24) f+ *(eax_47 + 0x20), xmm1_5)
                    float xmm1_7 = *(eax_47 + 0x34) f+ *(eax_47 + 0x30)
                    eax_47 += 0x40
                    xmm1_2 = _mm_max_ss(xmm1_7, xmm0_17)
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                ecx_26 = *(edi + 0x640)
            
            if (var_58_3 s< edx_12)
                void* eax_51 = (var_58_3 << 4) + 4 + *(eax_45 + 4)
                int32_t i_4 = edx_12 - var_58_3
                int32_t i_1
                
                do
                    float xmm0_19 = *(eax_51 + 4) f+ *eax_51
                    eax_51 += 0x10
                    xmm1_2 = _mm_max_ss(xmm0_19, xmm1_2)
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                ecx_26 = *(edi + 0x640)
        
        *(edi + 0x630) = xmm1_2
        
        if (xmm1_2 f<= 0f)
            *(edi + 0x63c) = ecx_26
        else
            int32_t eax_52 = sub_461500(*(edi + 0x644), esi_5)
            int32_t esi_7 = eax_52 * 0x208
            *(edi + 0x63c) = eax_52
            *(esi_7 + edi + 0x10) = *(esi_4 + edi + 0x10)
            *(esi_7 + edi + 0x14) = *(esi_4 + edi + 0x14)
            *(esi_7 + edi + 0x24) = *(esi_4 + edi + 0x24)
            *(esi_7 + edi + 0x28) = *(esi_4 + edi + 0x28)
            *(esi_7 + edi + 0x38) = *(esi_4 + edi + 0x38)
            *(esi_7 + edi + 0x48) = *(esi_4 + edi + 0x48)
            sub_460d80(edi + 0x4c + esi_7, esi_4 + 0x4c + edi)
            *(esi_7 + edi + 0xac) = *(esi_4 + edi + 0xac)
            *(esi_7 + edi + 0xb0) = *(esi_4 + edi + 0xb0)
            *(esi_7 + edi + 0xb4) = *(esi_4 + edi + 0xb4)
            *(esi_7 + edi + 0xb8) = *(esi_4 + edi + 0xb8)
            *(esi_7 + edi + 0xbc) = *(esi_4 + edi + 0xbc)
            *(esi_7 + edi + 0xc0) = *(esi_4 + edi + 0xc0)
            *(esi_7 + edi + 0xc4) = *(esi_4 + edi + 0xc4)
            *(esi_7 + edi + 0xc8) = *(esi_4 + edi + 0xc8)
            *(esi_7 + edi + 0xcc) = *(esi_4 + edi + 0xcc)
            *(esi_7 + edi + 0xdc) = *(esi_4 + edi + 0xdc)
            *(esi_7 + edi + 0xe0) = *(esi_4 + edi + 0xe0)
            *(esi_7 + edi + 0xe4) = *(esi_4 + edi + 0xe4)
            *(esi_7 + edi + 0xe8) = *(esi_4 + edi + 0xe8)
            *(esi_7 + edi + 0xec) = *(esi_4 + edi + 0xec)
            *(esi_7 + edi + 0xf0) = *(esi_4 + edi + 0xf0)
            *(esi_7 + edi + 0xf4) = *(esi_4 + edi + 0xf4)
            *(esi_7 + edi + 0xf8) = *(esi_4 + edi + 0xf8)
            *(esi_7 + edi + 0xfc) = *(esi_4 + edi + 0xfc)
            *(esi_7 + edi + 0x100) = *(esi_4 + edi + 0x100)
            *(esi_7 + edi + 0x104) = *(esi_4 + edi + 0x104)
            int32_t eax_76
            eax_76.b = *(esi_4 + edi + 0x108)
            *(esi_7 + edi + 0x108) = eax_76.b
            *(esi_7 + edi + 0x10c) = *(esi_4 + edi + 0x10c)
            *(esi_7 + edi + 0x110) = *(esi_4 + edi + 0x110)
            sub_460d80(edi + 0x114 + esi_7, esi_4 + 0x114 + edi)
            *(esi_7 + edi + 0x174) = *(esi_4 + edi + 0x174)
            *(esi_7 + edi + 0x178) = *(esi_4 + edi + 0x178)
            *(esi_7 + edi + 0x17c) = *(esi_4 + edi + 0x17c)
            *(esi_7 + edi + 0x180) = *(esi_4 + edi + 0x180)
            *(esi_7 + edi + 0x184) = *(esi_4 + edi + 0x184)
            *(esi_7 + edi + 0x188) = *(esi_4 + edi + 0x188)
            *(esi_7 + edi + 0x18c) = *(esi_4 + edi + 0x18c)
            *(esi_7 + edi + 0x190) = *(esi_4 + edi + 0x190)
            *(esi_7 + edi + 0x194) = *(esi_4 + edi + 0x194)
            *(esi_7 + edi + 0x198) = *(esi_4 + edi + 0x198)
            *(esi_7 + edi + 0x19c) = *(esi_4 + edi + 0x19c)
            *(esi_7 + edi + 0x1a0) = *(esi_4 + edi + 0x1a0)
            *(esi_7 + edi + 0x1a4) = *(esi_4 + edi + 0x1a4)
            *(esi_7 + edi + 0x1a8) = *(esi_4 + edi + 0x1a8)
            *(esi_7 + edi + 0x1ac) = *(esi_4 + edi + 0x1ac)
            *(esi_7 + edi + 0x1b0) = *(esi_4 + edi + 0x1b0)
            *(esi_7 + edi + 0x1b4) = *(esi_4 + edi + 0x1b4)
            *(esi_7 + edi + 0x1b8) = *(esi_4 + edi + 0x1b8)
            *(esi_7 + edi + 0x1bc) = *(esi_4 + edi + 0x1bc)
            int32_t eax_99
            eax_99.b = *(esi_4 + edi + 0x1c0)
            *(esi_7 + edi + 0x1c0) = eax_99.b
            eax_99.b = *(esi_4 + edi + 0x1c1)
            *(esi_7 + edi + 0x1c1) = eax_99.b
            *(esi_7 + edi + 0x1c4) = *(esi_4 + edi + 0x1c4)
            *(esi_7 + edi + 0x1c8) = *(esi_4 + edi + 0x1c8)
            *(esi_7 + edi + 0x1cc) = *(esi_4 + edi + 0x1cc)
            *(esi_7 + edi + 0x1d0) = *(esi_4 + edi + 0x1d0)
            *(esi_7 + edi + 0x1d4) = *(esi_4 + edi + 0x1d4)
            int32_t eax_104
            eax_104.b = *(esi_4 + edi + 0x1d8)
            *(esi_7 + edi + 0x1d8) = eax_104.b
            eax_104.b = *(esi_4 + edi + 0x1d9)
            *(esi_7 + edi + 0x1d9) = eax_104.b
            *(esi_7 + edi + 0x1da) = *(esi_4 + edi + 0x1da)
            *(esi_7 + edi + 0x1de) = *(esi_4 + edi + 0x1de)
            *(esi_7 + edi + 0x1e2) = *(esi_4 + edi + 0x1e2)
            *(esi_7 + edi + 0x1e8) = *(esi_4 + edi + 0x1e8)
            *(esi_7 + edi + 0x1ec) = *(esi_4 + edi + 0x1ec)
            *(esi_7 + edi + 0x1fc) = *(esi_4 + edi + 0x1fc)
            int32_t eax_109
            eax_109.b = *(esi_4 + edi + 0x200)
            *(esi_7 + edi + 0x200) = eax_109.b
            *(esi_7 + edi + 0x204) = *(esi_4 + edi + 0x204)
            *(esi_7 + edi + 0x208) = *(esi_4 + edi + 0x208)
            *(esi_7 + edi + 0x20c) = *(esi_4 + edi + 0x20c)
            *(esi_7 + edi + 0x210) = *(esi_4 + edi + 0x210)
            sub_44f510(edi + 0x214 + esi_7, esi_4 + 0x214 + edi)
            ecx_26 = *(edi + 0x63c)
        
        int32_t* eax_118 = *((ecx_26 + 1) * 0x208 + edi)
        
        if (eax_118 != 0)
            void var_54
            sub_481e00(eax_118, &var_54)
            sub_4820b0(&var_54)
            ecx_26 = *(edi + 0x63c)
        
        float xmm0_26 = *(ecx_26 * 0x208 + edi + 0x24)
        float temp12_1 = *(*(edi + 0x640) * 0x208 + edi + 0x24)
        xmm0_26 - temp12_1
        result:1.b = (xmm0_26 == temp12_1 ? 1 : 0) << 6
            | (is_unordered.d(xmm0_26, temp12_1) ? 1 : 0) << 2 | (xmm0_26 < temp12_1 ? 1 : 0)
        bool p_22 = unimplemented  {test ah, 0x44}
        
        if (p_22)
            sub_44e4d0(result, &data_5559b1, "el.current().alpha == el.target().alpha", 
                "c:\ax2017\engine\ui2.cpp", 0xcf5, "UI2UpdateAnims")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    else
        var_5d = 0
    
    float xmm3 = *(edi + 0x638)
    float xmm2 = *(edi + 0x630)
    
    if (not(xmm2 <= xmm3))
        float xmm1_1
        
        if (*(edi + 0x6ac) != 0)
            xmm1_1 = *(edi + 0x62c)
        else
            xmm1_1 = xmm2
        
        float xmm1_8 = xmm1_1 + arg6
        *(edi + 0x638) = xmm3 + arg6
        *(edi + 0x62c) = xmm1_8
        
        if (xmm1_8 <= xmm2)
            void* eax_120 = sub_461a50(edi)
            void* ecx_44 = eax_120
            void* var_64_3 = ecx_44
            
            if (ecx_44 == 0)
                sub_44e4d0(eax_120, &data_5559b1, "transitions", "c:\ax2017\engine\ui2.cpp", 0xd0a, 
                    "UI2UpdateAnims")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t i_2 = 0
            
            if (*(ecx_44 + 8) s> 0)
                int32_t eax_121 = 0
                int32_t var_5c_5 = 0
                
                do
                    sub_461580(edi, *(ecx_44 + 4) + eax_121, *(edi + 0x62c))
                    ecx_44 = var_64_3
                    i_2 += 1
                    eax_121 = var_5c_5 + 0x10
                    var_5c_5 = eax_121
                while (i_2 s< *(ecx_44 + 8))
        else
            int32_t eax_119 = *(edi + 0x640)
            *(edi + 0x62c) = xmm2
            *(edi + 0x63c) = eax_119
        
        *arg7 = 1
    
    *(edi + 0x6ac) += 1
    result.b = var_5d
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
