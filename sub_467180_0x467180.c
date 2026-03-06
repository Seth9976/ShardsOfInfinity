// 函数名称: sub_467180
// 虚拟地址: 0x467180
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_467180(int32_t arg1, char* arg2, char* arg3, void* arg4, int32_t* arg5, int32_t* arg6, int32_t arg7, char arg8)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) =
        __ehhandler$?_Makeloc@_Locimp@locale@std@@CAPAV123@ABV_Locinfo@3@HPAV123@PBV23@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_ac = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_24 = arg2
    char* eax_16
    float var_28
    float* ecx_5
    
    if (data_5c99e8 == 0)
    label_4673a5:
        void* eax_17 = *(arg4 + 0x63c) * 0x208
        
        if (*(eax_17 + arg4 + 0x1c0) == 0)
            int32_t ecx_6
            eax_17, ecx_6 = _strchr(arg3, 0xd)
            
            if (eax_17 == 0)
                int32_t edx_3 = *(arg4 + 0x63c) * 0x208
                int32_t var_b4_4 = ecx_6
                int32_t* eax_18 = sub_4ae200(eax_17, *(edx_3 + arg4 + 0x1ac), arg3, var_24, arg5, arg6, 
                    arg7, *(edx_3 + arg4 + 0xac))
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_18
        
        if (arg3 == 0)
            sub_44e4d0(eax_17, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_44f240(&var_28, arg3)
        int32_t var_14_3 = 2
        int32_t ecx_11 = *(arg4 + 0x63c) * 0x208
        int32_t var_b0_3 = ecx_11
        int32_t var_b0_4 = arg7
        eax_16 = sub_4af9d0(arg5, var_24, &var_28, *(ecx_11 + arg4 + 0x1ac), *arg5, *arg6, 
            *(ecx_11 + arg4 + 0xac))
        int32_t var_14_4 = 3
        
        if (data_cdf414 != 0)
            eax_16 = var_28
            
            if (eax_16 != 0 && *eax_16 != 0)
                ecx_5 = &var_28
            label_467485:
                eax_16 = sub_44f000(ecx_5)
                int32_t temp0_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp0_1 == 1)
                    eax_16 = sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
    else
        if (_strchr(arg3, 0x7b) == 0)
            goto label_4673a5
        
        int32_t eax_4 = *(arg4 + 0x63c) * 0x208
        
        if (*(eax_4 + arg4 + 0x1c1) != 0)
            goto label_4673a5
        
        float xmm0 = *(arg4 + 0x6e8)
        char* esi_1 = var_24
        float xmm1_2 = *(eax_4 + arg4 + 0x1c8) * xmm0
        int128_t xmm0_1 = *esi_1
        var_28 = xmm1_2
        int128_t var_54 = xmm0_1
        
        if (not(xmm1_2 <= 9.99999975e-06f))
            float eax_5
            float edx
            eax_5, edx = sub_47be40(esi_1)
            float xmm1_3 = 1f / var_28
            var_28 = xmm1_3
            var_24 = eax_5 * xmm1_3
            float eax_6
            float edx_1
            eax_6, edx_1 = sub_41b6f0(esi_1)
            var_54:4.d = edx_1 * var_28
            var_54:8.d = var_24
            var_54.d = eax_6 * var_28
            var_54:0xc.d = edx * xmm1_3
        
        int32_t esi_2 = *(arg4 + 0x63c)
        void var_a0
        _memset(&var_a0, 0, 0x44)
        int32_t var_8c_1 = *arg5
        int32_t var_88_1 = *arg6
        int32_t var_63_1 = 0xffffffff
        
        if (arg8 != 0)
            var_24 = nullptr
            char* var_63_2 = var_24
        
        float xmm1_6 = *(arg4 + 0x750)
        int32_t ecx_2 = esi_2 * 0x208
        int32_t var_84_1 = 0x3f800000
        int32_t var_34 = *(ecx_2 + arg4 + 0x1ac)
        int32_t* var_9c_1 = &var_34
        int32_t var_90_1 = *(ecx_2 + arg4 + 0xac)
        int32_t* eax_14 = sub_485680(&data_571944, xmm1_6)
        struct _EXCEPTION_REGISTRATION_RECORD** ecx_4 = sub_44f2d0(&var_24, arg3)
        int32_t var_14_1 = 0
        void* var_b0_1 = &var_a0
        int32_t* eax_15 = *(arg4 + 0x63c) * 0x208
        eax_16 =
            sub_4afe00(eax_15, &var_54, *(eax_15 + arg4 + 0x1c8) * xmm0, ecx_4, data_5c99e8, eax_14)
        int32_t var_14_2 = 1
        
        if (data_cdf414 != 0)
            eax_16 = var_24
            
            if (eax_16 != 0 && *eax_16 != 0)
                ecx_5 = &var_24
                goto label_467485
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16
}
