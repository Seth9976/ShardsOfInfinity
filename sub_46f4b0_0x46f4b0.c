// 函数名称: sub_46f4b0
// 虚拟地址: 0x46f4b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_46f4b0(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542ab8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0)
        result = zx.d(arg1.w)
        
        if (result u< data_5c99a4)
            int32_t edi_1 = data_5c99a0
            result *= 0x1008
            
            if (*(result + edi_1 + 0x1004) == arg1)
                int32_t ecx = data_5c99d8
                
                if (ecx != arg1)
                    sub_44e4d0(result, &data_5559b1, "gUI2.focus == handle", 
                        "c:\ax2017\engine\ui2.cpp", 0x237b, "UI2ClearFocus")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (ecx == 0)
                    sub_44e4d0(result, &data_5559b1, "id != DATAID_NULL", 
                        "c:\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                uint32_t edx = zx.d(ecx.w)
                
                if (edx u< data_5c99a4)
                    result = edx * 0x1008
                
                if (edx u>= data_5c99a4 || *(result + edi_1 + 0x1004) != ecx)
                    sub_44e4d0(result, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                        "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* esi_2 = edx * 0x1008 + edi_1
                
                if (*(esi_2 + 0x69c) == 3)
                    result = *(esi_2 + 0x63c) * 0x208
                    
                    if (*(result + esi_2 + 0x1d8) != 0)
                        char* const result_1 = &data_5559b1
                        int32_t var_8_1 = 0
                        int32_t var_28 = ecx
                        char* const ecx_1 = *(result + esi_2 + 0x1fc)
                        
                        if (ecx_1 == 0)
                            char* eax_3 = *(esi_2 + 0x698)
                            ecx_1 = &data_5559b1
                            
                            if (eax_3 != 0)
                                ecx_1 = eax_3
                        
                        char* const var_24_1 = ecx_1
                        sub_44f510(&result_1, esi_2 + 0x798)
                        int32_t var_1c_1 = *(esi_2 + 0x754)
                        int32_t eax_5
                        eax_5.b = arg2
                        char var_18_1 = eax_5.b
                        result = sub_46f480(esi_2, &var_28)
                        *(esi_2 + 0x7e9) = 0
                        int32_t var_8_2 = 1
                        
                        if (data_cdf414 != 0)
                            result = result_1
                            
                            if (result != 0 && *result != 0)
                                result = sub_44f000(&result_1)
                                int32_t temp0_1 = result[1]
                                result[1] -= 1
                                
                                if (temp0_1 == 1)
                                    result = sub_45d050(result, &result[3][2])
    
    data_5c99d8 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
