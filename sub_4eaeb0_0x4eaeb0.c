// 函数名称: sub_4eaeb0
// 虚拟地址: 0x4eaeb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4eaeb0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5461e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_48 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = *(arg1 + 0x58)
    int16_t var_34 = arg2.w
    int32_t* var_30
    int32_t* var_4c = &var_30
    int32_t* var_28
    sub_42ce10(&var_28, ebx, 3)
    int32_t var_8_1 = 0
    int32_t* edi = var_30
    void* ecx_1 = *edi
    void* const edx
    
    if (ecx_1 != 0)
        int32_t* ecx_2 = *(ecx_1 + 0x24)
        int32_t* esi_1
        
        if (ecx_2 == 0)
            esi_1 = edi[1]
            
            if (esi_1 == 0)
                esi_1 = sub_48f050(ebx)
                edi[1] = esi_1
            
            int32_t var_8_4 = 0xffffffff
            int32_t* eax_7 = var_28
            
            if (eax_7 != 0)
                eax_7[7] -= 1
        else
            int32_t var_8_3 = 0xffffffff
            esi_1 = sub_48f4d0(ecx_2)
            int32_t* ecx_3 = var_28
            
            if (ecx_3 != 0)
                ecx_3[7] -= 1
        
        void* eax_8 = data_ce26f4
        
        if (esi_1 != 0)
            uint32_t ecx_5 = zx.d(esi_1.w)
            
            if (ecx_5 u< *(eax_8 + 0x3c))
                edx = ecx_5 * 0x24c + *(eax_8 + 0x38)
                
                if (*(edx + 0x248) != esi_1)
                    edx = nullptr
            else
                edx = nullptr
        else
            edx = nullptr
    else
        int32_t var_8_2 = 0xffffffff
        int32_t* eax_4 = var_28
        
        if (eax_4 == 0)
            edx = nullptr
        else
            eax_4[7] -= 1
            edx = nullptr
    
    float var_24 = _mm_cvtepi32_ps(zx.o(var_34.b)) / 255f
    float var_20 = _mm_cvtepi32_ps(zx.o(var_34:1.b)) / 255f
    float var_1c = _mm_cvtepi32_ps(zx.o(arg2:2.b)) / 255f
    float xmm0_10 = _mm_cvtepi32_ps(zx.o(arg2:3.b))
    int32_t* eax_13 = *(arg1 + 8)
    float var_18 = xmm0_10 / 255f
    int32_t result = (*(*eax_13 + 0xc8))(eax_13, *(edx + 0x30), &var_24)
    int32_t* ecx_8 = *(arg1 + 0x5c)
    
    if (ecx_8 != 0)
        int32_t* eax_14 = sub_48f4d0(ecx_8)
        void* esi_2 = data_ce26f4
        uint32_t ecx_9
        
        if (eax_14 != 0)
            ecx_9 = zx.d(eax_14.w)
        
        void* const edx_2
        
        if (eax_14 == 0 || ecx_9 u>= *(esi_2 + 0x3c))
            edx_2 = nullptr
        else
            edx_2 = ecx_9 * 0x24c + *(esi_2 + 0x38)
            
            if (*(edx_2 + 0x248) != eax_14)
                edx_2 = nullptr
        
        int32_t* eax_15 = *(arg1 + 8)
        int32_t ecx_10 = *eax_15
        int32_t var_50_1 = ecx_10
        result = (*(ecx_10 + 0xd4))(eax_15, *(edx_2 + 0x24), 1, 0x3f800000, 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
