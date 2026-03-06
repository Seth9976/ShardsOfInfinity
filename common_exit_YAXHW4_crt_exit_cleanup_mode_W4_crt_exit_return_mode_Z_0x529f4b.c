// 函数名称: ?common_exit@@YAXHW4_crt_exit_cleanup_mode@@W4_crt_exit_return_mode@@@Z
// 虚拟地址: 0x529f4b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?common_exit@@YAXHW4_crt_exit_cleanup_mode@@W4_crt_exit_return_mode@@@Z(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        HMODULE eax_1
        HMODULE ecx_1
        int32_t edx_1
        eax_1, ecx_1, edx_1 = is_managed_app()
        
        if (eax_1.b != 0)
            try_cor_exit_process(eax_1, edx_1, ecx_1, arg1)
    
    char var_5 = 0
    void arg_8
    void* var_1c = &arg_8
    int32_t* var_18 = &arg2
    char* var_14 = &var_5
    int32_t var_c = 2
    int32_t var_10 = 2
    int32_t* var_20_2 = &var_c
    int32_t result = __crt_seh_guarded_call<class <lambda_03b1d95aef87969028cfba75ccab2455>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c>&,class <lambda_22bdf7517842c4b3e53723af5aa32b9e>,void>::operator()<class <lambda_03b1d95aef87969028cfba75ccab2455>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c>&,class <lambda_22bdf7517842c4b3e53723af5aa32b9e> >(
        &var_10, &var_1c)
    
    if (arg2 != 0)
        return result
    
    exit_or_terminate_process(arg1)
    noreturn
}
