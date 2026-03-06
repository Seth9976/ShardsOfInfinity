// 函数名称: ?destroy_ptd@@YAXQAU__acrt_ptd@@@Z
// 虚拟地址: 0x5301f8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?destroy_ptd@@YAXQAU__acrt_ptd@@@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t ecx = *eax
    
    if (ecx != 0x54e410)
        __free_base(ecx)
        eax = arg1
    
    __free_base(eax[0xf])
    __free_base(arg1[0xc])
    __free_base(arg1[0xd])
    __free_base(arg1[0xe])
    __free_base(arg1[0xa])
    __free_base(arg1[0xb])
    __free_base(arg1[0x10])
    __free_base(arg1[0x11])
    __free_base(arg1[0xd8])
    int32_t** var_10 = &arg1
    int32_t var_c = 5
    int32_t var_14 = 5
    int32_t* var_18_3 = &var_c
    __crt_seh_guarded_call<class <lambda_51b6e8b1eb166f2a3faf91f424b38130>,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb>&,class <lambda_0b5a4a3e68152e1d9b943535f5f47bed>,void>::operator()<class <lambda_51b6e8b1eb166f2a3faf91f424b38130>,class <lambda_6250bd4b2a391816dd638c3bf72b0bcb>&,class <lambda_0b5a4a3e68152e1d9b943535f5f47bed> >(
        &var_14, &var_10)
    var_10 = &arg1
    var_14 = 4
    var_c = 4
    int32_t* var_18_4 = &var_14
    return __crt_seh_guarded_call<class <lambda_5b71d36f03204c0beab531769a5b5694>,class <lambda_be2b3da3f62db62e9dad5dc70221a656>&,class <lambda_8f9ce462984622f9bf76b59e2aaaf805>,void>::operator()<class <lambda_5b71d36f03204c0beab531769a5b5694>,class <lambda_be2b3da3f62db62e9dad5dc70221a656>&,class <lambda_8f9ce462984622f9bf76b59e2aaaf805> >(
        &var_c, &var_10)
}
