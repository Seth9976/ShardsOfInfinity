// 函数名称: sub_4a0730
// 虚拟地址: 0x4a0730
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4a0730(float arg1 @ xmm0)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    float var_8_1 = arg1
    int32_t result = data_e47798
    TEB* fsbase
    
    if (result s> *(*fsbase->ThreadLocalStoragePointer + 4))
        result = __Init_thread_header(&data_e47798)
        
        if (data_e47798 == 0xffffffff)
            data_e4779c = 0x3c8efa35
            result = __Init_thread_footer(&data_e47798)
    
    data_e4779c
    return result
}
