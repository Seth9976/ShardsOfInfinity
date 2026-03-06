// 函数名称: sub_4b2240
// 虚拟地址: 0x4b2240
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4b2240(int32_t arg1, void* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??$raise_error@Vrounding_error@math@boost@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_5
    uint128_t xmm0
    int128_t xmm1
    
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        xmm0 = *(arg3 + 8)
        eax_5 = *(arg3 + 0x28)
        xmm1 = *(arg3 + 0x18)
    else
        xmm0 = *(arg2 + 0x484)
        eax_5 = *(arg2 + 0x4a4)
        xmm1 = *(arg2 + 0x494)
    
    int32_t var_38 = eax_5
    uint128_t var_74 = xmm0
    uint128_t var_58 = xmm0
    int128_t var_24
    int128_t var_90 = *sub_4b3c80(&var_24, arg2, &var_58:0xc, &var_24)
    uint128_t xmm0_3 = var_74
    int128_t var_84
    var_84:4.q = xmm0_3
    var_84:0xc.d = _mm_bsrli_si128(xmm0_3, 8)
    float var_34[0x4] = xmm1:8.d.o
    var_24 = var_84
    sub_4a0490(arg2 + 0x3c, &var_34, &var_58:4, arg2 + 0x3c)
    float xmm0_7[0x4] = var_58
    int32_t eax_9 = *(arg3 + 0x98)
    var_34 = xmm0_7
    var_24 = xmm1
    
    if (eax_9 u> 3)
        sub_44e4d0(eax_9, &data_5559b1, "Halt", "c:\ax2017\engine\fabdef.cpp", 0x539, "FabLightDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int64_t var_64
    int32_t* result
    
    switch (eax_9)
        case 0
            sub_44e4d0(eax_9, &data_5559b1, "Halt", "c:\ax2017\engine\fabdef.cpp", 0x536, 
                "FabLightDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        case 1
            int32_t ecx_8 = *arg4
            
            if (ecx_8 s< 4)
                float xmm4_2 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xaa)
                float xmm3_2 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xff)
                float xmm2_2 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0x55)
                float xmm5_3 = xmm4_2 * xmm2_2 - xmm3_2 f* xmm1
                float xmm3_4 = xmm3_2 * xmm4_2 + xmm1.d * xmm2_2
                var_64 = _mm_unpacklo_ps(xmm5_3 + xmm5_3, 
                    xmm4_2 * xmm4_2 - xmm3_2 * xmm3_2 + xmm1.d f* xmm1 - xmm2_2 * xmm2_2)
                var_84:0xc.d = xmm3_4 + xmm3_4
                int32_t var_5c_2 = var_84:0xc.d
                *arg4 = ecx_8 + 1
                sub_456cf0(ecx_8 + 1, arg3 + 0x9c, &var_64, ecx_8)
            
            result = data_65ae00
            
            if (*(result + 0x39) != 0)
                sub_47dd70(&var_34)
                int32_t var_60_2 = 0x3f000000
                int32_t var_5c_3 = 0x3f000000
                *(data_ce19c4 + 0x258) = 0
                uint128_t xmm0_20 = *sub_45c380(&var_24, &var_64:4, &data_571d90, &var_24)
                void* ThreadLocalStoragePointer_1 = fsbase->ThreadLocalStoragePointer
                var_74 = xmm0_20
                void* esi_1 = *ThreadLocalStoragePointer_1
                int32_t eax_21 = data_e49ca0
                
                if (eax_21 s> *(esi_1 + 4))
                    eax_21 = __Init_thread_header(&data_e49ca0)
                    
                    if (data_e49ca0 == 0xffffffff)
                        int32_t var_8_3 = 1
                        data_e49ca4 = sub_48d5b0("sys/editor/light.texture", 3)
                        int32_t var_8_4 = 0xffffffff
                        eax_21 = __Init_thread_footer(&data_e49ca0)
                
                sub_47d1f0(eax_21, &var_74, data_e49ca4, &data_571d08, &data_5c77bc, 0)
                void* eax_23 = data_ce19c4
                __builtin_memcpy(eax_23 + 0xa0, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x
                        00", 
                    0x41)
                *(eax_23 + 0x258) = 0
                sub_45ae60()
                int32_t eax_24 = data_e49ca8
                
                if (eax_24 s> *(esi_1 + 4))
                    eax_24 = __Init_thread_header(&data_e49ca8)
                    
                    if (data_e49ca8 == 0xffffffff)
                        int32_t var_8_5 = 2
                        data_e49cac = sub_48d5b0("sys/editor/arrow_widget.structure", 2)
                        int32_t var_8_6 = 0xffffffff
                        eax_24 = __Init_thread_footer(&data_e49ca8)
                
                var_74 = data_59e450
                sub_456bf0(&var_74)
                float xmm0_22[0x4] = var_58
                int32_t* ecx_13 = data_e49cac
                var_34 = xmm0_22
                var_24 = xmm1
                var_34[0] = fconvert.s(fconvert.d(xmm0_22) * 0.5)
                result = sub_459d40(eax_24, &var_34, ecx_13, 0, 0, 0)
                sub_456bf0(&data_571934)
            
            goto label_4b2470
        case 2
            sub_44e4d0(eax_9, &data_5559b1, "Halt", "c:\ax2017\engine\fabdef.cpp", 0x533, 
                "FabLightDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        case 3
            data_65b288.d = *(arg3 + 0xac)
            result = data_65ae00
            data_65b288:4.o = *(arg3 + 0x9c)
            
            if (*(result + 0x39) != 0)
                sub_47dd70(&var_34)
                int32_t var_60_1 = 0x3f000000
                int32_t var_5c_1 = 0x3f000000
                *(data_ce19c4 + 0x258) = 0
                uint128_t xmm0_9 = *sub_45c380(&var_24, &var_64:4, &data_571d90, &var_24)
                void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                var_74 = xmm0_9
                int32_t eax_14 = data_e49c98
                
                if (eax_14 s> *(*ThreadLocalStoragePointer + 4))
                    eax_14 = __Init_thread_header(&data_e49c98)
                    
                    if (data_e49c98 == 0xffffffff)
                        int32_t var_8_1 = 0
                        data_e49c9c = sub_48d5b0("sys/editor/env_probe.texture", 3)
                        int32_t var_8_2 = 0xffffffff
                        eax_14 = __Init_thread_footer(&data_e49c98)
                
                sub_47d1f0(eax_14, &var_74, data_e49c9c, &data_571d08, &data_5c77bc, 0)
                result = data_ce19c4
                __builtin_memcpy(&result[0x28], 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x
                        00", 
                    0x41)
                result[0x96] = 0
                sub_45ae60()
            
        label_4b2470:
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
}
