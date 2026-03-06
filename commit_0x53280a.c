// 函数名称: __commit
// 虚拟地址: 0x53280a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__commit(int32_t arg1)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    
    if (esi != 0xfffffffe)
        if (esi s>= 0 && esi u< data_65a978
                && (*((&data_65a778)[esi s>> 6] + (esi & 0x3f) * 0x30 + 0x28) & 1) != 0)
            int32_t var_c = esi
            int32_t* var_10 = &arg1
            int32_t var_14 = esi
            int32_t* var_1c_1 = &var_c
            return __crt_seh_guarded_call<class <lambda_61cee617f5178ae960314fd4d05640a0>,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa>&,class <lambda_9cd88cf8ad10232537feb2133f08c833>,int32_t>::operator()<class <lambda_61cee617f5178ae960314fd4d05640a0>,class <lambda_6978c1fb23f02e42e1d9e99668cc68aa>&,class <lambda_9cd88cf8ad10232537feb2133f08c833> >(
                &var_14, &var_10)
        
        *__errno() = 9
        __invalid_parameter_noinfo()
    else
        *__errno() = 9
    
    return 0xffffffff
}
