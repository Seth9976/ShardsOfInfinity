// 函数名称: sub_4aca30
// 虚拟地址: 0x4aca30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4aca30()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_54463c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t __saved_ebp
    (*(*data_ce19b4 + 0x94))(__security_cookie ^ &__saved_ebp)
    void* eax_4 = data_ce19c4
    *(eax_4 + 0x248) = 0
    *(eax_4 + 0xec) = 1
    *(eax_4 + 0xf0) = 1
    sub_4ac970(1)
    void* eax_5 = data_cdf428
    
    if (eax_5 == 0)
        sub_44e4d0(eax_5, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    float var_40
    
    if ((*(eax_5 + 0x1c) & 0x200) == 0)
        if (data_ce19bd == 0 || data_ce1a30 == 0 || data_ce1a6c == 0)
            void* eax_17 = data_65ae00
            
            if (*(eax_17 + 0x2a) == 0)
                if (*(eax_17 + 0x27) != 0)
                    void* eax_19 = data_ce19c4
                    *(eax_19 + 4) = *(eax_19 + 0x34)
                    *(eax_19 + 0x14) = *(eax_19 + 0x44)
                    *(eax_19 + 0x24) = *(eax_19 + 0x54)
                
                (*(*data_ce19b4 + 0x8c))(data_65ae40)
                sub_4572e0()
                sub_45a7f0(2)
            else
                sub_4bd1a0(1)
                int32_t* ecx_7 = data_65ae00
                data_cdf3fc = 2
                (*(*ecx_7 + 0x30))()
        else
            (*(*data_ce19b4 + 0x8c))(data_65ae40)
            float xmm4_4 = (data_ce1a28 f- data_ce1a18) * 0.5f f+ data_ce1a18
            float xmm5_4 = (data_ce1a20 f- data_ce1a10) * 0.5f f+ data_ce1a10
            float xmm6_4 = (data_ce1a24 f- data_ce1a14) * 0.5f f+ data_ce1a14
            float xmm7_4 = (data_ce1a1c f- data_ce1a0c) * 0.5f f+ data_ce1a0c
            float xmm0_14 = (xmm4_4 + xmm5_4) * 0.5f
            float xmm2_3 = (xmm6_4 + xmm7_4) * 0.5f
            float xmm5_7 = (xmm5_4 - xmm0_14) * 0.800000012f + xmm0_14
            float xmm4_7 = (xmm4_4 - xmm0_14) * 0.800000012f + xmm0_14
            float xmm2_4[0x4] = data_65ae10
            float var_48 = (xmm7_4 - xmm2_3) * 0.800000012f + xmm2_3
            var_40 = (xmm6_4 - xmm2_3) * 0.800000012f + xmm2_3
            float xmm1_5 = (xmm5_7 + xmm4_7) * 0.5f
            int64_t var_38_1 = _mm_unpacklo_ps(xmm2_4, data_65ae14)
            float var_44_1 = (xmm5_7 - xmm1_5) * 0.600000024f + xmm1_5
            float var_3c_1 = (xmm4_7 - xmm1_5) * 0.600000024f + xmm1_5
            var_48.o = var_48.o
            sub_456ed0(&var_48)
            sub_45a7f0(2)
        
        sub_4ac820()
    else
        (*(*data_ce19b4 + 0x8c))(0xff000000)
        
        if (data_e49c70 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_e49c70)
            
            if (data_e49c70 == 0xffffffff)
                int32_t var_14_1 = 0
                data_e49c74 = sub_48d5b0("sys/sprite_opaque.material", 5)
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer(&data_e49c70)
        
        int32_t eax_10 = data_ce19c0
        
        if (eax_10 != 3 && eax_10 == 5)
            var_40.o = data_59e460
            
            if (data_ce19b8 == 1)
                var_40.o = data_59dd10
            
            int32_t eax_11 = data_ce19ec
            int32_t* ecx_3 = *((eax_11 << 2) + &data_ce19d4)
            float var_30
            
            if (ecx_3 != 0)
                void* eax_12 = data_65ae00
                int32_t var_50_1 = data_e49c74
                var_30 = 0f
                int32_t var_2c_1 = 0
                float var_28_1 = _mm_cvtepi32_ps(zx.o(*(eax_12 + 0x14))) * 0.5f
                int32_t var_24_1 = _mm_cvtepi32_ps(zx.o(*(eax_12 + 0x18)))
                sub_47d1f0(&var_40, &var_30, ecx_3, &var_40, &data_5c77bc, var_50_1)
                eax_11 = data_ce19ec
            
            int32_t* ecx_4 = *((eax_11 << 2) + &data_ce19d8)
            
            if (ecx_4 != 0)
                void* eax_14 = data_65ae00
                int32_t var_50_2 = data_e49c74
                int32_t var_2c_2 = 0
                float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(eax_14 + 0x14)))
                float var_28_2 = xmm1_2
                var_30 = xmm1_2 * 0.5f
                int32_t var_24_2 = _mm_cvtepi32_ps(zx.o(*(eax_14 + 0x18)))
                sub_47d1f0(&var_40, &var_30, ecx_4, &var_40, &data_5c77bc, var_50_2)
    sub_4bd1a0(0)
    (*(*data_ce19b4 + 0x98))()
    int32_t result = (*(*data_ce19b4 + 0x9c))(1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
