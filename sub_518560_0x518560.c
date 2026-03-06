// 函数名称: sub_518560
// 虚拟地址: 0x518560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_518560(int32_t arg1, uint32_t* arg2, void* arg3, uint32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: uint32_t eax = sub_50ecf0(arg3)
    uint32_t eax = sub_50ecf0(arg3)
    
    if (sub_50ecf0(arg3) + (eax << 0x10) == 0x38425053 && sub_50ecf0(arg3) == 1)
        int32_t* var_1c_1 = arg3 + 0xa8
        int32_t ecx_3
        int32_t edx
        
        if (*(arg3 + 0x10) != 0)
            edx = *(arg3 + 0xac)
            ecx_3 = edx - *(arg3 + 0xa8)
        
        if (*(arg3 + 0x10) == 0 || ecx_3 s>= 6)
            *(arg3 + 0xa8) += 6
            var_1c_1 = arg3 + 0xa8
        else
            *(arg3 + 0xa8) = edx
            (*(arg3 + 0x14))(*(arg3 + 0x1c), 6 - ecx_3)
        
        uint32_t eax_7 = sub_50ecf0(arg3)
        
        if (eax_7 u<= 0x10)
            uint32_t eax_8 = sub_50ecf0(arg3)
            uint32_t eax_10 = sub_50ecf0(arg3) + (eax_8 << 0x10)
            uint32_t ebx_3 = (sub_50ecf0(arg3) << 0x10) + sub_50ecf0(arg3)
            uint32_t eax_13 = sub_50ecf0(arg3)
            
            if ((eax_13 == 8 || eax_13 == 0x10) && sub_50ecf0(arg3) == 3)
                sub_50ec00(arg3, sub_50ed70(arg3))
                sub_50ec00(arg3, sub_50ed70(arg3))
                sub_50ec00(arg3, sub_50ed70(arg3))
                uint32_t eax_18 = sub_50ecf0(arg3)
                
                if (eax_18 s<= 1 && ebx_3 s>= 0)
                    int32_t eax_19
                    int32_t edx_4
                    
                    if (ebx_3 != 0)
                        edx_4:eax_19 = 0x7fffffff
                    
                    if (ebx_3 == 0 || divs.dp.d(edx_4:eax_19, ebx_3) s>= 4)
                        uint32_t ecx_18 = ebx_3 << 2
                        
                        if (ecx_18 s>= 0)
                            uint32_t eax_21 = eax_10
                            
                            if (eax_21 s>= 0)
                                if (eax_21 == 0)
                                    goto label_5186cf
                                
                                if (ecx_18 s<= divs.dp.d(0x7fffffff, eax_10))
                                    eax_21 = eax_10
                                label_5186cf:
                                    void* ebx_4 = ebx_3 * eax_21
                                    void* var_20_1 = ebx_4
                                    int32_t var_40_2 = ebx_4 << 2
                                    void* result_2 = _malloc()
                                    void* result = result_2
                                    
                                    if (result_2 != 0)
                                        if (eax_18 == 0)
                                            uint32_t esi_5 = eax_7
                                            void* i = nullptr
                                            void* result_3 = result_2
                                            void* i_4 = nullptr
                                            void* result_4 = result_3
                                            
                                            do
                                                if (i s< esi_5)
                                                    if (*arg6 != 0x10)
                                                        char* esi_7 = i + result_2
                                                        
                                                        if (eax_13 != 0x10)
                                                            if (ebx_4 s> 0)
                                                                int32_t* edx_13 = var_1c_1
                                                                void* j_5 = ebx_4
                                                                void* j
                                                                
                                                                do
                                                                    char* eax_40 = *edx_13
                                                                    
                                                                    if (eax_40 u< *(arg3 + 0xac))
                                                                        i.b = *eax_40
                                                                        *edx_13 = &eax_40[1]
                                                                    else if (*(arg3 + 0x20) == 0)
                                                                        i.b = 0
                                                                    else
                                                                        sub_50ebb0(arg3)
                                                                        edx_13 = var_1c_1
                                                                        char* eax_42 = *edx_13
                                                                        i.b = *eax_42
                                                                        *edx_13 = &eax_42[1]
                                                                    
                                                                    *esi_7 = i.b
                                                                    esi_7 = &esi_7[4]
                                                                    j = j_5
                                                                    j_5 -= 1
                                                                while (j != 1)
                                                                goto label_5187c6
                                                        else if (ebx_4 s> 0)
                                                            void* var_24_2 = ebx_4
                                                            void* j_1
                                                            
                                                            do
                                                                esi_7 = &esi_7[4]
                                                                esi_7[0xfffffffc] =
                                                                    (sub_50ecf0(arg3) s>> 8).b
                                                                j_1 = ebx_4
                                                                ebx_4 -= 1
                                                            while (j_1 != 1)
                                                        label_5187c3:
                                                            ebx_4 = var_20_1
                                                        label_5187c6:
                                                            result_2 = result
                                                            result_3 = result_4
                                                            i = i_4
                                                    else
                                                        void* result_5 = result_3
                                                        
                                                        if (ebx_4 s> 0)
                                                            void* var_24_1 = ebx_4
                                                            void* j_2
                                                            
                                                            do
                                                                *result_5 = sub_50ecf0(arg3)
                                                                result_5 += 8
                                                                j_2 = ebx_4
                                                                ebx_4 -= 1
                                                            while (j_2 != 1)
                                                            goto label_5187c3
                                                    
                                                    esi_5 = eax_7
                                                else
                                                    char* eax_28 = i + result_2
                                                    result_2.b = i != 3
                                                    result_2.b -= 1
                                                    
                                                    if (ebx_4 s> 0)
                                                        void* j_7 = ebx_4
                                                        void* j_3
                                                        
                                                        do
                                                            *eax_28 = result_2.b
                                                            eax_28 = &eax_28[4]
                                                            j_3 = j_7
                                                            j_7 -= 1
                                                        while (j_3 != 1)
                                                        i = i_4
                                                    
                                                    result_3 = result_4
                                                    result_2 = result
                                                
                                                i += 1
                                                result_3 += 2
                                                i_4 = i
                                                result_4 = result_3
                                            while (i s< 4)
                                        else
                                            sub_50ec00(arg3, eax_10 * eax_7 * 2)
                                            void* result_1 = result
                                            void* i_1 = nullptr
                                            uint32_t ecx_20 = eax_7
                                            
                                            do
                                                char* edx_11 = i_1 + result_1
                                                
                                                if (i_1 s< ecx_20)
                                                    if (sub_518400(result_1, edx_11, arg3, ebx_4) == 0)
                                                        _free(result)
                                                        goto label_518764
                                                    
                                                    ecx_20 = eax_7
                                                    result_1 = result
                                                else if (ebx_4 s> 0)
                                                    void* j_6 = ebx_4
                                                    ecx_20.b = i_1 != 3
                                                    ecx_20.b -= 1
                                                    void* j_4
                                                    
                                                    do
                                                        *edx_11 = ecx_20.b
                                                        edx_11 = &edx_11[4]
                                                        j_4 = j_6
                                                        j_6 -= 1
                                                    while (j_4 != 1)
                                                    ecx_20 = eax_7
                                                    result_1 = result
                                                
                                                i_1 += 1
                                            while (i_1 s< 4)
                                        
                                        if (eax_7 s>= 4 && ebx_4 s> 0)
                                            if (*arg6 != 0x10)
                                                char* ecx_26 = result + 1
                                                void* i_2
                                                
                                                do
                                                    int32_t* eax_30
                                                    eax_30.b = ecx_26[2]
                                                    
                                                    if (eax_30.b != 0 && eax_30.b != 0xff)
                                                        float xmm2_2 =
                                                            1f / (float.s(zx.d(eax_30.b)) / 255f)
                                                        float xmm1_4 = (1f - xmm2_2) * 255f
                                                        ecx_26[0xffffffff] = (int.d(
                                                            float.s(zx.d(ecx_26[0xffffffff])) * xmm2_2
                                                            + xmm1_4)).b
                                                        *ecx_26 = (int.d(float.s(zx.d(*ecx_26)) * xmm2_2
                                                            + xmm1_4)).b
                                                        ecx_26[1] = int.d(
                                                            float.s(zx.d(ecx_26[1])) * xmm2_2 + xmm1_4).b
                                                    
                                                    ecx_26 = &ecx_26[4]
                                                    i_2 = ebx_4
                                                    ebx_4 -= 1
                                                while (i_2 != 1)
                                            else
                                                int16_t* ecx_23 = result + 2
                                                void* i_3
                                                
                                                do
                                                    uint32_t eax_31 = zx.d(ecx_23[2])
                                                    
                                                    if (eax_31.w != 0 && eax_31.w != 0xffff)
                                                        float xmm2_1 = 1f / (float.s(eax_31) / 65535f)
                                                        float xmm1_2 = (1f - xmm2_1) * 65535f
                                                        ecx_23[-1] = (int.d(
                                                            float.s(zx.d(ecx_23[-1])) * xmm2_1
                                                            + xmm1_2)).w
                                                        *ecx_23 = (int.d(float.s(zx.d(*ecx_23)) * xmm2_1
                                                            + xmm1_2)).w
                                                        ecx_23[1] = (int.d(
                                                            float.s(zx.d(ecx_23[1])) * xmm2_1 + xmm1_2)).w
                                                    
                                                    ecx_23 = &ecx_23[4]
                                                    i_3 = ebx_4
                                                    ebx_4 -= 1
                                                while (i_3 != 1)
                                        
                                        if (arg5 != 0)
                                            *arg5 = 4
                                        
                                        *arg4 = eax_10
                                        *arg2 = ebx_3
                                        return result
    
    label_518764:
    return 0
}
