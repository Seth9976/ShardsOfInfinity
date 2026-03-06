// 函数名称: sub_451300
// 虚拟地址: 0x451300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_451300(int128_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_542410
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD*** i = arg1[3].d
    int32_t ecx = 0
    
    if (i != 0)
        do
            result = *i
            i = i[1]
            ecx += result[0x3f7b]
        while (i != 0)
        
        if (ecx != 0)
            void* eax_3 = sub_44fea0(arg1 + 0x18, *(arg1 + 0x1c) + 1 + ecx)
            char* const result_1
            char* result_2
            
            while (*(arg1 + 0x38) != 0)
                int32_t* ecx_2 = arg1[3].d
                void* eax_4 = ecx_2[1]
                arg1[3].d = eax_4
                
                if (eax_4 == 0)
                    *(arg1 + 0x34) = 0
                else
                    *(eax_4 + 8) = 0
                
                char* result_3 = *ecx_2
                *(arg1 + 0x38) -= 1
                result_1 = result_3
                sub_45d050(ecx_2, 0xc)
                char* const result_4 = result_1
                result_2 = *(arg1 + 0x18) + *(arg1 + 0x1c)
                int32_t eax_8 = *(result_4 + 0xfdec) + *(arg1 + 0x1c)
                *(arg1 + 0x1c) = eax_8
                
                if (eax_8 s> arg1[2].d)
                    sub_44e4d0(eax_8, &data_5559b1, 
                        "loc.httpResponsePartial.dataLength <= loc.httpResponsePartial.allocatedLength", 
                        "c:\ax2017\engine\network.cpp", 0x3d6, "AppendHttpResponse")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* eax_9 = *(result_4 + 0xfdec)
                
                if (eax_9 s<= 0)
                    sub_44e4d0(eax_9, &data_5559b1, "netBuffer->mDataSize > 0", 
                        "c:\ax2017\engine\network.cpp", 0x3d8, "AppendHttpResponse")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                sub_51d5b0(result_2, *(result_4 + 0xfde8) + result_4, eax_9)
                void* ecx_3 = data_65acf4
                result_1 = result_1
                eax_3 = sub_429090(ecx_3 + 0x44, &result_1)
            
            char* ecx_5 = *(arg1 + 0x1c)
            
            if (ecx_5 s>= arg1[2].d)
                sub_44e4d0(eax_3, &data_5559b1, 
                    "loc.httpResponsePartial.dataLength < loc.httpResponsePartial.allocatedLength", 
                    "c:\ax2017\engine\network.cpp", 0x3df, "AppendHttpResponse")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t eax_13 = *(arg1 + 0x18)
            result_1 = &data_5559b1
            ecx_5[eax_13] = 0
            int32_t var_14_1 = 0
            result_2 = &data_5559b1
            var_14_1.b = 1
            int32_t var_2c
            result = sub_450e20(&result_1, &var_2c, arg1 + 0x18, &result_1, &result_2)
            int32_t edx_4 = arg1[2].d
            
            if (result.b != 0)
                if (edx_4 s> 0)
                    int32_t* ecx_14 = *(arg1 + 0x18)
                    
                    if (ecx_14 == 0)
                        sub_44e4d0(result, &data_5559b1, "buffer.dataPtr != NULL", 
                            "c:\ax2017\engine\network.cpp", 0x4b, "ResizableBufferFree")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    sub_45d050(ecx_14, edx_4)
                    *(arg1 + 0x18) = 0
                    arg1[2].d = 0
                    *(arg1 + 0x1c) = 0
                
                int32_t* eax_15 = sub_450150()
                int32_t* var_30 = eax_15
                eax_15[1] = 0xfa0
                *eax_15 = *(arg1 + 0x48)
                eax_15[0x1fa3] = var_2c
                eax_15[2] = 0
                *(eax_15 + 0x7e94) = *arg1
                sub_44f510(&eax_15[0x1fa4], &result_2)
                result = sub_429090(data_65acf4 + 0x38, &var_30)
                var_14_1.b = 4
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp0_1 = result[1]
                        result[1] -= 1
                        
                        if (temp0_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                
                int32_t var_14_3 = 5
            else
                if (edx_4 s> 0)
                    int32_t* ecx_7 = *(arg1 + 0x18)
                    
                    if (ecx_7 == 0)
                        sub_44e4d0(result, &data_5559b1, "buffer.dataPtr != NULL", 
                            "c:\ax2017\engine\network.cpp", 0x4b, "ResizableBufferFree")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    result = sub_45d050(ecx_7, edx_4)
                    *(arg1 + 0x18) = 0
                    arg1[2].d = 0
                    *(arg1 + 0x1c) = 0
                
                var_14_1.b = 2
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp1_1 = result[1]
                        result[1] -= 1
                        
                        if (temp1_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                
                int32_t var_14_2 = 3
            
            if (data_cdf414 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_1)
                    int32_t temp2_1 = result[1]
                    result[1] -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_45d050(result, &result[3][2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
