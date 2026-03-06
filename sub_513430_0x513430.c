// 函数名称: sub_513430
// 虚拟地址: 0x513430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_513430(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, void** arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg3
    int32_t* var_cc = ebx
    *(*ebx + 8) = 0
    int32_t eax_5 = sub_5127a0(arg3)
    int32_t* result_9 = *ebx
    int32_t result_5 = result_9[2]
    
    if (eax_5 == 0)
        sub_512140(eax_5, result_5, ebx, eax_5)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t edx_1
    edx_1.b = result_5 s>= 3
    void* edx_2 = (edx_1 << 1) + 1
    void* var_a8 = edx_2
    int32_t var_c4
    
    if (result_5 == 3 && (ebx[0x11fb] == 3 || (ebx[0x11fa] == 0 && ebx[0x11f9] == 0)))
        var_c4 = 1
        
        if (result_5 s>= 3 || 1 != 0)
            goto label_513504
        
        goto label_5134f8
    
    var_c4 = 0
    int32_t result_3
    int32_t result_1
    int32_t* result_6
    
    if (result_5 != 3 || result_5 s>= 3 || 0 != 0)
    label_513504:
        result_1 = result_5
        result_6 = result_9
        result_3 = result_1
        
        if (result_1 s> 0)
            goto label_513516
    else
    label_5134f8:
        result_3 = 1
    label_513516:
        void* esi = &ebx[0x11a8]
        int32_t result_4 = 0
        void var_94
        void* edi_1 = &var_94
        void* var_ac_1 = esi
        
        do
            int32_t var_ec_2 = **ebx + 3
            int32_t eax_11 = _malloc()
            *(esi + 0x34) = eax_11
            
            if (eax_11 == 0)
                sub_512140(eax_11, *(*ebx + 8), ebx, 0)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 0
            
            int32_t esi_1 = divs.dp.d(sx.q(ebx[0x11a1]), *esi)
            *(edi_1 + 0x10) = 0
            int32_t temp0_2 = divs.dp.d(sx.q(ebx[0x11a2]), *(var_ac_1 + 4))
            *edi_1 = esi_1
            *(edi_1 + 4) = temp0_2
            *(edi_1 + 0xc) = temp0_2 s>> 1
            *(edi_1 + 8) = divu.dp.d(0:(**ebx - 1 + esi_1), esi_1)
            int32_t eax_23 = *(var_ac_1 + 0x28)
            *(edi_1 - 4) = eax_23
            *(edi_1 - 8) = eax_23
            int32_t (* eax_25)(int32_t arg1)
            
            if (esi_1 != 1)
                if (esi_1 != 2)
                    eax_25 = sub_513030
                else if (temp0_2 != 1)
                label_5135d6:
                    
                    if (esi_1 != 2 || temp0_2 != esi_1)
                        eax_25 = sub_513030
                    else
                        eax_25 = ebx[0x1205]
                else
                    eax_25 = sub_512d10
            else if (temp0_2 != esi_1)
                esi_1 = 1
                
                if (temp0_2 != 2)
                    goto label_5135d6
                
                eax_25 = sub_512ac0
            else
                eax_25 = Platform::Details::Heap::Allocate
            
            *(edi_1 - 0xc) = eax_25
            esi = var_ac_1 + 0x48
            edi_1 += 0x20
            result_1 = result_4 + 1
            var_ac_1 = esi
            result_4 = result_1
        while (result_1 s< result_3)
        
        result_9 = *ebx
        result_6 = result_9
        edx_2 = var_a8
    
    int32_t edi_2 = result_9[1]
    int32_t esi_3 = *result_9
    int32_t result
    int32_t result_2
    
    if (esi_3 s< 0)
        result_2 = 0
        result = 0
    else
        if (esi_3 != 0)
            result_1 = divs.dp.d(0x7fffffff, esi_3)
            edx_2 = var_a8
        
        if (esi_3 != 0 && edx_2 s> result_1)
            result_2 = 0
            result = 0
        else
            int32_t eax_29 = esi_3 * edx_2
            
            if (eax_29 s< 0)
                result_1 = result_6
            label_5136cc:
                result_6 = result_1
                result_2 = 0
                result = 0
            else
                result_1 = result_6
                
                if (edi_2 s< 0)
                    goto label_5136cc
                
                if (edi_2 == 0)
                    goto label_51367f
                
                result_1 = divs.dp.d(0x7fffffff, edi_2)
                
                if (eax_29 s> result_1)
                    result_2 = 0
                    result = 0
                else
                    edx_2 = var_a8
                label_51367f:
                    int32_t esi_5 = esi_3 * edi_2 * edx_2
                    
                    if (esi_5 s> 0x7ffffffe)
                        result_2 = 0
                        result = 0
                    else
                        int32_t var_ec_3 = esi_5 + 1
                        result_1 = _malloc()
                        result_6 = *ebx
                        result_2 = result_1
                        result = result_1
    
    if (result_2 == 0)
        sub_512140(result_1, result_6[2], ebx, result_2)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (result_6[1] u> 0)
        char* var_1c
        char* edi_3 = var_1c
        
        do
            void* eax_34 = var_a8
            int32_t var_a4_2 = 0
            void* esi_9 = *result_6 * i * eax_34 + result_2
            
            if (result_3 s> 0)
                void* var_ac_2 = &ebx[0x11af]
                void var_88
                void* edi_4 = &var_88
                void* ebx_1 = &ebx[0x11af]
                int32_t edx_15
                
                do
                    int32_t eax_37 = *(edi_4 - 8) s>> 1
                    int32_t temp5_1 = *edi_4
                    int32_t edx_13
                    
                    if (temp5_1 s< eax_37)
                        edx_13 = *(edi_4 - 0x10)
                    else
                        edx_13 = *(edi_4 - 0x14)
                    
                    int32_t eax_38
                    
                    if (temp5_1 s< eax_37)
                        eax_38 = *(edi_4 - 0x14)
                    else
                        eax_38 = *(edi_4 - 0x10)
                    
                    (&var_1c)[var_a4_2] =
                        (*(edi_4 - 0x18))(*(ebx_1 + 0x18), eax_38, edx_13, *(edi_4 - 4), *(edi_4 - 0xc))
                    int32_t eax_41 = *edi_4 + 1
                    *edi_4 = eax_41
                    
                    if (eax_41 s>= *(edi_4 - 8))
                        *(edi_4 + 4) += 1
                        int32_t eax_42 = *(edi_4 + 4)
                        int32_t ecx_13 = *(edi_4 - 0x10)
                        *edi_4 = 0
                        *(edi_4 - 0x14) = ecx_13
                        
                        if (eax_42 s< *ebx_1)
                            *(edi_4 - 0x10) = *(ebx_1 + 4) + ecx_13
                    
                    edx_15 = var_a4_2 + 1
                    edi_4 += 0x20
                    ebx_1 += 0x48
                    var_a4_2 = edx_15
                while (edx_15 s< result_3)
                ebx = var_cc
                edi_3 = var_1c
                eax_34 = var_a8
                result_6 = *ebx
            
            void* var_18
            int32_t var_14
            void* var_10
            
            if (result_5 s>= 3)
                int32_t edx_17 = result_6[2]
                
                if (edx_17 != 3)
                    if (edx_17 != 4)
                        int32_t j = 0
                        
                        if (*result_6 u> 0)
                            char* esi_14 = esi_9 + 1
                            
                            do
                                eax_34.b = edi_3[j]
                                j += 1
                                esi_14[1] = eax_34.b
                                *esi_14 = eax_34.b
                                esi_14[0xffffffff] = eax_34.b
                                esi_14[2] = 0xff
                                esi_14 += var_a8
                            while (j u< **ebx)
                        
                        result_6 = *ebx
                    else
                        int32_t j_11 = ebx[0x11fa]
                        
                        if (j_11 != 0)
                            int32_t ecx_29 = *result_6
                            int32_t edi_7 = ebx[0x1204]
                            edi_3 = var_1c
                            
                            if (j_11 != 2)
                                edi_7(esi_9, edi_3, var_18, var_14, ecx_29, eax_34)
                                result_6 = *ebx
                            else
                                edi_7(esi_9, edi_3, var_18, var_14, ecx_29, eax_34)
                                
                                if (**ebx u<= 0)
                                    result_6 = *ebx
                                else
                                    int32_t j_1 = 0
                                    void* esi_13 = esi_9 + 2
                                    int32_t* result_8
                                    
                                    do
                                        uint32_t edx_20 = zx.d(*(var_10 + j_1))
                                        j_1 += 1
                                        int32_t ecx_32 = zx.d(not.b(*(esi_13 - 2))) * edx_20 + 0x80
                                        *(esi_13 - 2) = (((ecx_32 u>> 8) + ecx_32) u>> 8).b
                                        int32_t ecx_35 = zx.d(not.b(*(esi_13 - 1))) * edx_20 + 0x80
                                        *(esi_13 - 1) = (((ecx_35 u>> 8) + ecx_35) u>> 8).b
                                        int32_t ecx_38 = zx.d(not.b(*esi_13)) * edx_20 + 0x80
                                        *esi_13 = (((ecx_38 u>> 8) + ecx_38) u>> 8).b
                                        result_8 = *ebx
                                        esi_13 += var_a8
                                    while (j_1 u< *result_8)
                                    
                                    edi_3 = var_1c
                                    result_6 = result_8
                        else
                            int32_t j_8 = j_11
                            
                            if (*result_6 u<= j_11)
                                result_6 = *ebx
                            else
                                void* eax_53 = edi_3 - var_10
                                void* var_b4_1 = eax_53
                                void* esi_12 = esi_9 + 2
                                void* edi_6 = var_10
                                int32_t j_2
                                
                                do
                                    uint32_t ecx_19 = zx.d(*(eax_53 + edi_6))
                                    edi_6 += 1
                                    uint32_t edx_19 = zx.d(*(edi_6 - 1))
                                    *(esi_12 - 2) = ((((ecx_19 * edx_19 + 0x80) u>> 8) + ecx_19 * edx_19
                                        + 0x80) u>> 8).b
                                    int32_t ecx_24 =
                                        zx.d(*(var_18 - var_10 + edi_6 - 1)) * edx_19 + 0x80
                                    *(esi_12 - 1) = (((ecx_24 u>> 8) + ecx_24) u>> 8).b
                                    int32_t ecx_26 = zx.d(*(var_14 - var_10 + edi_6 - 1)) * edx_19
                                    *(esi_12 + 1) = 0xff
                                    j_2 = j_8 + 1
                                    *esi_12 = ((((ecx_26 + 0x80) u>> 8) + ecx_26 + 0x80) u>> 8).b
                                    esi_12 += var_a8
                                    j_8 = j_2
                                    eax_53 = var_b4_1
                                while (j_2 u< **ebx)
                                edi_3 = var_1c
                                result_6 = *ebx
                else if (var_c4 == 0)
                    ebx[0x1204](esi_9, edi_3, var_18, var_14, *result_6, eax_34)
                    result_6 = *ebx
                else
                    int32_t j_3 = 0
                    
                    if (*result_6 u<= 0)
                        result_6 = *ebx
                    else
                        void* ecx_14 = var_18
                        void* esi_11 = esi_9 + 2
                        char* var_b0_2 = edi_3
                        char* edi_5 = edi_3 - ecx_14
                        void* eax_46 = var_14 - ecx_14
                        int32_t* result_7
                        
                        do
                            char eax_47 = *(edi_5 + ecx_14)
                            ecx_14 += 1
                            *(esi_11 - 2) = eax_47
                            j_3 += 1
                            *(esi_11 - 1) = *(ecx_14 - 1)
                            *esi_11 = *(eax_46 + ecx_14 - 1)
                            *(esi_11 + 1) = 0xff
                            result_7 = *ebx
                            esi_11 += var_a8
                        while (j_3 u< *result_7)
                        
                        edi_3 = var_1c
                        result_6 = result_7
            else if (var_c4 != 0)
                int32_t eax_86 = *result_6
                int32_t var_a4_4 = 0
                
                if (result_5 s>= 3)
                    if (eax_86 != 0)
                        char* eax_95 = var_1c
                        char* edx_22 = eax_95
                        void* ecx_46 = var_14 - eax_95
                        void* var_b4_3 = ecx_46
                        
                        while (true)
                            uint32_t eax_96 = zx.d(*(edx_22 + ecx_46))
                            edx_22 = &edx_22[1]
                            esi_9 += 2
                            int32_t ecx_48 = eax_96 * 0x1d + zx.d(edx_22[var_18 - eax_95 - 1]) * 0x96
                            int32_t eax_100 = zx.d(edx_22[0xffffffff]) * 0x4d
                            *(esi_9 - 1) = 0xff
                            int32_t eax_102 = var_a4_4 + 1
                            *(esi_9 - 2) = ((ecx_48 + eax_100) u>> 8).b
                            result_6 = *ebx
                            var_a4_4 = eax_102
                            
                            if (eax_102 u>= *result_6)
                                break
                            
                            ecx_46 = var_b4_3
                        
                        edi_3 = var_1c
                else if (eax_86 != 0)
                    void* eax_87 = var_1c
                    void* edx_21 = eax_87
                    void* ecx_40 = var_14 - eax_87
                    void* var_b4_2 = ecx_40
                    
                    while (true)
                        uint32_t eax_88 = zx.d(*(ecx_40 + edx_21))
                        edx_21 += 1
                        int32_t eax_94 = var_a4_4 + 1
                        *(esi_9 - eax_87 + edx_21 - 1) = ((eax_88 * 0x1d
                            + zx.d(*(var_18 - eax_87 + edx_21 - 1)) * 0x96
                            + zx.d(*(edx_21 - 1)) * 0x4d) u>> 8).b
                        result_6 = *ebx
                        var_a4_4 = eax_94
                        
                        if (eax_94 u>= *result_6)
                            break
                        
                        ecx_40 = var_b4_2
                    
                    edi_3 = var_1c
            else if (result_6[2] != 4)
            label_513ca8:
                int32_t eax_132 = *result_6
                
                if (result_5 s>= 3)
                    int32_t j_4 = 0
                    
                    if (eax_132 != 0)
                        do
                            esi_9 += 2
                            char* eax_133
                            eax_133.b = var_1c[j_4]
                            j_4 += 1
                            *(esi_9 - 2) = eax_133.b
                            *(esi_9 - 1) = 0xff
                            result_6 = *ebx
                        while (j_4 u< *result_6)
                        
                        edi_3 = var_1c
                else
                    int32_t j_5 = 0
                    
                    if (eax_132 != 0)
                        char* edi_20 = var_1c - esi_9
                        
                        do
                            eax_132.b = *(edi_20 + esi_9)
                            esi_9 += 1
                            *(esi_9 - 1) = eax_132.b
                            j_5 += 1
                            result_6 = *ebx
                        while (j_5 u< *result_6)
                        
                        edi_3 = var_1c
            else
                int32_t j_6 = ebx[0x11fa]
                
                if (j_6 != 0)
                    if (j_6 != 2)
                        goto label_513ca8
                    
                    int32_t j_10 = 0
                    
                    if (*result_6 u> 0)
                        void* edx_28 = var_10
                        void* edi_18 = var_1c - edx_28
                        
                        do
                            j_6.b = *(edx_28 + edi_18)
                            edx_28 += 1
                            j_6.b = not.b(j_6.b)
                            int32_t ecx_61 = zx.d(j_6.b) * zx.d(*(edx_28 - 1))
                            *(esi_9 + 1) = 0xff
                            *esi_9 = ((((ecx_61 + 0x80) u>> 8) + ecx_61 + 0x80) u>> 8).b
                            result_6 = *ebx
                            j_6 = j_10 + 1
                            esi_9 += var_a8
                            j_10 = j_6
                        while (j_6 u< *result_6)
                        
                        edi_3 = var_1c
                else
                    int32_t j_9 = j_6
                    
                    if (*result_6 u> j_6)
                        void* edx_23 = var_10
                        void* edi_13 = var_1c - var_10
                        void* var_ac_4 = var_10
                        void* var_b0_4 = edi_13
                        int32_t j_7
                        
                        do
                            uint32_t eax_107 = zx.d(*edx_23)
                            int32_t ecx_54 = zx.d(*(edx_23 + var_18 - var_10)) * eax_107
                            int32_t edx_25 = zx.d(*(edx_23 + var_14 - var_10)) * eax_107
                            ebx = var_cc
                            int32_t edi_16 = zx.d(*(edx_23 + edi_13)) * eax_107 + 0x80
                            *(esi_9 + 1) = 0xff
                            edx_23 = var_ac_4 + 1
                            var_ac_4 = edx_23
                            edi_13 = var_b0_4
                            int32_t ecx_58 =
                                zx.d(((((ecx_54 + 0x80) u>> 8) + ecx_54 + 0x80) u>> 8).b) * 0x96
                                + zx.d(((((edx_25 + 0x80) u>> 8) + edx_25 + 0x80) u>> 8).b) * 0x1d
                                + zx.d((((edi_16 u>> 8) + edi_16) u>> 8).b) * 0x4d
                            j_7 = j_9 + 1
                            *esi_9 = (ecx_58 u>> 8).b
                            result_6 = *ebx
                            esi_9 += var_a8
                            j_9 = j_7
                        while (j_7 u< *result_6)
                        edi_3 = var_1c
            result_2 = result
            i = i_1 + 1
            i_1 = i
        while (i u< result_6[1])
    
    sub_512140(i, result_6[2], ebx, 0)
    *arg2 = **ebx
    *arg4 = *(*ebx + 4)
    
    if (arg5 != 0)
        int32_t ecx_66
        ecx_66.b = *(*ebx + 8) s>= 3
        *arg5 = (ecx_66 << 1) + 1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
