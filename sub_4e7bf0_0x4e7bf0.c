// 函数名称: sub_4e7bf0
// 虚拟地址: 0x4e7bf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* const __thiscallsub_4e7bf0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_2 = zx.d(arg2.w)
        
        if (eax_2 u< *(arg1 + 0x3c))
            void* const result = eax_2 * 0x24c + *(arg1 + 0x38)
            
            if (*(result + 0x248) != arg2)
                result = nullptr
            
            result.b = result != 0
            return result
    
    int32_t eax_1
    eax_1.b = false
    return 0
}
