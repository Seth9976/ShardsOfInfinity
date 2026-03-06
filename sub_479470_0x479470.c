// 函数名称: sub_479470
// 虚拟地址: 0x479470
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_479470(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_542dc9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_28 = nullptr
    
    if (*(arg1 + 0x69c) == 2 && *(*(arg1 + 0x63c) * 0x208 + arg1 + 0x1a4) != 0)
        sub_44f240(&var_28, "btn_scroll_up")
        char* eax_4 = var_28
        char* const ecx_1 = &data_5559b1
        char* edx = arg2[1]
        
        if (eax_4 != 0)
            ecx_1 = eax_4
        
        float var_30
        
        while (true)
            eax_4.b = *edx
            char temp0_1 = *ecx_1
            bool c_1 = eax_4.b u< temp0_1
            bool z_1 = eax_4.b == temp0_1
            char var_21_1 = eax_4.b
            eax_4 = var_28
            
            if (z_1)
                if (var_21_1 == 0)
                    var_30 = 0f
                    break
                
                eax_4.b = edx[1]
                char temp1_1 = ecx_1[1]
                c_1 = eax_4.b u< temp1_1
                bool z_2 = eax_4.b == temp1_1
                char var_21_2 = eax_4.b
                eax_4 = var_28
                
                if (z_2)
                    edx = &edx[2]
                    ecx_1 = &ecx_1[2]
                    
                    if (var_21_2 != 0)
                        continue
                    
                    var_30 = 0f
                    break
            
            var_30 = sbb.d(ecx_1, ecx_1, c_1) | 1
            break
        
        int32_t var_14_1 = 0
        
        if (data_cdf414 != 0 && eax_4 != 0 && *eax_4 != 0)
            char* eax_5 = sub_44f000(&var_28)
            int32_t temp2_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
                var_28 = &data_5559b1
        
        int32_t var_14_2 = 0xffffffff
        float var_3c
        
        if (var_30 == 0)
            void* eax_6 = sub_462970(arg1, 0)
            var_3c = 0f
            int32_t var_38_1 = (*(eax_6 + 0x6d8) f- *(eax_6 + 0x6d0)) ^ (data_59e5c0.o).d
            int32_t eax_7 = sub_479350(arg1, &var_3c)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
        
        sub_44f240(&var_28, "btn_scroll_down")
        char* eax_8 = sub_44f4d0(arg2[1], &var_28)
        char var_21_3 = eax_8.b
        int32_t var_14_3 = 1
        
        if (data_cdf414 != 0)
            char* const ecx_12 = var_28
            
            if (ecx_12 != 0 && *ecx_12 != 0)
                eax_8 = sub_44f000(&var_28)
                int32_t temp3_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_28 = &data_5559b1
                
                eax_8.b = var_21_3
        
        int32_t var_14_4 = 0xffffffff
        
        if (eax_8.b != 0)
            void* eax_9 = sub_462970(arg1, 0)
            var_3c = 0f
            float var_38_2 = *(eax_9 + 0x6d8) f- *(eax_9 + 0x6d0)
            int32_t eax_10 = sub_479350(arg1, &var_3c)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_10
        
        sub_44f240(&var_28, "btn_scroll_channel_top")
        char* eax_11 = sub_44f4d0(arg2[1], &var_28)
        char var_21_4 = eax_11.b
        int32_t var_14_5 = 2
        
        if (data_cdf414 != 0)
            char* const ecx_21 = var_28
            
            if (ecx_21 != 0 && *ecx_21 != 0)
                eax_11 = sub_44f000(&var_28)
                int32_t temp4_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                    var_28 = &data_5559b1
                
                eax_11.b = var_21_4
        
        int32_t var_14_6 = 0xffffffff
        
        if (eax_11.b != 0)
            float xmm1_6 = *(arg1 + 0x6d8) f- *(arg1 + 0x6d0)
            var_3c = 0f
            int32_t var_38_3 = xmm1_6 ^ (data_59e5c0.o).d
            int32_t eax_12 = sub_479350(arg1, &var_3c)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_12
        
        sub_44f240(&var_28, "btn_scroll_channel_bottom")
        char* eax_13 = sub_44f4d0(arg2[1], &var_28)
        char var_21_5 = eax_13.b
        int32_t var_14_7 = 3
        
        if (data_cdf414 != 0)
            char* const ecx_29 = var_28
            
            if (ecx_29 != 0 && *ecx_29 != 0)
                eax_13 = sub_44f000(&var_28)
                int32_t temp5_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                    var_28 = &data_5559b1
                
                eax_13.b = var_21_5
        
        int32_t var_14_8 = 0xffffffff
        
        if (eax_13.b != 0)
            float xmm1_9 = *(arg1 + 0x6d8) f- *(arg1 + 0x6d0)
            var_3c = 0f
            float var_38_4 = xmm1_9
            int32_t eax_14 = sub_479350(arg1, &var_3c)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14
        
        sub_44f240(&var_30, "btn_scroll_nub")
        int32_t var_14_9 = 4
        var_28 = 1
        int32_t edi_1 = 1
        char* var_38_5 = 1
        char eax_15 = sub_44f4d0(arg2[1], &var_30)
        char* const var_2c
        char eax_17
        
        if (eax_15 == 0)
            sub_44f240(&var_2c, "btn_scroll")
            var_38_5 = 3
            edi_1 = 3
            eax_17 = sub_44f4d0(arg2[1], &var_2c)
        
        char var_21_6
        char* eax_18
        
        if (eax_15 != 0 || eax_17 != 0)
            eax_18 = var_38_5
            var_21_6 = 1
        else
            var_21_6 = eax_17
            eax_18 = 3
        
        if ((eax_18.b & 2) != 0)
            var_28 = edi_1 & 0xfffffffd
            int32_t var_14_10 = 5
            
            if (data_cdf414 != 0)
                eax_18 = var_2c
                
                if (eax_18 != 0 && *eax_18 != 0)
                    eax_18 = sub_44f000(&var_2c)
                    int32_t temp7_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        eax_18 = sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                        var_2c = &data_5559b1
        
        int32_t var_14_11 = 6
        
        if (data_cdf414 != 0)
            eax_18 = var_30
            
            if (eax_18 != 0 && *eax_18 != 0)
                eax_18 = sub_44f000(&var_30)
                int32_t temp6_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp6_1 == 1)
                    eax_18 = sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                    var_30 = &data_5559b1
        
        int32_t var_14_12 = 0xffffffff
        
        if (var_21_6 != 0)
            int32_t ecx_45 = *arg2
            
            if (ecx_45 == 0)
                sub_44e4d0(eax_18, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 
                    0x6c, "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            uint32_t edx_22 = zx.d(ecx_45.w)
            
            if (edx_22 u< data_5c99a4)
                eax_18 = *(edx_22 * 0x1008 + data_5c99a0 + 0x1004)
                
                if (eax_18 == ecx_45)
                    int32_t eax_21 = arg2[3]
                    void* ecx_47 = edx_22 * 0x1008 + data_5c99a0
                    
                    if (eax_21 != 4)
                        if (eax_21 == 3)
                            *(ecx_47 + 0x660) = 0
                            data_5c99dc = 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_21
                        
                        data_5c99dc = eax_18
                        *(ecx_47 + 0x660) = 1
                        *(ecx_47 + 0x658) = arg2[4]
                        int32_t eax_29 = arg2[5]
                        *(ecx_47 + 0x65c) = eax_29
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_29
                    
                    var_30 = arg2[4] f- *(ecx_47 + 0x658)
                    var_2c = arg2[5] f- *(ecx_47 + 0x65c)
                    float xmm0_4[0x4] = *(arg1 + 0x6cc)
                    float xmm1_11 = _mm_shuffle_ps(xmm0_4, xmm0_4, 0xff)
                    float xmm0_5 = _mm_shuffle_ps(xmm0_4, xmm0_4, 0x55)
                    float xmm1_12 = xmm1_11 - xmm0_5
                    void* eax_22 = sub_4627e0(arg1, 0)
                    void* ecx_49 = ecx_47
                    float xmm4 = (zx.o(0)).d
                    float xmm1_14 = *(ecx_49 + 0x6d4) f- *(ecx_49 + 0x6cc)
                    float xmm5_2 = (*(eax_22 + 0x6d8) f- *(eax_22 + 0x6d0))
                        * _mm_cvtepi32_ps(zx.o(*(*(arg1 + 0x63c) * 0x208 + arg1 + 0x180)))
                    float xmm3_2 = xmm1_11 - xmm1_14 - (xmm1_14 + xmm0_5)
                    float xmm5_3 = xmm5_2 - xmm1_12
                    float xmm1_16 = _mm_max_ss(xmm1_14, xmm1_12 / xmm5_2 * xmm3_2) * 0.5f
                    float xmm0_14 = xmm1_16 + 0f
                    float xmm6_3 = (xmm1_16 + 1f - xmm0_14) / (xmm3_2 - xmm1_16 - xmm0_14)
                    
                    if (not(0 f>= xmm6_3))
                        if (xmm6_3 < 1f)
                            ecx_49 = ecx_47
                            xmm4 = sub_4145f0(1, xmm6_3, (zx.o(0)).d, xmm5_3)
                        else
                            xmm4 = xmm5_3
                    
                    char* const xmm1_18 = var_2c
                    float xmm0_18 = var_30 * xmm4
                    *(ecx_49 + 0x658) = arg2[4]
                    *(ecx_49 + 0x65c) = arg2[5]
                    var_3c = xmm0_18
                    float var_38_7 = xmm1_18 f* xmm4
                    int32_t eax_26 = sub_479350(arg1, &var_3c)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_26
            
            sub_44e4d0(eax_18, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    int32_t eax_31 = *(arg1 + 0xffc)
    
    if (eax_31 != 0)
        eax_31 = eax_31(arg2, eax_2)
    else if (*(arg1 + 0x784) != 0)
        int32_t eax_30 = sub_479470(eax_2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_30
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_31
}
