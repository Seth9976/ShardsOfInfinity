// 函数名称: sub_4eac50
// 虚拟地址: 0x4eac50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4eac50(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5461b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t esi
    int32_t var_44 = esi
    int32_t edi
    int32_t var_48 = edi
    int32_t __saved_ebp
    int32_t var_4c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[0x17] = arg3
    arg1[0x16] = arg2
    int32_t* var_2c
    int32_t* var_50 = &var_2c
    int32_t var_54 = 3
    int32_t* var_24
    sub_42ce10(&var_24, arg2, 3)
    int32_t var_14_1 = 0
    int32_t* edi_1 = var_2c
    void* ecx_2 = *edi_1
    void* const edi_2
    
    if (ecx_2 != 0)
        int32_t* ecx_3 = *(ecx_2 + 0x24)
        int32_t* edx_1
        
        if (ecx_3 == 0)
            edx_1 = edi_1[1]
            
            if (edx_1 == 0)
                edx_1 = sub_48f050(arg2)
                edi_1[1] = edx_1
            
            int32_t var_14_4 = 0xffffffff
            int32_t* eax_7 = var_24
            
            if (eax_7 != 0)
                eax_7[7] -= 1
        else
            int32_t var_14_3 = 0xffffffff
            edx_1 = sub_48f4d0(ecx_3)
            int32_t* ecx_4 = var_24
            
            if (ecx_4 != 0)
                ecx_4[7] -= 1
        
        void* eax_8 = data_ce26f4
        
        if (edx_1 != 0)
            uint32_t ecx_6 = zx.d(edx_1.w)
            
            if (ecx_6 u< *(eax_8 + 0x3c))
                edi_2 = ecx_6 * 0x24c + *(eax_8 + 0x38)
                
                if (*(edi_2 + 0x248) != edx_1)
                    edi_2 = nullptr
            else
                edi_2 = nullptr
        else
            edi_2 = nullptr
    else
        int32_t var_14_2 = 0xffffffff
        int32_t* eax_4 = var_24
        
        if (eax_4 == 0)
            edi_2 = nullptr
        else
            eax_4[7] -= 1
            edi_2 = nullptr
    
    int32_t eax_11
    int32_t* ecx_9
    
    if (arg3 == 0)
        ecx_9 = arg1
        eax_11 = 0
        ecx_9[8].b = 0
    else
        int32_t* eax_10 = sub_48f4d0(arg3)
        void* edx_2 = data_ce26f4
        
        if (eax_10 != 0)
            uint32_t eax_12 = zx.d(eax_10.w)
            
            if (eax_12 u< *(edx_2 + 0x3c))
                void* const eax_14 = eax_12 * 0x24c + *(edx_2 + 0x38)
                ecx_9 = arg1
                
                if (*(eax_14 + 0x248) != eax_10)
                    eax_14 = nullptr
                
                eax_11 = *(eax_14 + 0x24)
                ecx_9[8].b = 1
            else
                ecx_9 = arg1
                eax_11 = *0x24
                ecx_9[8].b = 1
        else
            ecx_9 = arg1
            eax_11 = eax_10[9]
            ecx_9[8].b = 1
    
    int32_t* ecx_10 = ecx_9[2]
    int32_t var_50_1 = eax_11
    void* var_54_1 = edi_2 + 0x30
    int32_t var_58_1 = 1
    int32_t* var_5c = ecx_10
    (*(*ecx_10 + 0x84))()
    int32_t* eax_16 = *arg2
    
    if (eax_16 == 0)
        sub_4aa5d0(arg2, 0)
        eax_16 = *arg2
        
        if (eax_16 == 0)
            sub_48dac0(arg2)
            eax_16 = *arg2
    
    int32_t* ecx_13 = **eax_16
    int32_t eax_18 = *ecx_13
    double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_18)) f+ *((eax_18 u>> 0x1f << 3) + &data_59e4f0)
    int32_t eax_20 = ecx_13[1]
    float xmm1_1 = _mm_cvtpd_ps(xmm0_2) f* ecx_13[2]
    int32_t* xmm0_7 =
        _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_20)) f+ *((eax_20 u>> 0x1f << 3) + &data_59e4f0))
        f* ecx_13[2]
    arg1[6] = xmm1_1
    var_2c = xmm0_7
    arg1[7] = xmm0_7
    int32_t var_3c = 0
    int32_t var_38 = int.d(sub_453f10(xmm1_1 + 0.5f))
    int32_t var_34 = int.d(sub_453f10(var_2c f+ 0.5f))
    int32_t result = (*(*arg1 + 0x58))(0.o)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
