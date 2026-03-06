// 函数名称: sub_488e20
// 虚拟地址: 0x488e20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_488e20(int32_t arg1, int32_t* arg2, float arg3 @ ecx, int32_t* arg4, void* arg5, void* arg6)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) =
        __ehhandler$?_Reset@?$_Greedy_node@W4agent_status@Concurrency@@@Concurrency@@UAEXXZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_c4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_2c = arg3
    float xmm1 = *(arg3 i+ 0xf4)
    float xmm2 = *(arg3 i+ 0xf8)
    float xmm0 = arg4[3]
    float var_48 = xmm1 f+ *(arg3 i+ 0xc)
    float var_44 = *(arg3 i+ 0x10) + xmm2
    float var_40 = *(arg3 i+ 0x14) + xmm1
    float var_3c = *(arg3 i+ 0x18) + xmm2
    void var_58
    int128_t* eax_5 = sub_485510(&var_58, &var_48, arg4, &var_58, arg3 i+ 0x1c)
    bool cond:0 = arg2[0x57].b == 0
    float xmm1_1[0x4] = *eax_5
    var_48.o = xmm1_1
    float var_68[0x4] = xmm1_1
    
    if (not(cond:0))
        float xmm0_9 = var_68[2]
        float xmm2_1 = var_68[0]
        
        if (not(xmm0_9 < xmm2_1))
            float xmm1_2 = var_68[3]
            float xmm3_1 = var_68[1]
            
            if (not(xmm1_2 < xmm3_1))
                arg2[0x5c] = xmm2_1
                arg2[0x5d] = xmm3_1
                arg2[0x60] = 0
                arg2[0x61] = 0
                arg2[0x5e] = xmm0_9 - xmm2_1
                arg2[0x5f] = xmm1_2 - xmm3_1
                arg2[0x66] = *(arg3 i+ 0xc0) f* arg4[3]
                arg2[0x6b] = *(arg3 i+ 0xd8)
                struct _EXCEPTION_REGISTRATION_RECORD** eax_8 = sub_4c5830(&arg2[0x58])
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_8
        
        sub_44e4d0(eax_5, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0x127, 
            "RectTopLeft")
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    int32_t* eax_9 = data_65ae00
    
    if (*(eax_9 + 0x27) != 0 || *(eax_9 + 0x39) != 0)
    label_488fea:
        eax_9 = sub_488dc0(arg2, arg3)
        int32_t* ecx_5 = eax_9
        int32_t* var_24 = ecx_5
        
        if (*ecx_5 != 0)
            if (arg5 == 0)
                void* eax_11 = &arg2[0x1c]
                
                if (arg2[0x1b] s<= *arg2)
                    eax_11 = arg3 i+ 0xb8
                
                arg5 = eax_11
            
            void* esi_1
            
            if (arg6 != 0)
                esi_1 = arg6
            else if (arg2[0x1d] s<= *arg2)
                esi_1 = arg3 i+ 0xbc
            else
                esi_1 = &arg2[0x1e]
            
            if (data_cdf44c == 0)
                goto label_4891c5
            
            float var_4c
            
            if (_strchr(ecx_5, 0x7b) == 0)
                ecx_5 = var_24
            label_4891c5:
                
                if (*(arg3 i+ 0xc8) == 0 && _strchr(ecx_5, 0xd) == 0)
                    float xmm1_10 = arg4[2]
                    var_2c = sub_485680(esi_1, xmm1_10)
                    float eax_26 = sub_485680(arg5, xmm1_10)
                    int32_t var_c8_3 = *(arg3 i+ 0xc4)
                    float xmm0_29 = *(arg3 i+ 0xc0) * xmm0
                    int32_t* edx_5 = *(arg3 i+ 0xb4)
                    void* var_cc_4 = arg5
                    char* ecx_13 = var_24
                    var_4c = eax_26
                    int32_t* eax_28 =
                        sub_4ae200(&var_68, edx_5, ecx_13, &var_68, &var_4c, &var_2c, xmm0_29, var_c8_3)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_28
                
                float xmm1_11 = arg4[2]
                int32_t eax_30 = sub_485680(esi_1, xmm1_11)
                int32_t eax_31 = sub_485680(arg5, xmm1_11)
                int32_t ecx_19 = sub_44f2d0(&var_24, var_24)
                int32_t var_14_3 = 2
                float eax_32 = var_2c
                int32_t var_c8_5 = ecx_19
                float var_c8_6 = *(eax_32 i+ 0xc0) * xmm0
                eax_9 = sub_4af9d0(eax_32, &var_68, &var_24, *(eax_32 i+ 0xb4), eax_31, eax_30, 
                    *(eax_32 i+ 0xc4))
                int32_t var_14_4 = 3
            else
                float xmm1_5 = *(arg3 i+ 0xc0) * xmm0
                var_48.o = var_48.o
                
                if (not(xmm1_5 <= 9.99999975e-06f))
                    float eax_14
                    float edx_2
                    eax_14, edx_2 = sub_47be40(&var_68)
                    float xmm1_6 = 1f / xmm1_5
                    var_4c = edx_2
                    var_4c = var_4c * xmm1_6
                    float eax_15
                    float edx_3
                    eax_15, edx_3 = sub_41b6f0(&var_68)
                    var_2c = edx_3
                    float var_44_1 = var_2c * xmm1_6
                    float var_40_1 = eax_14 * xmm1_6
                    float xmm0_27 = var_4c
                    var_48 = eax_15 * xmm1_6
                    float var_3c_1 = xmm0_27
                
                int32_t var_b8 = 0
                int64_t var_b0_1 = 0
                int64_t var_98
                __builtin_memset(&var_98, 0, 0x24)
                int32_t var_a4_1 = *arg5
                int32_t var_a0_1 = *esi_1
                var_2c = *(arg3 i+ 0xb4)
                float* var_b4_1 = &var_2c
                int32_t var_a8_1 = *(arg3 i+ 0xc4)
                int32_t var_9c_1 = 0x3f800000
                int32_t* eax_21 = sub_485680(&data_571944, arg4[2])
                struct _EXCEPTION_REGISTRATION_RECORD** ecx_10 = sub_44f2d0(&var_24, var_24)
                int32_t var_14_1 = 0
                int32_t* var_c8_2 = &var_b8
                eax_9 =
                    sub_4afe00(&var_b8, &var_48, *(arg3 i+ 0xc0) * xmm0, ecx_10, data_cdf44c, eax_21)
                int32_t var_14_2 = 1
            
            if (data_cdf414 != 0)
                eax_9 = var_24
                
                if (eax_9 != 0 && *eax_9 != 0)
                    eax_9 = sub_44f000(&var_24)
                    int32_t temp0_1 = eax_9[1]
                    eax_9[1] -= 1
                    
                    if (temp0_1 == 1)
                        eax_9 = sub_45d050(eax_9, eax_9[3] + 0x10)
    else
        uint128_t xmm3_2 = zx.o(eax_9[5])
        uint128_t xmm4_1 = zx.o(eax_9[6])
        bool cond:1_1 = 0f > _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
        int32_t xmm3_3 = _mm_cvtepi32_ps(xmm3_2)
        int32_t xmm4_2 = _mm_cvtepi32_ps(xmm4_1)
        
        if (not(cond:1_1) && not(xmm1_1 f> xmm3_3) && not(0 f> _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff))
                && not(_mm_shuffle_ps(xmm1_1, xmm1_1, 0x55) f> xmm4_2))
            goto label_488fea
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_9
}
