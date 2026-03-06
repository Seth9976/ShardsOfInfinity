// 函数名称: sub_42d190
// 虚拟地址: 0x42d190
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_42d190(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541c78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18
    int32_t* var_30 = &var_18
    int32_t* result_1
    sub_42ce10(&result_1, arg2, 0x1c)
    void* ecx_1 = arg1
    int32_t var_8_1 = 0
    int32_t* esi = var_18
    
    if (*esi == *(ecx_1 + 0x28))
        int32_t eax_4 = esi[1]
        
        if (eax_4 != *(ecx_1 + 0x2c))
            sub_44e4d0(eax_4, &data_5559b1, "pNetImportData->num_hidden == learn->num_hidden", 
                "c:\ax2017\jams\shards\code\rtfgneuralnetimport.cpp", 0x182, "NeuralNetLoadWeights")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t edx = esi[2]
        
        if (edx != *(ecx_1 + 0x30))
            sub_44e4d0(eax_4, &data_5559b1, "pNetImportData->num_outputs == learn->num_output", 
                "c:\ax2017\jams\shards\code\rtfgneuralnetimport.cpp", 0x183, "NeuralNetLoadWeights")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t i = 0
        var_18 = esi[7]
        
        if (esi[8] s> 0)
            int32_t ebx_2 = 0
            int32_t eax_6 = var_18 << 3
            
            do
                sub_51d5b0(*(*(ecx_1 + 0x4c) + (i << 2)), esi[3] + ebx_2, eax_6)
                i += 1
                eax_6 = var_18 << 3
                ecx_1 = arg1
                ebx_2 += eax_6
            while (i s< esi[8])
            
            edx = esi[2]
            eax_4 = esi[1]
        
        int32_t i_1 = 0
        
        if (eax_4 + 1 s> 0)
            int32_t eax_11 = edx << 3
            int32_t ebx_3 = 0
            var_18 = eax_11
            
            do
                sub_51d5b0(*(*(ecx_1 + 0x54) + (i_1 << 2)), esi[5] + ebx_3, eax_11)
                i_1 += 1
                ebx_3 += var_18
                ecx_1 = arg1
                eax_11 = var_18
            while (i_1 s< esi[1] + 1)
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
