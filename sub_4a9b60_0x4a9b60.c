// 函数名称: sub_4a9b60
// 虚拟地址: 0x4a9b60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4a9b60(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544421
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_20 = arg1
    int32_t var_1c = 0
    int32_t var_8_1 = 1
    
    if (data_5b2e40 == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "gCompilingMode", "c:\ax2017\engine\defload.cpp", 
            0x14a, "AssetSideCarMakeFullPath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* arg_4
    
    if (arg2 == 3 || arg2 == 0x21 || arg2 == 0x15 || arg2 == 0xa || arg2 == 4 || arg2 == 2
            || arg2 == 0x1c)
        char* var_18
        sub_44f240(&var_18, ".xml")
        var_8_1.b = 2
        var_8_1.b = 3
        char* edx = &data_5559b1
        char* const var_14
        char* eax_5 = *sub_44f810(&arg_4, &var_14, &var_18)
        
        if (eax_5 != 0)
            edx = eax_5
        
        sub_4a8b60(arg1, edx)
        int32_t var_1c_2 = 1
        var_8_1.b = 4
        
        if (data_cdf414 != 0)
            char* eax_6 = var_14
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_44f000(&var_14)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        var_8_1.b = 5
        
        if (data_cdf414 != 0)
            char* eax_8 = var_18
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_44f000(&var_18)
                int32_t temp1_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
        
        int32_t var_8_3 = 6
    else
        sub_44f240(arg1, &data_5559b1)
        int32_t var_1c_1 = 1
        int32_t var_8_2 = 7
    
    if (data_cdf414 != 0)
        char* eax_10 = arg_4
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_44f000(&arg_4)
            int32_t temp2_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
