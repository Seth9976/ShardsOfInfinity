// 函数名称: sub_423fa0
// 虚拟地址: 0x423fa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_423fa0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541558
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* result_1 = arg1
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = *arg1
    void* esi_1
    
    if (ecx != 0)
        uint32_t edx_1 = zx.d(ecx.w)
        int32_t esi_2
        
        if (edx_1 u< data_5c99a4)
            esi_2 = data_5c99a0
            eax_3 = edx_1 * 0x1008
        
        if (edx_1 u>= data_5c99a4 || *(eax_3 + esi_2 + 0x1004) != ecx)
            sub_44e4d0(eax_3, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        esi_1 = *(edx_1 * 0x1008 + esi_2 + 0x784)
        
        if (esi_1 != 0)
            esi_1 = *(esi_1 + 0x1004)
    else
        esi_1 = nullptr
    
    int32_t eax_5 = sub_44f240(&result_1, "sliderMusic")
    int32_t var_8_1 = 0
    
    if (esi_1 == 0)
        sub_44e4d0(eax_5, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 0x6c, 
            "DataArray<struct UI2>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t ecx_2 = zx.d(esi_1.w)
    
    if (ecx_2 u< data_5c99a4)
        int32_t edx_2 = data_5c99a0
        eax_5 = ecx_2 * 0x1008
        
        if (*(eax_5 + edx_2 + 0x1004) == esi_1)
            char* const result_2 = &data_5559b1
            char* eax_7 = *(ecx_2 * 0x1008 + edx_2 + 0x698)
            char* const edx_3 = &data_5559b1
            
            if (eax_7 != 0)
                edx_3 = eax_7
            
            char* result = result_1
            
            if (result != 0)
                result_2 = result
            
            int32_t esi_3
            
            while (true)
                ebx.b = *edx_3
                char temp0_1 = *result_2
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        esi_3 = 0
                        break
                    
                    ebx.b = edx_3[1]
                    char temp1_1 = result_2[1]
                    c_1 = ebx.b u< temp1_1
                    
                    if (ebx.b == temp1_1)
                        edx_3 = &edx_3[2]
                        result_2 = &result_2[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        esi_3 = 0
                        break
                
                esi_3 = sbb.d(esi_1, esi_1, c_1) | 1
                break
            
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0 && result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(result, *(result + 0xc) + 0x10)
            
            result.b = esi_3 == 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    sub_44e4d0(eax_5, &data_5559b1, "DataArrayTryToGet(id) != NULL", "c:\ax2017\engine\dataarray.h", 
        0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
