// 函数名称: sub_4f6d40
// 虚拟地址: 0x4f6d40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4f6d40(int32_t arg1, int32_t* arg2, int32_t* arg3, float (* arg4)[0x4], int128_t arg5, int64_t arg6)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_546680
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_94 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edx = arg3
    int32_t* var_54 = edx
    *arg2 = 0
    int32_t result
    
    if (data_ce37a4 == 0)
        result = 1
    else
        int32_t eax_4 = data_d76c30
        
        if (eax_4 u> 5)
            sub_44e4d0(eax_4, &data_5559b1, "Halt", "c:\ax2017\engine\editor\fabeditor.cpp", 0x3aa, 
                "ComputeTransformStyle")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void var_78
        int32_t var_34
        int32_t result_1
        
        switch (eax_4)
            case 0, 1, 5
                result = 1
            case 2
                if (data_d63bf8 != 0xffffffff)
                    void* esi_2 = *fsbase->ThreadLocalStoragePointer
                    
                    if (data_e49d60 s> *(esi_2 + 4))
                        __Init_thread_header(&data_e49d60)
                        
                        if (data_e49d60 == 0xffffffff)
                            int32_t var_14_9 = 4
                            data_e49d64 = sub_48d5b0("sys/editor/translate.fab", 0x20)
                            int32_t var_14_10 = 0xffffffff
                            __Init_thread_footer(&data_e49d60)
                    
                    if (data_e49d68 s> *(esi_2 + 4))
                        __Init_thread_header(&data_e49d68)
                        
                        if (data_e49d68 == 0xffffffff)
                            int32_t var_14_11 = 5
                            data_e49d6c = sub_4b3810(data_e49d64, "RedArrow")
                            int32_t var_14_12 = 0xffffffff
                            __Init_thread_footer(&data_e49d68)
                    
                    if (data_e49d70 s> *(esi_2 + 4))
                        __Init_thread_header(&data_e49d70)
                        
                        if (data_e49d70 == 0xffffffff)
                            int32_t var_14_13 = 6
                            data_e49d74 = sub_4b3810(data_e49d64, "GreenArrow")
                            int32_t var_14_14 = 0xffffffff
                            __Init_thread_footer(&data_e49d70)
                    
                    if (data_e49d78 s> *(esi_2 + 4))
                        __Init_thread_header(&data_e49d78)
                        
                        if (data_e49d78 == 0xffffffff)
                            int32_t var_14_15 = 7
                            data_e49d7c = sub_4b3810(data_e49d64, "BlueArrow")
                            int32_t var_14_16 = 0xffffffff
                            __Init_thread_footer(&data_e49d78)
                    
                    if (data_d63bf8 == data_e49d6c)
                        *arg2 = 1
                    else if (data_d63bf8 == data_e49d74)
                        *arg2 = 2
                    else if (data_d63bf8 == data_e49d7c)
                        *arg2 = 3
                    
                    edx = var_54
                
                result_1 = 0
                int32_t i = 0
                int32_t result_3 = 0
                int32_t var_64_1 = 0x461c4000
                var_34 = 2
                int32_t var_30_2 = 3
                int32_t var_2c_2 = 4
                int32_t i_3 = 0
                
                do
                    int32_t result_5 = (&var_34)[i]
                    bool cond:1_1
                    
                    if (result_5 != 2)
                        if (result_5 == 3)
                            cond:1_1 = *arg2 == 1
                            goto label_4f72e0
                        
                        if (result_5 == 4)
                            cond:1_1 = *arg2 == 2
                            goto label_4f72e0
                        
                    label_4f72f4:
                        float xmm2_2[0x4] = *sub_4f6a60(&var_78, edx, result_5, &var_78)
                        float xmm3_6 = xmm2_2[0] f* arg5:0xc.d
                        float xmm4_4 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55)
                        float xmm5_4 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
                        float xmm3_8 = xmm3_6 + xmm4_4 f* arg6.d + xmm5_4 f* arg6:4.d
                        int32_t xmm0_27 = sub_41b760(xmm3_8)
                        float xmm1_11
                        
                        if (not(9.99999975e-06f f> xmm0_27))
                            xmm1_11 = xmm2_2[0] f* arg5.d + xmm4_4 f* arg5:4.d + xmm5_4 f* arg5:8.d
                                + _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
                        
                        int32_t xmm0_34
                        int32_t var_5c
                        
                        if (9.99999975e-06f f> xmm0_27 || 0 f< xmm1_11 * xmm3_8)
                            xmm0_34 = var_5c
                        else
                            xmm0_34 = (xmm1_11 / xmm3_8) ^ (data_59e5c0.o).d
                            var_5c = xmm0_34
                        
                        if (0 f> xmm0_34 || var_64_1 f<= xmm0_34)
                            result_1 = result_3
                        else
                            result_1 = result_5
                            var_64_1 = xmm0_34
                            result_3 = result_1
                            *arg4 = xmm2_2
                    else
                        cond:1_1 = *arg2 == 3
                    label_4f72e0:
                        
                        if (not(cond:1_1))
                            goto label_4f72f4
                    edx = var_54
                    i = i_3 + 1
                    i_3 = i
                while (i s< 3)
                
                result = result_1
            case 3
                if (data_d63bf8 == 0xffffffff)
                label_4f6fc9:
                    int32_t i_1 = 0
                    int32_t result_2 = 0
                    int32_t var_5c_1 = 0x461c4000
                    var_34 = 5
                    int32_t var_30_1 = 6
                    int32_t var_2c_1 = 7
                    
                    do
                        int32_t result_6 = (&var_34)[i_1]
                        float xmm2_1[0x4] = *sub_4f6a60(&var_78, edx, result_6, &var_78)
                        float xmm3_2 = xmm2_1[0] f* arg5:0xc.d
                        float xmm4_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
                        float xmm5_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
                        float xmm3_4 = xmm3_2 + xmm4_2 f* arg6.d + xmm5_2 f* arg6:4.d
                        int32_t xmm0_10 = sub_41b760(xmm3_4)
                        float xmm1_5
                        
                        if (not(9.99999975e-06f f> xmm0_10))
                            xmm1_5 = arg5.d f* xmm2_1 + arg5:4.d * xmm4_2 + arg5:8.d * xmm5_2
                                + _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
                        
                        int32_t xmm0_21
                        int32_t var_64
                        
                        if (9.99999975e-06f f> xmm0_10 || 0 f< xmm1_5 * xmm3_4)
                            xmm0_21 = var_64
                        else
                            xmm0_21 = (xmm1_5 / xmm3_4) ^ (data_59e5c0.o).d
                            var_64 = xmm0_21
                        
                        if (0 f> xmm0_21 || var_5c_1 f<= xmm0_21)
                            result_1 = result_2
                        else
                            result_1 = result_6
                            var_5c_1 = xmm0_21
                            result_2 = result_1
                            *arg4 = xmm2_1
                        
                        edx = var_54
                        i_1 += 1
                    while (i_1 s< 3)
                    
                    result = result_1
                else
                    void* esi_1 = *fsbase->ThreadLocalStoragePointer
                    
                    if (data_e49d40 s> *(esi_1 + 4))
                        __Init_thread_header(&data_e49d40)
                        
                        if (data_e49d40 == 0xffffffff)
                            int32_t var_14_1 = 0
                            data_e49d44 = sub_48d5b0("sys/editor/rotate_quarter.fab", 0x20)
                            int32_t var_14_2 = 0xffffffff
                            __Init_thread_footer(&data_e49d40)
                    
                    if (data_e49d48 s> *(esi_1 + 4))
                        __Init_thread_header(&data_e49d48)
                        
                        if (data_e49d48 == 0xffffffff)
                            int32_t var_14_3 = 1
                            data_e49d4c = sub_4b3810(data_e49d44, "RedRing")
                            int32_t var_14_4 = 0xffffffff
                            __Init_thread_footer(&data_e49d48)
                    
                    if (data_e49d50 s> *(esi_1 + 4))
                        __Init_thread_header(&data_e49d50)
                        
                        if (data_e49d50 == 0xffffffff)
                            int32_t var_14_5 = 2
                            data_e49d54 = sub_4b3810(data_e49d44, "GreenRing")
                            int32_t var_14_6 = 0xffffffff
                            __Init_thread_footer(&data_e49d50)
                    
                    if (data_e49d58 s> *(esi_1 + 4))
                        __Init_thread_header(&data_e49d58)
                        
                        if (data_e49d58 == 0xffffffff)
                            int32_t var_14_7 = 3
                            data_e49d5c = sub_4b3810(data_e49d44, "BlueRing")
                            int32_t var_14_8 = 0xffffffff
                            __Init_thread_footer(&data_e49d58)
                    
                    edx = var_54
                    void var_38
                    
                    if (data_d63bf8 == data_e49d4c)
                        result = 6
                        *arg4 = *sub_4f6a60(&var_38, edx, 6, &var_38)
                    else if (data_d63bf8 != data_e49d54)
                        if (data_d63bf8 != data_e49d5c)
                            goto label_4f6fc9
                        
                        result = 5
                        *arg4 = *sub_4f6a60(&var_38, edx, 5, &var_38)
                    else
                        result = 7
                        *arg4 = *sub_4f6a60(&var_38, edx, 7, &var_38)
            case 4
                int32_t i_2 = 0
                int32_t result_4 = 0
                int32_t var_5c_2 = 0x461c4000
                var_34 = 9
                int32_t var_30_3 = 0xa
                int32_t var_2c_3 = 0xb
                
                do
                    int32_t result_7 = (&var_34)[i_2]
                    void var_88
                    float xmm2_3[0x4] = *sub_4f6a60(&var_88, edx, result_7, &var_88)
                    float xmm3_10 = xmm2_3[0] f* arg5:0xc.d
                    float xmm4_7 = _mm_shuffle_ps(xmm2_3, xmm2_3, 0x55)
                    float xmm5_7 = _mm_shuffle_ps(xmm2_3, xmm2_3, 0xaa)
                    float xmm3_12 = xmm3_10 + xmm4_7 f* arg6.d + xmm5_7 f* arg6:4.d
                    int32_t xmm0_40 = sub_41b760(xmm3_12)
                    float xmm1_17
                    
                    if (not(9.99999975e-06f f> xmm0_40))
                        xmm1_17 = xmm2_3[0] f* arg5.d + xmm4_7 f* arg5:4.d + xmm5_7 f* arg5:8.d
                            + _mm_shuffle_ps(xmm2_3, xmm2_3, 0xff)
                    
                    int32_t xmm0_47
                    int32_t var_68
                    
                    if (9.99999975e-06f f> xmm0_40 || 0 f< xmm1_17 * xmm3_12)
                        xmm0_47 = var_68
                    else
                        xmm0_47 = (xmm1_17 / xmm3_12) ^ (data_59e5c0.o).d
                        var_68 = xmm0_47
                    
                    if (0 f> xmm0_47 || var_5c_2 f<= xmm0_47)
                        result_1 = result_4
                    else
                        result_1 = result_7
                        var_5c_2 = xmm0_47
                        result_4 = result_1
                        *arg4 = xmm2_3
                    
                    edx = var_54
                    i_2 += 1
                while (i_2 s< 3)
                
                result = result_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
