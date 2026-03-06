// 函数名称: __close
// 虚拟地址: 0x53196d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__close(int32_t arg1)
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
            return __crt_seh_guarded_call<class <lambda_123407a5e2ac06da108355a851863b7a>,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>&,class <lambda_ae55bdf541ad94d75914d381c370e64d>,int32_t>::operator()<class <lambda_123407a5e2ac06da108355a851863b7a>,class <lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>&,class <lambda_ae55bdf541ad94d75914d381c370e64d> >(
                &var_14, &var_10)
        
        *___doserrno() = 0
        *__errno() = 9
        __invalid_parameter_noinfo()
    else
        *___doserrno() = 0
        *__errno() = 9
    
    return 0xffffffff
}
