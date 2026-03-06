// 函数名称: ___std_fs_get_file_attributes_by_handle@8
// 虚拟地址: 0x417490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcall___std_fs_get_file_attributes_by_handle@8(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540fe0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_80 = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1
    
    if (data_5bb284 == 0x19)
        ebx_1 = data_5bb288
    label_4174e5:
        
        if (ebx_1 != 0)
            uint32_t ecx = zx.d(ebx_1.w)
            int32_t edx_1
            
            if (ecx u< data_5c99a4)
                edx_1 = data_5c99a0
                result = ecx * 0x1008
            
            if (ecx u>= data_5c99a4 || *(result + edx_1 + 0x1004) != ebx_1)
                sub_44e4d0(result, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                    "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            result = sub_4627e0(ecx * 0x1008 + edx_1, 0)
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
            int32_t esi_1 = 0
            
            if (result_1[0x1dd] s> 0)
                int32_t edi_1 = 0
                
                while (true)
                    if (edi_1 s< 0 || esi_1 s>= result_1[0x1dd])
                        sub_44e4d0(result, &data_5559b1, "index >= 0 && index < mSize", 
                            "c:\ax2017\engine\xarray.h", 0xb5, 
                            "XArray<struct UI2StateEffect>::operator []")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_44e680()
                            noreturn
                        
                        breakpoint
                    
                    int32_t* ecx_3 = result_1[0x1dc]
                    int32_t eax_3 = *(ecx_3 + edi_1)
                    
                    if (eax_3 == 0)
                        char* ecx_4 = *(ecx_3 + edi_1 + 4)
                        char const* const eax_5 = "notification"
                        
                        while (true)
                            char edx_2 = *ecx_4
                            char const temp3_1 = *eax_5
                            bool c_1 = edx_2 u< temp3_1
                            
                            if (edx_2 == temp3_1)
                                if (edx_2 == 0)
                                    result = nullptr
                                    break
                                
                                edx_2 = ecx_4[1]
                                char temp5_1 = eax_5[1]
                                c_1 = edx_2 u< temp5_1
                                
                                if (edx_2 == temp5_1)
                                    ecx_4 = &ecx_4[2]
                                    eax_5 = &eax_5[2]
                                    
                                    if (edx_2 != 0)
                                        continue
                                    
                                    result = nullptr
                                    break
                            
                            result = sbb.d(eax_5, eax_5, c_1) | 1
                            break
                        
                        if (result == 0)
                            goto label_417726
                    else
                        result = eax_3 - 1
                        
                        if (eax_3 != 1)
                            sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 
                                0x3816, "UI2IsStateEffectActive")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                    
                    esi_1 += 1
                    edi_1 += 0x18
                    
                    if (esi_1 s>= result_1[0x1dd])
                        break
                    
                    continue
            
            void var_60
            sub_4177e0(&var_60)
            int32_t var_8_1 = 0
            EnterCriticalSection(data_cdf440 + 0x268)
            void* ecx_6 = data_cdf440
            int32_t eax_9 = *(ecx_6 + 0x264)
            
            if (*(ecx_6 + 0x260) != eax_9)
                int32_t eax_11 = eax_9 & 0x80000007
                
                if (eax_11 s< 0)
                    eax_11 = ((eax_11 - 1) | 0xfffffff8) + 1
                
                sub_481b30(&var_60, eax_11 * 0x4c + ecx_6)
                void* eax_16 = data_cdf440
                *(eax_16 + 0x264) += 1
                LeaveCriticalSection(eax_16 + 0x268)
                char* const esi_2 = &data_5559b1
                char* const var_64 = &data_5559b1
                int32_t edi_2 = 0
                var_8_1.b = 1
                char* const ebx_2 = &data_5559b1
                int32_t var_6c_1 = 0
                int32_t var_18
                
                if (var_18 s<= 0)
                label_4176a0:
                    char* var_5c
                    char* edx_4 = var_5c
                    
                    if (edx_4 != 0)
                        ebx_2 = edx_4
                    
                    char* const var_84_7 = ebx_2
                    uint32_t eax_25
                    char ecx_10
                    eax_25, ecx_10 = sub_44e260("show! %s")
                    int32_t var_84_8 = 0
                    sub_47b200(eax_25, "notification", ebx_1, ecx_10)
                    sub_44f510(&data_5bbe88, &var_5c)
                    data_dfcec4
                    data_5bbe8c = var_6c_1
                    sub_482420()
                else
                    while (true)
                        int32_t var_58[0x8]
                        char* eax_18 = var_58[edi_2]
                        char* const ecx_8 = &data_5559b1
                        
                        if (eax_18 != 0)
                            ecx_8 = eax_18
                        
                        char const* const eax_19 = "tgg.gameDBID"
                        int32_t eax_21
                        
                        while (true)
                            char edx_3 = *ecx_8
                            char const temp2_1 = *eax_19
                            bool c_2 = edx_3 u< temp2_1
                            
                            if (edx_3 == temp2_1)
                                if (edx_3 == 0)
                                    eax_21 = 0
                                    break
                                
                                edx_3 = ecx_8[1]
                                char temp4_1 = eax_19[1]
                                c_2 = edx_3 u< temp4_1
                                
                                if (edx_3 == temp4_1)
                                    ecx_8 = &ecx_8[2]
                                    eax_19 = &eax_19[2]
                                    
                                    if (edx_3 != 0)
                                        continue
                                    
                                    eax_21 = 0
                                    break
                            
                            eax_21 = sbb.d(eax_19, eax_19, c_2) | 1
                            break
                        
                        if (eax_21 == 0)
                            break
                        
                        edi_2 += 1
                        
                        if (edi_2 s>= var_18)
                            goto label_4176a0
                    
                    void var_38
                    sub_44f510(&var_64, &var_38 + (edi_2 << 2))
                    esi_2 = var_64
                    char* const eax_23 = &data_5559b1
                    
                    if (esi_2 != 0)
                        eax_23 = esi_2
                    
                    var_6c_1 = __atoi64(eax_23)
                    
                    if (arg1 == 0)
                        goto label_4176a0
                
                var_8_1.b = 2
                
                if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                    char* eax_27 = sub_44f000(&var_64)
                    int32_t temp6_1 = *(eax_27 + 4)
                    *(eax_27 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_45d050(eax_27, *(eax_27 + 0xc) + 0x10)
            else
                LeaveCriticalSection(ecx_6 + 0x268)
            
            result = sub_417870(&var_60)
    else if (data_5bb290 == 0x19)
        ebx_1 = data_5bb294
        goto label_4174e5
    label_417726:
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
