// 函数名称: ?pre_c_initialization@@YAHXZ
// 虚拟地址: 0x51bf67
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?pre_c_initialization@@YAHXZ()
{
    // 第一条实际指令: __set_pgmptr(2)
    __set_pgmptr(2)
    __set_fmode(0x4000)
    data_65a67c = 0
    
    if (___scrt_initialize_onexit_tables(1) != 0)
        __fnclex()
        sub_51c850()
        _atexit(sub_51c87c)
        int32_t var_8_1 = 1
        
        if (sub_52ea21() == 0)
            sub_51c7ee()
            
            if (sub_51c838() != 0)
                ___setusermatherr(sub_4d63e0)
            
            __initialize_default_precision()
            __configthreadlocale(0)
            
            if (sub_4111e0() != 0)
                j_sub_52ea2c()
            
            j_sub_4d63e0()
            return 0
    
    ___scrt_fastfail(7)
    breakpoint
}
