// 函数名称: sub_4824a0
// 虚拟地址: 0x4824a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4824a0(int32_t arg1)
{
    // 第一条实际指令: void* result = data_cdf448
    void* result = data_cdf448
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< *(result + 4))
            void* esi_2 = edx_1 * 0x64 + *result
            
            if (*(esi_2 + 0x60) == arg1)
                result = (*(*data_cdf444 + 0x24))(esi_2)
                *(esi_2 + 0x5a) = 0
    
    return result
}
