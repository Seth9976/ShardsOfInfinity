// 函数名称: sub_5469f0
// 虚拟地址: 0x5469f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_5469f0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_18 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = data_5bb138
    
    if (result_1 != 0)
        result = nullptr
        
        while (true)
            if (result != 0)
                result = &result[8]
            else
                result = result_1
            
            void* ecx_3 = &result_1[data_5bb13c * 8]
            
            if (result u>= ecx_3)
                break
            
            while (true)
                int32_t esi_1 = result[6]
                
                if ((esi_1 & 0xffff0000) != 0)
                    int32_t edx = data_5bb144
                    data_5bb144 = zx.d(esi_1.w)
                    result[6] = edx
                    data_5bb148 -= 1
                    result_1 = data_5bb138
                    break
                
                result = &result[8]
                
                if (result u>= ecx_3)
                    goto label_546a52
        
    label_546a52:
        data_5bb13c = 0
        data_5bb144 = 0
        
        if (result_1 != 0)
            result = _aligned_free_base(result_1)
        
        __builtin_memset(&data_5bb138, 0, 0x14)
        data_5bb150 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
