// 函数名称: sub_47b920
// 虚拟地址: 0x47b920
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_47b920(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542e10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*arg1 != 0)
        int32_t esi_1 = 0
    label_47b951:
        int32_t ecx = *arg1
        int32_t edx_1 = ecx
        
        if (esi_1 != 0)
            esi_1 += 0x234
        else
            esi_1 = ecx
        
        result = arg1[1] * 0x234 + edx_1
        
        if (esi_1 u< result)
            do
                if ((*(esi_1 + 0x230) & 0xffff0000) != 0)
                    int32_t var_8_1 = 0
                    `eh vector vbase constructor iterator'(esi_1 + 0x14, 4, 4, sub_44f380)
                    int32_t var_8_2 = 0xffffffff
                    int32_t ecx_3 = arg1[3]
                    arg1[3] = zx.d(*(esi_1 + 0x230))
                    *(esi_1 + 0x230) = ecx_3
                    arg1[4] -= 1
                    goto label_47b951
                
                esi_1 += 0x234
            while (esi_1 u< result)
            
            edx_1 = ecx
        
        arg1[1] = 0
        arg1[3] = 0
        
        if (edx_1 != 0)
            result = _aligned_free_base(edx_1)
        
        __builtin_memset(arg1, 0, 0x14)
        arg1[6] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
