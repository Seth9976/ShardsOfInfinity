// 函数名称: sub_4185f0
// 虚拟地址: 0x4185f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4185f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_FullAliasWait@_TaskCollection@details@Concurrency@@AAEXPAV123@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    void* ebx = data_65aabc
    
    if (ebx == 0)
        sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ecx = *(ebx + 0x424)
    int32_t edi = 0
    char* const result_1
    
    if (ecx s> 0)
        int32_t edx_1 = *arg1
        result = ebx + 0x24
        
        do
            if (*result == edx_1)
                int32_t var_8_3 = 0
                int32_t eax_8 = arg1[1]
                char* var_38_3 = arg1[2]
                result_1 = &data_5559b1
                int32_t var_14_2 = 1
                sub_44f590(&result_1, var_38_3)
                int32_t esi_2 = arg1[4]
                int32_t edi_4 = edi << 4
                int32_t var_18_2 = esi_2
                *(edi_4 + ebx + 0x24) = edx_1
                *(edi_4 + ebx + 0x28) = eax_8
                result = sub_44f510(ebx + 0x2c + edi_4, &result_1)
                *(edi_4 + ebx + 0x30) = esi_2
                int32_t var_8_4 = 1
                goto label_4186bc
            
            edi += 1
            result = &result[4]
        while (edi s< ecx)
    
    if (ecx != 0x40)
        void* edi_3 = (ecx << 4) + ebx
        *(ebx + 0x424) = ecx + 1
        int32_t var_8_1 = 2
        int32_t eax_4 = *arg1
        char* var_38_1 = arg1[2]
        int32_t eax_5 = arg1[1]
        result_1 = &data_5559b1
        int32_t var_14_1 = 2
        sub_44f590(&result_1, var_38_1)
        int32_t esi_1 = arg1[4]
        *(edi_3 + 0x24) = eax_4
        *(edi_3 + 0x28) = eax_5
        int32_t var_18_1 = esi_1
        result = sub_44f510(edi_3 + 0x2c, &result_1)
        *(edi_3 + 0x30) = esi_1
        int32_t var_8_2 = 3
    label_4186bc:
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp0_1 = result[1]
                result[1] -= 1
                
                if (temp0_1 == 1)
                    result = sub_45d050(result, &result[3][2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
