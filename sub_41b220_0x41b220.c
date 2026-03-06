// 函数名称: sub_41b220
// 虚拟地址: 0x41b220
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_41b220()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    float xmm0_1 = data_e46ee4 f+ data_5b0f3c
    data_dff720 = 0
    data_e46ee0 = 1
    data_e46ee4 = xmm0_1
    HWND eax_2 = GetFocus()
    int32_t var_20
    
    if (data_ce1790 == eax_2)
        void* ecx_1 = data_cdf450
        void* eax_7 = data_65ae04
        
        if (data_ce1488 s<= 0 && ((*(ecx_1 + 0xc) & 1) == 0 || *(eax_7 + 0x18) == 0))
            data_e46ee8.b = 0
        
        if ((*(ecx_1 + 0xc) & 2) == 0 || *(eax_7 + 0x18) == 0)
            data_e46ee8:1.b = 0
    else
        int32_t xmm1_2[0x4] = __paddd_xmmdq_memdq(data_59dfc0, data_59e130)
        data_e46ee8 = 0
        int32_t xmm0_3 = _mm_bsrli_si128(xmm1_2, 4)
        var_20 = 0
        int32_t var_1c_1 = 1
        *(xmm1_2 + &data_e46ee8) = 0
        int32_t xmm0_5 = _mm_bsrli_si128(xmm1_2, 8)
        int32_t xmm1_3 = _mm_bsrli_si128(xmm1_2, 0xc)
        *(xmm0_3 + &data_e46ee8) = 0
        *(xmm0_5 + &data_e46ee8) = 0
        *(xmm1_3 + &data_e46ee8) = 0
    
    float xmm1_5 = data_e46ee4 * 1000f
    float xmm1_6
    
    if (0 f<= xmm1_5)
        xmm1_6 = xmm1_5 + 0.5f
    else
        xmm1_6 = xmm1_5 - 0.5f
    
    int32_t result = int.d(xmm1_6)
    int32_t edi = data_e46ee0
    int32_t esi = 0
    int32_t result_1 = result
    
    if (edi != 0)
        int32_t* ebx_1 = &data_dff720
        int32_t* var_32c_1 = &data_dff720
        
        do
            struct InputHitResult::HitResult::VTable* var_394
            struct InputHitResult::HitResult::VTable** eax_8 = sub_4158d0(&var_394, ebx_1)
            struct InputHitResult::HitResult::VTable* const var_368 =
                &HitResult::`vftable'{for `InputHitResult'}
            int32_t var_364_1 = eax_8[1]
            int32_t var_360_1 = eax_8[2]
            struct InputHitResult::UI2HitResult::VTable* const var_35c_1 =
                &UI2HitResult::`vftable'{for `InputHitResult'}
            int32_t var_358_1 = eax_8[4]
            int32_t var_354_1 = eax_8[5]
            int32_t var_350_1 = eax_8[6]
            int32_t var_34c_1 = eax_8[7]
            int64_t var_348_1 = *(eax_8 + 0x20)
            int32_t var_340_1 = eax_8[0xa]
            void var_320
            int32_t eax_12 = sub_480e00(ebx_1, &var_320)
            int32_t var_330_1 = 0
            char const* const var_3ac_4
            int32_t var_3a8_5
            char const* const var_3a4_6
            void* var_334
            void* eax_13
            char* ecx_15
            
            if (eax_12 s> 0)
                void var_318
                void* ebx_2 = &var_318
                var_334 = &var_318
                int32_t eax_20
                
                do
                    void* ecx_8 = *(ebx_2 - 8)
                    eax_13 = nullptr
                    int16_t var_328_1 = 0
                    
                    if (ecx_8 s>= 0x1f)
                        if (ecx_8 - 0x1f s>= 7)
                            var_3a4_6 = "ButtonSourceIsDown"
                            var_3a8_5 = 0x15c
                            var_3ac_4 = "c:\ax2017\engine\controller.cpp"
                            ecx_15 = "idx < NUM_BUTTONSOURCES_HANDED"
                            goto label_41b656
                        
                        if (ecx_8 - 0x1f s< 0)
                            var_3a4_6 = "ButtonSourceIsDown"
                            var_3a8_5 = 0x15d
                            var_3ac_4 = "c:\ax2017\engine\controller.cpp"
                            ecx_15 = "idx >= 0"
                            goto label_41b656
                        
                        if (*(ebx_2 - 4) != 0)
                            ebx_2.b = *(ecx_8 + 0xe46f0e)
                            var_328_1.b = ebx_2.b
                        else
                            ebx_2.b = *(ecx_8 + 0xe46f07)
                            var_328_1.b = ebx_2.b
                        
                        goto label_41b494
                    
                    if (ecx_8 s< 0)
                        var_3a4_6 = "ButtonSourceIsDown"
                        var_3a8_5 = 0x16a
                        var_3ac_4 = "c:\ax2017\engine\controller.cpp"
                        ecx_15 = "source >= 0"
                    label_41b656:
                        sub_44e4d0(eax_13, &data_5559b1, ecx_15, var_3ac_4, var_3a8_5, var_3a4_6)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    ebx_2.b = *(ecx_8 + &data_e46ee8)
                    var_328_1.b = ebx_2.b
                    
                    if (ecx_8 == 0 || ecx_8 == 1)
                        ecx_8.b = *(ecx_8 + &data_e46f07)
                        char edx_3 = var_328_1:1.b
                        
                        if (ecx_8.b != 0)
                            edx_3 = ecx_8.b
                        
                        var_328_1:1.b = edx_3
                    
                label_41b494:
                    void* ebx_3 = var_334
                    uint32_t eax_18 = var_328_1.d u>> 8
                    sub_48cd30(eax_18, ebx_2.b, *ebx_3, eax_18.b, result_1, &var_368, 
                        &var_32c_1[0x23b9], &var_32c_1[0x23bb])
                    ebx_2 = ebx_3 + 0xc
                    eax_20 = var_330_1 + 1
                    var_334 = ebx_2
                    var_330_1 = eax_20
                while (eax_20 s< eax_12)
                ebx_1 = var_32c_1
            
            __builtin_memcpy(&var_20, 
                "\x05\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x02\x00\x"
            "00\x00", 
                0x18)
            char var_321 = 0
            result = sub_416470(ebx_1, &var_368, &var_321)
            
            if (var_321 == 0)
                int32_t* i = &var_20
                
                do
                    char* eax_21 = *i
                    var_334 = nullptr
                    
                    if (sub_481790(eax_21, eax_21, var_32c_1, &var_334) != 0)
                        eax_13 = var_334
                        
                        if (eax_13 != 0)
                            ebx_1 = var_32c_1
                            sub_416330(ebx_1, eax_13, eax_21)
                            goto label_41b5a9
                        
                        var_3a4_6 = "ControllersUpdate"
                        var_3a8_5 = 0x5d
                        var_3ac_4 = "c:\ax2017\engine\controller.h"
                        ecx_15 = "lastOver"
                        goto label_41b656
                    
                    i = &i[1]
                while (i != &var_8)
                
                ebx_1 = var_32c_1
            
        label_41b5a9:
            bool cond:1_1 = *ebx_1 != 0
            ebx_1[1] = result
            
            if (not(cond:1_1))
                int32_t ecx_12 = 1
                
                if (result == 2)
                    ecx_12 = 2
                
                result = sub_44eca0(ecx_12)
            
            esi += 1
            ebx_1 = &ebx_1[0x23be]
            var_32c_1 = ebx_1
        while (esi != edi)
    
    int32_t ecx_14 = var_8 ^ &__saved_ebp
    data_e46eea = 0
    data_e46f07 = 0
    @__security_check_cookie@4(ecx_14)
    return result
}
