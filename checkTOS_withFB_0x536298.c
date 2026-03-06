// 函数名称: __checkTOS_withFB
// 虚拟地址: 0x536298
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__checkTOS_withFB(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t eax = arg1 & 0x7ff00000
    int32_t eax = arg1 & 0x7ff00000
    
    if (eax == 0x7ff00000)
        return arg1
    
    return eax
}
