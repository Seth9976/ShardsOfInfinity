// 函数名称: _fflush
// 虚拟地址: 0x529da6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_fflush(void* arg1)
{
    // 第一条实际指令: void* var_c = arg1
    void* var_c = arg1
    
    if (arg1 == 0)
        void* var_1c = arg1
        return common_flush_all()
    
    if (is_stream_flushable_or_commitable(*(arg1 + 0xc)) == 0)
        return 0
    
    int32_t* var_14 = &var_c
    void* eax_4 = var_c
    void* var_10 = eax_4
    void* var_18 = eax_4
    int32_t* var_1c_2 = &var_10
    return __crt_seh_guarded_call<class <lambda_6d20deecaf4856105ebacbad442d1079>,class <lambda_9a32fed5bf61b6b509b2d3f6003082a1>&,class <lambda_63ea2239ed67c638ddbae41947fdf875>,int32_t>::operator()<class <lambda_6d20deecaf4856105ebacbad442d1079>,class <lambda_9a32fed5bf61b6b509b2d3f6003082a1>&,class <lambda_63ea2239ed67c638ddbae41947fdf875> >(
        &var_18, &var_14)
}
