// 函数名称: sub_4a25c0
// 虚拟地址: 0x4a25c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_4a25c0(int32_t arg1, int32_t arg2, char** arg3, char* arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543d6a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c = 0
    int32_t var_3c = arg2
    int32_t var_8_1 = 1
    sub_44f980(arg3, "samplerFn_%s")
    int32_t* ebx = arg6
    int32_t var_1c_1 = 2
    int32_t ecx = ebx[0x41]
    ebx[0x41] = ecx + 1
    ebx[ebx[0x52] + 0x42] = ecx
    ebx[0x52] += 1
    sub_44f510((ecx << 3) + 4 + ebx, arg3)
    int32_t var_8_2 = 0
    int32_t var_1c_2 = 1
    int32_t* arg_4
    int32_t edi = *arg_4
    int32_t ecx_3 = edi
    int32_t i = edi + 1
    int32_t i_2 = i
    
    if (i s< arg5 + 1 + edi)
        char* edi_1 = arg4
        
        do
            int32_t eax_9 = i * 9
            void* edi_2 = &edi_1[eax_9 << 3]
            
            if (edi_1[(eax_9 << 3) + 4] == 0)
                int32_t i_1 = i
                
                if (*edi_2 == 0)
                    int32_t edx = ebx[0x57]
                    int32_t eax_10 = 0
                    
                    if (edx s> 0)
                        void* ecx_4 = &ebx[0x53]
                        
                        while (true)
                            ebx = arg6
                            
                            if (*ecx_4 == *(edi_2 + 0xc))
                                break
                            
                            eax_10 += 1
                            ecx_4 += 4
                            
                            if (eax_10 s>= edx)
                                goto label_4a26c0
                    
                    if (edx s<= 0 || eax_10 == 0xffffffff)
                    label_4a26c0:
                        eax_10 = edx
                        ebx[0x57] = edx + 1
                        ebx[eax_10 + 0x53] = *(edi_2 + 0xc)
                        i = i_2
                    
                    ebx[i_1 * 3 + 0x59] = eax_10
                
                void* ecx_9 = edi_2 + 0x28
                void* edx_1 = &data_5b54a8
                int32_t edi_3 = 0x1c
                
                while (true)
                    if (*ecx_9 != *edx_1)
                        int32_t ecx_10 = ebx[0xa8]
                        ebx[0xa8] = ecx_10 + 1
                        ebx[i_1 * 3 + 0x58] = ecx_10
                        break
                    
                    ecx_9 += 4
                    edx_1 += 4
                    int32_t temp2_1 = edi_3
                    edi_3 -= 4
                    
                    if (temp2_1 u< 4)
                        ebx[i_1 * 3 + 0x58] = 0xffffffff
                        break
                
                edi_1 = arg4
                int32_t eax_17 = i * 9
                int32_t ecx_11
                
                if (*(edi_1 + (eax_17 << 3)) != 2)
                    ecx_11 = 0
                else
                    ecx_11 = *(edi_1 + (eax_17 << 3) + 8)
                
                int32_t eax_21 = *arg_4 - ecx_11 + arg5
                sub_4a2070(eax_21, &i_2, edi_1, ebx, i == eax_21)
                i = i_2
            else
                edi_1 = arg4
                i += 1
                i_2 = i
            
            ecx_3 = *arg_4
        while (i s< arg5 + 1 + ecx_3)
    
    int32_t var_8_6
    
    if (ecx_3 == 0xffffffff)
        sub_44f240(&arg_4, "\tfloat2 uv = arg_uv;\n")
        int32_t var_8_7 = 6
        sub_4a1db0(ebx, &arg_4)
        var_8_6 = 7
    else
        void* esi_1 = &arg4[ecx_3 * 0x48]
        int32_t var_8_3 = 2
        sub_4a1db0(ebx, sub_4a1690(&arg_4, esi_1))
        int32_t var_8_4 = 3
        
        if (data_cdf414 != 0)
            int32_t* eax_28 = arg_4
            
            if (eax_28 != 0 && *eax_28 != 0)
                char* eax_29 = sub_44f000(&arg_4)
                int32_t temp0_1 = *(eax_29 + 4)
                *(eax_29 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_29, *(eax_29 + 0xc) + 0x10)
        
        var_8_4.b = 0
        int32_t var_8_5 = 4
        sub_4a1db0(ebx, sub_4a1600(esi_1 + 0x28, edi, &arg_4, esi_1 + 0x28, ebx))
        var_8_6 = 5
    
    if (data_cdf414 != 0)
        int32_t* eax_32 = arg_4
        
        if (eax_32 != 0 && *eax_32 != 0)
            char* eax_33 = sub_44f000(&arg_4)
            int32_t temp1_1 = *(eax_33 + 4)
            *(eax_33 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_33, *(eax_33 + 0xc) + 0x10)
    
    var_8_6.b = 0
    sub_4a1e80(ebx)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
