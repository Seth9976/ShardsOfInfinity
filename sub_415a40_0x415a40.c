// 函数名称: sub_415a40
// 虚拟地址: 0x415a40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_415a40(int32_t arg1, void* arg2, char* arg3)
{
    // 第一条实际指令: char* result = *(arg2 + 0xc)
    char* result = *(arg2 + 0xc)
    char const* const var_1c
    int32_t var_18
    char const* const var_14
    char* ecx_4
    
    if (result != 3)
        int32_t* ecx
        
        if (result == 1)
            return sub_43fe60(result, *(arg2 + 0x10), ecx, arg3)
        var_14 = "PressAction"
        var_18 = 0x211
        var_1c = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_4 = "Halt"
    else
        if (arg3 == 1)
            return sub_413580(*(arg2 + 0x28), *(arg2 + 0x2c)) __tailcall
        
        result = sub_42bf40()
        
        if (result != 1)
            return result
        
        void* edi_1 = *(arg2 + 0x28)
        int32_t* ecx_3 = data_65aabc
        
        if (data_e47310 != edi_1)
        label_415ad0:
            result = *(arg2 + 0x2c)
            data_e47310 = edi_1
            data_5b09b0 = result
            
            if (ecx_3 != 0)
                data_e47308 = *ecx_3
                result = ecx_3[1]
                data_e4730c = result
                return result
        else
            int32_t edx_2 = *(arg2 + 0x2c)
            
            if (data_5b09b0 != edx_2)
                goto label_415ad0
            
            if (ecx_3 != 0)
                int32_t ebx_1 = data_e47308
                int32_t eax_2 = adc.d(data_e4730c, 0, ebx_1 u>= 0xfffffe0c)
                int32_t temp1_1 = ecx_3[1]
                
                if (eax_2 s>= temp1_1 && (eax_2 s> temp1_1 || ebx_1 + 0x1f4 u> *ecx_3))
                    return sub_413580(edi_1, edx_2) __tailcall
                
                goto label_415ad0
        
        var_14 = "GetClient"
        var_18 = 0x74
        var_1c = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_4 = "gClient"
    
    sub_44e4d0(result, &data_5559b1, ecx_4, var_1c, var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
