// 函数名称: sub_4a7710
// 虚拟地址: 0x4a7710
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4a7710()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5441bc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_ac = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_65ae00
    bool cond:0 = *(eax_3 + 0x27) == 0
    float xmm1_1 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x18)))
    float var_18 = xmm1_1
    
    if (not(cond:0))
        if ((*(sub_452df0() + 0x1c) & 0x200) != 0 || data_ce19bd != 0)
            xmm1_1 = 250f
            var_18 = 250f
        else
            xmm1_1 = var_18
    
    float var_40 = 0f
    int32_t var_38 = 0x43240000
    float var_34 = xmm1_1
    float var_3c = xmm1_1 - 83.3333359f
    int32_t i_1 = 0x40000000
    sub_47d680(&var_40, &i_1)
    int32_t i = 0
    void* ecx_1 = data_ce189c
    i_1 = 0
    int32_t result
    
    do
        int32_t eax_8
        int32_t edx_1
        edx_1:eax_8 = sx.q(*(ecx_1 + 0x5e01280) + 1 + i)
        result = divs.dp.d(edx_1:eax_8, 0x28)
        void* esi_2 = mods.dp.d(edx_1:eax_8, 0x28) * 0x259a10 + ecx_1
        
        if (*(esi_2 + 0x259a0c) != 0)
            result = *(esi_2 + 0x249f00)
            
            if (result != 0)
                float xmm1_5 = _mm_cvtepi32_ps(zx.o(i)) * 4f + 2f
                float var_24_1 = xmm1_5
                
                if (result != 0x186a0)
                    int32_t edx_4 = *(ecx_1 + 0x5e2069c)
                    float xmm0_5
                    
                    if (edx_4 == 0xffffffff)
                        int32_t eax_16 = result * 3
                        xmm0_5 = sub_44eb40(*esi_2, *(esi_2 + 4), *(esi_2 + (eax_16 << 3) - 0x18), 
                            *(esi_2 + (eax_16 << 3) - 0x14)) * 5f
                        ecx_1 = data_ce189c
                        xmm1_5 = var_24_1
                    else
                        int32_t edx_5 = *(ecx_1 + 0x5e20690)
                        int32_t eax_15 = *(ecx_1 + (edx_4 << 2) + 0x5e1c804) * 2
                        
                        if (edx_5 == 2)
                            xmm0_5 = _mm_cvtepi32_ps(zx.o(*(esi_2 + (eax_15 << 3) + 0x24a014)))
                        else if (edx_5 != 0)
                            xmm0_5 = *(esi_2 + (eax_15 << 3) + 0x24a00c) * 5f
                        else
                            xmm0_5 = *(esi_2 + (eax_15 << 3) + 0x24a010) * 5f
                    
                    bool cond:1_1 = *(ecx_1 + 0x5e20698) != 0x28
                    float xmm4_1 = (zx.o(0)).d
                    float xmm2_1 = _mm_min_ss(0x4326aaab, xmm0_5)
                    float var_30_1 = 0f
                    float var_1c = xmm2_1
                    
                    if (not(cond:1_1) && *(ecx_1 + 0x5e2069c) == 0xffffffff
                            && *(esi_2 + 0x24a008) - 1 s> 0)
                        int32_t j = 0
                        int32_t* edi_1 = esi_2 + 0x249f10
                        var_40 = xmm1_5
                        float var_38_1 = xmm1_5 + 3f
                        
                        do
                            float xmm0_12 = sub_44eb40(*esi_2, *(esi_2 + 4), edi_1[2], edi_1[3]) * 5f
                            float xmm1_7 = _mm_min_ss(var_1c, xmm0_12)
                            float var_3c_1 = var_18 - xmm1_7
                            float var_34_1 = var_18 - var_30_1
                            sub_47d680(&var_40, edi_1)
                            j += 1
                            xmm4_1 = xmm1_7
                            edi_1 = &edi_1[4]
                            var_30_1 = xmm4_1
                        while (j s< *(esi_2 + 0x24a008) - 1)
                        
                        ecx_1 = data_ce189c
                        xmm2_1 = var_1c
                        i = i_1
                    
                    var_1c = -7.99999952f
                    
                    if (*(ecx_1 + 0x5e20698) == i)
                        var_1c = -3.44317603f
                    
                    float var_50 = var_24_1
                    float var_4c_1 = var_18 - xmm2_1
                    float var_48_1 = var_24_1 + 3f
                    float var_44_1 = var_18 - xmm4_1
                    result = sub_47d680(&var_50, &var_1c)
                else
                    if (data_e49a48 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                        __Init_thread_header(&data_e49a48)
                        
                        if (data_e49a48 == 0xffffffff)
                            int32_t var_8_1 = 0
                            data_e49a4c = sub_48d5b0("sys/DebugFont.font", 0x12)
                            int32_t var_8_2 = 0xffffffff
                            __Init_thread_footer(&data_e49a48)
                        
                        xmm1_5 = var_24_1
                    
                    int32_t var_74 = 0x3f800000
                    int32_t var_68_1 = 0
                    int32_t var_5c_1 = 0
                    int32_t var_70_1 = 0
                    int32_t var_64_1 = 0x3f800000
                    int32_t var_58_1 = 0
                    float var_6c_1 = xmm1_5
                    float var_60_1 = var_18 - 2f
                    int32_t var_54_1 = 0x3f800000
                    void var_98
                    void* var_b4_1 = &var_98
                    result = sub_4aded0(sub_412bf0(&var_74, &data_57251c, &var_98, &var_74), &var_98, 
                        "Overflow", data_e49a4c, 0xffffffff, 0xffffffff, 7)
                
                ecx_1 = data_ce189c
        
        i += 1
        i_1 = i
    while (i s< 0x28)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
