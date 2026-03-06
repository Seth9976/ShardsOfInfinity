// 函数名称: sub_4e74e0
// 虚拟地址: 0x4e74e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4e74e0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = sub_4ebdf0(arg1 + 0x38)
    int32_t* ecx_1 = *(arg1 + 0xc)
    
    if (ecx_1 != 0)
        result = (*(*ecx_1 + 8))(ecx_1)
    
    int32_t* ecx_2 = *(arg1 + 4)
    
    if (ecx_2 != 0)
        result = (*(*ecx_2 + 8))(ecx_2)
    
    void* ecx_3 = data_ce26f4
    
    if (ecx_3 != 0)
        int32_t var_8_1 = 0
        sub_4ebdf0(ecx_3 + 0x38)
        int32_t var_8_2 = 0xffffffff
        result = sub_45d050(data_ce26f4, 0x64)
        data_ce26f4 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
