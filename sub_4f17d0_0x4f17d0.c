// 函数名称: sub_4f17d0
// 虚拟地址: 0x4f17d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4f17d0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg1
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_44e260("AtlasMaker: searching...")
    int32_t var_8_1 = 0
    char* ecx_1 = &data_5559b1
    char* eax_4 = *sub_4a8b60(&result_1, "res/")
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    char* result = sub_4f1410(ecx_1)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
