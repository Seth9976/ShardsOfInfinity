// 函数名称: ___scrt_initialize_crt
// 虚拟地址: 0x51b6b4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___scrt_initialize_crt(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        data_659f90 = 1
    
    int64_t xcr0
    ___isa_available_init(xcr0)
    
    if (___vcrt_initialize() != 0)
        if (___acrt_initialize() != 0)
            return 1
        
        ___vcrt_uninitialize(0)
    
    return 0
}
