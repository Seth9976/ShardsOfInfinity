// 函数名称: sub_49ef60
// 虚拟地址: 0x49ef60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_49ef60(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_543a3b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_5c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    void* edi = *arg1
    char* result = nullptr
    void* var_24 = edi
    char* result_1 = nullptr
    
    if (*(edi + 4) s> 0)
        while (true)
            int32_t* esi_2 = result * 0x134 + *edi
            _memset(&esi_2[3], 0, 0x71)
            _memset(esi_2 + 0x7d, 0, 0x71)
            void* edx_1 = data_e470d8
            esi_2[0x3d] = 1
            esi_2[0x3c] = 1
            esi_2[0x3e] = 0x3c23d70a
            esi_2[0x3f] = 0x3c23d70a
            esi_2[0x4c] = 0
            sub_48b560(&esi_2[0x42], edx_1, &esi_2[0x42], &data_5b39c8)
            sub_48b560(&esi_2[0x44], data_e470d8, &esi_2[0x44], &data_5b39c8)
            sub_48b560(&esi_2[0x46], data_e470d8, &esi_2[0x46], &data_5b39c8)
            int32_t* eax_9 = esi_2
            int32_t esi_3 = 0
            int32_t var_30_1 = 0
            
            if (*eax_9 s> 0)
                while (true)
                    int32_t edx_5 = eax_9[1]
                    int32_t var_2c_1 = edx_5
                    int32_t ecx_4 = *(edx_5 + (esi_3 << 3))
                    
                    if (ecx_4 u>= 0x71)
                        sub_44e4d0(eax_9, &data_5559b1, 
                            "attribPair.tag >= 0 && attribPair.tag < NUM_PARTICLE_PARAM_TYPES", 
                            "c:\ax2017\engine\particle.cpp", 0xaf1, "ParticleReimport")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    char* edi_1 = *(edx_5 + (esi_3 << 3) + 4)
                    
                    if (ecx_4 != 0x23 && ecx_4 != 0x24 && ecx_4 != 0x25 && ecx_4 != 0x26
                            && ecx_4 != 0x27 && ecx_4 != 0x28 && ecx_4 != 0x3c && ecx_4 != 0x29
                            && ecx_4 != 0x2a && ecx_4 != 0x2b && ecx_4 != 0x2c && ecx_4 != 0x2d
                            && ecx_4 != 0x2e && ecx_4 != 0x2f && ecx_4 != 0x30 && ecx_4 != 0x31
                            && ecx_4 != 0x37 && ecx_4 != 0x36 && ecx_4 != 0x32 && ecx_4 != 0x33
                            && ecx_4 != 0x34 && ecx_4 != 0x35 && ecx_4 != 0x41 && ecx_4 != 0x50
                            && ecx_4 != 0x38 && ecx_4 != 0x4b && ecx_4 != 0x4c && ecx_4 != 9
                            && ecx_4 != 0x68 && ecx_4 != 0x67 && ecx_4 != 0x69 && ecx_4 != 0x6b
                            && ecx_4 != 0x6a)
                        eax_9 = ecx_4
                    
                    if (ecx_4 == 0x23 || ecx_4 == 0x24 || ecx_4 == 0x25 || ecx_4 == 0x26
                            || ecx_4 == 0x27 || ecx_4 == 0x28 || ecx_4 == 0x3c || ecx_4 == 0x29
                            || ecx_4 == 0x2a || ecx_4 == 0x2b || ecx_4 == 0x2c || ecx_4 == 0x2d
                            || ecx_4 == 0x2e || ecx_4 == 0x2f || ecx_4 == 0x30 || ecx_4 == 0x31
                            || ecx_4 == 0x37 || ecx_4 == 0x36 || ecx_4 == 0x32 || ecx_4 == 0x33
                            || ecx_4 == 0x34 || ecx_4 == 0x35 || ecx_4 == 0x41 || ecx_4 == 0x50
                            || ecx_4 == 0x38 || ecx_4 == 0x4b || ecx_4 == 0x4c || ecx_4 == 9
                            || ecx_4 == 0x68 || ecx_4 == 0x67 || ecx_4 == 0x69 || ecx_4 == 0x6b
                            || ecx_4 == 0x6a || ecx_4 == 0x17)
                        sub_4b8610(eax_9, &esi_2[0x42], &data_5b39c8, ecx_4, edi_1)
                        edx_5 = var_2c_1
                        ecx_4 = *(edx_5 + (esi_3 << 3))
                        eax_9 = ecx_4
                    
                    if (eax_9 == 0x11 || eax_9 == 0x12 || eax_9 == 0x14 || eax_9 == 0xf || eax_9 == 0x10
                            || eax_9 == 0x13)
                        sub_4b8610(eax_9, &esi_2[0x44], &data_5b39c8, eax_9, 
                            *(edx_5 + (esi_3 << 3) + 4))
                        edx_5 = var_2c_1
                        ecx_4 = *(edx_5 + (esi_3 << 3))
                        eax_9 = ecx_4
                    
                    if (eax_9 == 0x63 || eax_9 == 0x3d || eax_9 == 0x3e || eax_9 == 0x3f
                            || eax_9 == 0x40 || eax_9 == 0x41 || eax_9 == 0x52 || eax_9 == 0x42
                            || eax_9 == 0x43 || eax_9 == 0x44 || eax_9 == 0x45 || eax_9 == 0x46
                            || eax_9 == 0x47 || eax_9 == 0x48 || eax_9 == 0x49 || eax_9 == 0x4a
                            || eax_9 == 0x1f || eax_9 == 0x20 || eax_9 == 0x21 || eax_9 == 0x51
                            || eax_9 == 0x39 || eax_9 == 0x3a || eax_9 == 0x3b || eax_9 == 0x53)
                        sub_4b8610(eax_9, &esi_2[0x46], &data_5b39c8, ecx_4, 
                            *(edx_5 + (esi_3 << 3) + 4))
                        edx_5 = var_2c_1
                        eax_9 = *(edx_5 + (esi_3 << 3))
                    
                    int32_t* ecx_17
                    
                    if (eax_9 == 0xc)
                        int32_t edx_8 = *(edi_1 + 4)
                        int32_t eax_10 = 0
                        void* esi_4
                        
                        if (edx_8 s> 0)
                            esi_4 = *edi_1
                            int32_t* ecx_5 = esi_4 + 8
                            
                            while (not(*ecx_5 f>= 0))
                                eax_10 += 1
                                ecx_5 = &ecx_5[4]
                                
                                if (eax_10 s>= edx_8)
                                    break
                        
                        int32_t xmm0_7
                        
                        if (edx_8 s<= 0 || eax_10 == 0)
                            xmm0_7 = sub_4e02c0(*edi_1, *(edi_1 + 8), (zx.o(0)).d)
                        else
                            int32_t xmm1_1 = (zx.o(0)).d
                            
                            if (eax_10 != edx_8)
                                int32_t* esi_5 = esi_4 + (eax_10 << 4)
                                float xmm2_2 = (0f f- esi_5[-2]) / (esi_5[2] f- esi_5[-2])
                                float xmm0_4 = sub_4e02c0(&esi_5[-4], *(edi_1 + 8), xmm1_1)
                                float xmm0_5 = sub_4e02c0(esi_5, *(edi_1 + 8), (zx.o(0)).d)
                                xmm0_7 = sub_4145f0(esi_5[3], xmm2_2, xmm0_4, xmm0_5)
                            else
                                xmm0_7 = sub_4e02c0((edx_8 << 4) - 0x10 + esi_4, *(edi_1 + 8), xmm1_1)
                        
                        *(var_24 + 8) = xmm0_7
                        int32_t eax_13 = 0
                        int32_t edx_13 = *(edi_1 + 4)
                        void* esi_6
                        
                        if (edx_13 s> 0)
                            esi_6 = *edi_1
                            int32_t* ecx_11 = esi_6 + 8
                            
                            while (not(*ecx_11 f>= 0))
                                eax_13 += 1
                                ecx_11 = &ecx_11[4]
                                
                                if (eax_13 s>= edx_13)
                                    break
                        
                        int32_t xmm0_14
                        
                        if (edx_13 s<= 0 || eax_13 == 0)
                            xmm0_14 = sub_4e02c0(*edi_1, *(edi_1 + 8), 1f)
                        else if (eax_13 != edx_13)
                            void* esi_7 = esi_6 + (eax_13 << 4)
                            float xmm2_5 = (0f f- *(esi_7 - 8)) / (*(esi_7 + 8) f- *(esi_7 - 8))
                            float xmm0_11 = sub_4e02c0(esi_7 - 0x10, *(edi_1 + 8), 1f)
                            float xmm0_12 = sub_4e02c0(esi_7, *(edi_1 + 8), 1f)
                            xmm0_14 = sub_4145f0(*(esi_7 + 0xc), xmm2_5, xmm0_11, xmm0_12)
                        else
                            xmm0_14 = sub_4e02c0((edx_13 << 4) - 0x10 + esi_6, *(edi_1 + 8), 1f)
                        
                        edi = var_24
                        *(edi + 0x14) = xmm0_14
                        esi_3 = var_30_1
                        ecx_17 = esi_2
                    else if (eax_9 == 0xd)
                        int32_t edx_22 = *(edi_1 + 4)
                        int32_t eax_20 = 0
                        void* esi_8
                        
                        if (edx_22 s> 0)
                            esi_8 = *edi_1
                            int32_t* ecx_23 = esi_8 + 8
                            
                            while (not(*ecx_23 f>= 0))
                                eax_20 += 1
                                ecx_23 = &ecx_23[4]
                                
                                if (eax_20 s>= edx_22)
                                    break
                        
                        int32_t xmm0_21
                        
                        if (edx_22 s<= 0 || eax_20 == 0)
                            xmm0_21 = sub_4e02c0(*edi_1, *(edi_1 + 8), (zx.o(0)).d)
                        else
                            int32_t xmm1_5 = (zx.o(0)).d
                            
                            if (eax_20 != edx_22)
                                int32_t* esi_9 = esi_8 + (eax_20 << 4)
                                float xmm2_8 = (0f f- esi_9[-2]) / (esi_9[2] f- esi_9[-2])
                                float xmm0_18 = sub_4e02c0(&esi_9[-4], *(edi_1 + 8), xmm1_5)
                                float xmm0_19 = sub_4e02c0(esi_9, *(edi_1 + 8), (zx.o(0)).d)
                                xmm0_21 = sub_4145f0(esi_9[3], xmm2_8, xmm0_18, xmm0_19)
                            else
                                xmm0_21 = sub_4e02c0((edx_22 << 4) - 0x10 + esi_8, *(edi_1 + 8), xmm1_5)
                        
                        *(var_24 + 0xc) = xmm0_21
                        int32_t eax_23 = 0
                        int32_t edx_27 = *(edi_1 + 4)
                        void* esi_10
                        
                        if (edx_27 s> 0)
                            esi_10 = *edi_1
                            int32_t* ecx_29 = esi_10 + 8
                            
                            while (not(*ecx_29 f>= 0))
                                eax_23 += 1
                                ecx_29 = &ecx_29[4]
                                
                                if (eax_23 s>= edx_27)
                                    break
                        
                        if (edx_27 s<= 0 || eax_23 == 0)
                            edi = var_24
                            *(edi + 0x18) = sub_4e02c0(*edi_1, *(edi_1 + 8), 1f)
                        else if (eax_23 != edx_27)
                            void* esi_11 = esi_10 + (eax_23 << 4)
                            float xmm2_11 = (0f f- *(esi_11 - 8)) / (*(esi_11 + 8) f- *(esi_11 - 8))
                            float xmm0_25 = sub_4e02c0(esi_11 - 0x10, *(edi_1 + 8), 1f)
                            float xmm0_26 = sub_4e02c0(esi_11, *(edi_1 + 8), 1f)
                            edi = var_24
                            *(edi + 0x18) = sub_4145f0(*(esi_11 + 0xc), xmm2_11, xmm0_25, xmm0_26)
                        else
                            edi = var_24
                            *(edi + 0x18) = sub_4e02c0((edx_27 << 4) - 0x10 + esi_10, *(edi_1 + 8), 1f)
                        
                        esi_3 = var_30_1
                        ecx_17 = esi_2
                    else if (eax_9 == 0xe)
                        *(var_24 + 0x10) = sub_4e0380(edi_1, 0, (zx.o(0)).d, (zx.o(0)).d)
                        edi = var_24
                        *(edi + 0x1c) = sub_4e0380(edi_1, 0, (zx.o(0)).d, 1f)
                        ecx_17 = esi_2
                    else if (eax_9 == 6)
                        float xmm0_33 = sub_4e0380(edi_1, 0, (zx.o(0)).d, (zx.o(0)).d)
                        float xmm1_13
                        
                        if (0 f<= xmm0_33)
                            xmm1_13 = xmm0_33 + 0.5f
                        else
                            xmm1_13 = xmm0_33 - 0.5f
                        
                        edi = var_24
                        int32_t eax_26 = 1
                        int32_t ecx_38 = int.d(xmm1_13)
                        
                        if (ecx_38 s> 1)
                            eax_26 = ecx_38
                        
                        ecx_17 = esi_2
                        ecx_17[0x3c] = eax_26
                    else if (eax_9 == 7)
                        float xmm0_34 = sub_4e0380(edi_1, 0, (zx.o(0)).d, (zx.o(0)).d)
                        float xmm1_16
                        
                        if (0 f<= xmm0_34)
                            xmm1_16 = xmm0_34 + 0.5f
                        else
                            xmm1_16 = xmm0_34 - 0.5f
                        
                        edi = var_24
                        int32_t eax_27 = 1
                        int32_t ecx_40 = int.d(xmm1_16)
                        
                        if (ecx_40 s> 1)
                            eax_27 = ecx_40
                        
                        ecx_17 = esi_2
                        ecx_17[0x3d] = eax_27
                    else if (eax_9 == 0x15)
                        ecx_17 = esi_2
                        edi = var_24
                        ecx_17[0x40] =
                            sub_4e0380(edi_1, 0, (zx.o(0)).d, (zx.o(0)).d) ^ (data_59e5c0.o).d
                    else if (eax_9 != 0x16)
                        edi = var_24
                        
                        if (eax_9 == 8)
                            ecx_17 = esi_2
                            ecx_17[0x48] = *(edx_5 + (esi_3 << 3) + 4)
                        else if (eax_9 == 0xa)
                            ecx_17 = esi_2
                            ecx_17[0x49] = *(edx_5 + (esi_3 << 3) + 4)
                        else if (eax_9 == 0xb)
                            ecx_17 = esi_2
                            ecx_17[0x4a] = *(edx_5 + (esi_3 << 3) + 4)
                        else if (eax_9 == 5)
                            ecx_17 = esi_2
                            ecx_17[0x4b] = *(edx_5 + (esi_3 << 3) + 4)
                        else if (eax_9 == 0x55)
                            ecx_17 = esi_2
                            
                            if (*(edx_5 + (esi_3 << 3) + 4) != 0)
                                ecx_17[0x4c] = 1
                        else if (eax_9 == 0x56)
                            ecx_17 = esi_2
                            
                            if (*(edx_5 + (esi_3 << 3) + 4) != 0)
                                ecx_17[0x4c] = 2
                        else if (eax_9 == 0x57)
                            ecx_17 = esi_2
                            
                            if (*(edx_5 + (esi_3 << 3) + 4) != 0)
                                ecx_17[0x4c] = 3
                        else if (eax_9 != 0x58 || *(edx_5 + (esi_3 << 3) + 4) == 0)
                            ecx_17 = esi_2
                        else
                            ecx_17 = esi_2
                            ecx_17[0x4c] = 4
                    else
                        ecx_17 = esi_2
                        edi = var_24
                        ecx_17[0x41] =
                            sub_4e0380(edi_1, 0, (zx.o(0)).d, (zx.o(0)).d) ^ (data_59e5c0.o).d
                    
                    int32_t eax_15 = *(var_2c_1 + (esi_3 << 3))
                    *(eax_15 + ecx_17 + 0xc) = 1
                    char* ecx_18 = *(var_2c_1 + (esi_3 << 3))
                    
                    if (ecx_18 s< 0 || ecx_18 s>= data_5b39d8)
                        sub_44e4d0(eax_15, &data_5559b1, 
                            "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                            "c:\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_44e680()
                            noreturn
                        
                        breakpoint
                    
                    void* eax_18 = *(*(data_5b39d4 + (ecx_18 << 2)) + 0xc)
                    
                    if (eax_18 == 0)
                        sub_44e4d0(eax_18, &data_5559b1, "pAttribField->pDefMap", 
                            "c:\ax2017\engine\attribmap.cpp", 0x1fe, "AttribTagGetDefMap")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    if (*(eax_18 + 0x10) == 0xa)
                        eax_18.b = *(var_2c_1 + (esi_3 << 3) + 4) != 0
                        *(ecx_18 + esi_2 + 0x7d) = eax_18.b
                    
                    eax_9 = esi_2
                    esi_3 += 1
                    var_30_1 = esi_3
                    
                    if (esi_3 s>= *eax_9)
                        break
                    
                    continue
            
            result = &result_1[1]
            result_1 = result
            
            if (result s>= *(edi + 4))
                break
    
    int32_t var_14_2 = 1
    
    if (data_cdf414 != 0)
        char* result_2
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
