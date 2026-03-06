// 函数名称: sub_4c4a10
// 虚拟地址: 0x4c4a10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4c4a10(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543828
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const i_2
    char* const i_1 = i_2
    
    if (i_1 != 8 && i_1 s>= 0)
        sub_4c4770(arg1)
        result = arg1[0x12]
        bool cond:0_1 = result != 0
        
        if (result s<= 0)
            goto label_4c4a8d
        
        char* i_7 = *arg1
        char* const i_5 = &data_5559b1
        
        if (i_7 != 0)
            i_5 = i_7
        
        int32_t esi_1 = 0
        i_2 = i_5
        
        if (sub_4afed0(&i_2) != 0)
            uint32_t i
            
            do
                esi_1 += 1
                i = sub_4afed0(&i_2)
            while (i != 0)
        
        result = arg1[0x12]
        
        if (esi_1 s< result)
            goto label_4c4a93
        
        cond:0_1 = result != 0
    label_4c4a8d:
        
        if (not(cond:0_1))
        label_4c4a93:
            i_2 = &data_5559b1
            int32_t var_8_1 = 0
            char* const ecx_2 = &data_5559b1
            char* eax_4 = *arg1
            
            if (eax_4 != 0)
                ecx_2 = eax_4
            
            sub_44f690(&i_2, ecx_2, arg1[1])
            int32_t* result_2
            
            if (i_1 s< 0x80)
                result_2 = 1
            else if (i_1 s>= 0x800)
                void* const ecx_4
                ecx_4.b = i_1 s>= 0x10000
                result_2 = ecx_4 + 3
            else
                result_2 = 2
            
            char* const i_3 = i_2
            int32_t* result_1 = result_2
            void* const var_18
            int32_t* result_3
            
            if (i_3 == 0 || *i_3 == 0)
                sub_44f060(&i_2, result_2)
                result_3 = result_1
                var_18 = nullptr
            else
                char* eax_5 = sub_44f000(&i_2)
                result_3 = result_1
                void* eax_6 = *(eax_5 + 8)
                var_18 = eax_6
                sub_44f100(eax_6, eax_6 + result_3, &i_2, 1)
            
            char* const i_4 = i_2
            void* edx_4 = var_18 + i_4
            
            if (i_1 u< 0x80)
                *edx_4 = i_1.b
            else if (i_1 u< 0x800)
                *edx_4 = (i_1 u>> 6).b | 0xc0
                *(edx_4 + 1) = (i_1.b & 0x3f) | 0x80
            else if (i_1 u>= 0x10000)
                *edx_4 = (i_1 u>> 0x12).b | 0xf0
                *(edx_4 + 1) = ((i_1 u>> 0xc).b & 0x3f) | 0x80
                *(edx_4 + 2) = ((i_1 u>> 6).b & 0x3f) | 0x80
                *(edx_4 + 3) = (i_1.b & 0x3f) | 0x80
            else
                *edx_4 = (i_1 u>> 0xc).b | 0xe0
                *(edx_4 + 1) = ((i_1 u>> 6).b & 0x3f) | 0x80
                *(edx_4 + 2) = (i_1.b & 0x3f) | 0x80
            
            *(var_18 + result_3 + i_4) = 0
            char* eax_7 = *arg1
            int32_t edx_5
            
            if (eax_7 == 0 || *eax_7 == 0)
                edx_5 = 0
            else
                edx_5 = *(sub_44f000(arg1) + 8)
                eax_7 = *arg1
            
            char* ecx_21 = &data_5559b1
            
            if (eax_7 != 0)
                ecx_21 = eax_7
            
            void* eax_9 = arg1[1]
            sub_44f690(&i_2, eax_9 + ecx_21, edx_5 - eax_9)
            float xmm0_1 = arg1[0x13]
            char* const i_6 = i_2
            xmm0_1 f- 0
            int32_t eax_11
            eax_11:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            int32_t xmm0_2
            
            if (p_2)
                char* const i_8 = &data_5559b1
                
                if (i_6 != 0)
                    i_8 = i_6
                
                result, xmm0_2 = sub_4ae2c0(arg1[0xc], i_8)
            
            if (not(p_2) || not(arg1[0x13] f<= xmm0_2))
                void** var_2c_3 = &var_18
                sub_42ce10(&result_1, arg1[0xc], 0x12)
                void* const eax_12 = var_18
                
                if (i_1 s< 0x80)
                    result = result_1
                    
                    if (*(eax_12 + (i_1 << 2) + 0x30) != 0xffffffff)
                        goto label_4c4cd5
                    
                    goto label_4c4c75
                
                int32_t* eax_14 = *(*(eax_12 + 0x24) + (((i_1 s>> 4 | i_1) & *(eax_12 + 0x28)) << 2))
                
                if (eax_14 == 0)
                label_4c4c72:
                    result = result_1
                label_4c4c75:
                    
                    if (result != 0)
                        result[7] -= 1
                else
                    while (i_1 != *eax_14)
                        eax_14 = eax_14[2]
                        
                        if (eax_14 == 0)
                            goto label_4c4c72
                    
                    if (eax_14 == 0xfffffffc)
                        goto label_4c4c72
                    
                    result = result_1
                label_4c4cd5:
                    
                    if (result != 0)
                        result[7] -= 1
                    
                    sub_44f510(arg1, &i_2)
                    result = sub_4c4d30(arg1, arg1[1])
                    arg1[1] = result
                    arg1[3] = result
            
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0 && i_6 != 0 && *i_6 != 0)
                result = sub_44f000(&i_2)
                int32_t temp3_1 = result[1]
                result[1] -= 1
                
                if (temp3_1 == 1)
                    result = sub_45d050(result, &result[3][2])
        
        arg1[2] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
