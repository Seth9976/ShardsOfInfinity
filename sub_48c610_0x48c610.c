// 函数名称: sub_48c610
// 虚拟地址: 0x48c610
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_48c610(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543278
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    char* result_2 = result_1
    void* const esi
    
    if (result_2 == 0)
        esi = &data_587590
    else
        if (result_2 != 1)
            sub_44e4d0(result_2 - 1, &data_5559b1, "Halt", "c:\ax2017\engine\xplatformgeneric.cpp", 
                0x69, "HalOpen")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        esi = &data_5875e0
    
    int32_t* edx
    sub_48c540(&result_1, edx)
    int32_t var_8_1 = 0
    char* result_4 = &data_5559b1
    char* result_3 = result_1
    
    if (result_3 != 0)
        result_4 = result_3
    
    char* result = _fopen(result_4, esi)
    *arg1 = result
    arg1[1] = 0
    
    if (result == 0)
        int32_t var_8_3 = 2
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(result, *(result + 0xc) + 0x10)
        
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
