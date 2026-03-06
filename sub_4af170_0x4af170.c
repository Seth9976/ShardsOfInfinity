// 函数名称: sub_4af170
// 虚拟地址: 0x4af170
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4af170(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5447b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* ebx
    void* var_28 = ebx
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** var_18 = arg2
    char* eax_3 = arg1[2]
    int32_t ecx = arg1[1]
    bool cond:0 = eax_3 == ecx
    
    if (eax_3 s<= ecx)
        while (true)
            if (not(cond:0))
                char* var_14 = nullptr
                eax_3 = sub_4aeef0(arg1, &var_14)
                char* esi_1 = eax_3
                
                if (esi_1 == 0)
                    void* eax_5 = sub_4ae510(arg1)
                    var_14 = &data_5559b1
                    int32_t var_8_1 = 0
                    sub_44f690(&var_14, *arg1 + arg1[2], eax_5 - arg1[2])
                    char* esi_2 = var_14
                    char* edx_2 = &data_5559b1
                    
                    if (esi_2 != 0)
                        edx_2 = esi_2
                    
                    float xmm0_2
                    eax_3, xmm0_2 = sub_4ae2c0(arg1[0xb], edx_2)
                    float xmm0_3 = xmm0_2 f* arg1[0xa]
                    float xmm3_2 = arg1[3]
                    
                    if (arg1[6] f< xmm3_2 + xmm0_3)
                        xmm3_2 f- 0
                        eax_3:1.b = (xmm3_2 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3_2, 0f) ? 1 : 0) << 2 | (xmm3_2 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            int32_t var_8_6 = 6
                        else
                            sub_4ae660(&var_18, arg1)
                            var_8_1.b = 2
                            sub_4aefe0(arg1, &var_18)
                            eax_3 = var_18
                            int32_t ecx_27
                            
                            if (eax_3 == 0 || *eax_3 == 0)
                                ecx_27 = 0
                            else
                                ecx_27 = *(sub_44f000(&var_18) + 8)
                                eax_3 = var_18
                            
                            float xmm0_7 = xmm0_3 f+ arg1[3]
                            arg1[2] += ecx_27
                            arg1[3] = xmm0_7
                            var_8_1.b = 3
                            
                            if (data_cdf414 != 0 && eax_3 != 0 && *eax_3 != 0)
                                eax_3 = sub_44f000(&var_18)
                                int32_t temp2_1 = *(eax_3 + 4)
                                *(eax_3 + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    eax_3 = sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
                                    var_18 = &data_5559b1
                            
                            int32_t var_8_5 = 4
                    else
                        sub_4aefe0(arg1, &var_14)
                        float xmm0_5 = xmm0_3 f+ arg1[3]
                        eax_3 = *arg1
                        arg1[2] = eax_5
                        arg1[3] = xmm0_5
                        
                        if (*(eax_5 + eax_3) != 0xd)
                            int32_t var_8_2 = 7
                            
                            if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                                char* eax_6 = sub_44f000(&var_14)
                                int32_t temp0_1 = *(eax_6 + 4)
                                *(eax_6 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                                    var_14 = &data_5559b1
                            
                            int32_t var_8_3 = 0xffffffff
                            eax_3 = arg1[2]
                            goto label_4af332
                        
                        int32_t var_8_4 = 1
                    
                    if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                        eax_3 = sub_44f000(&var_14)
                        int32_t temp1_1 = *(eax_3 + 4)
                        *(eax_3 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            int32_t eax_8 = sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_8
                else
                    if (esi_1[0x30] != 0)
                        char* eax_7 = var_14
                        arg1[2] = &eax_7[arg1[2]]
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_7
                    
                    int32_t* ecx_2 = *(esi_1 + 8)
                    float xmm2_3
                    
                    if (ecx_2 == 0)
                        xmm2_3 = (zx.o(0)).d
                    else
                        eax_3 = *(esi_1 + 0x38)
                        
                        if (eax_3 == 0)
                            eax_3 = sub_432570(*ecx_2)
                            xmm2_3 = *(esi_1 + 0x1c) f* eax_3
                        else
                            xmm2_3 = _mm_cvtepi32_ps(zx.o(eax_3)) f* *(esi_1 + 0x1c)
                    
                    float xmm3_1 = arg1[3]
                    ebx.b = 0
                    
                    if (arg1[6] f< xmm3_1 + xmm2_3)
                        xmm3_1 f- 0
                        eax_3:1.b = (xmm3_1 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2 | (xmm3_1 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            goto label_4af23a
                    else
                        ebx.b = 1
                    label_4af23a:
                        sub_4ae8c0(eax_3, esi_1, arg1, xmm2_3, var_18)
                        eax_3 = &var_14[arg1[2]]
                        arg1[2] = eax_3
                        
                        if (ebx.b != 0)
                        label_4af332:
                            int32_t ecx_17 = arg1[1]
                            cond:0 = eax_3 == ecx_17
                            
                            if (eax_3 s> ecx_17)
                                break
                            
                            continue
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_3
    
    sub_44e4d0(eax_3, &data_5559b1, "wrapperData.mCurrentTextPtr <= wrapperData.mTextLength", 
        "c:\ax2017\engine\font.cpp", 0x36b, "WrapperLine")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
