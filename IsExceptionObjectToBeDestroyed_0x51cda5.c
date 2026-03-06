// 函数名称: __IsExceptionObjectToBeDestroyed
// 虚拟地址: 0x51cda5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__IsExceptionObjectToBeDestroyed(int32_t arg1)
{
    // 第一条实际指令: int32_t* i = *(sub_51e354() + 0x24)
    for (int32_t* i = *(sub_51e354() + 0x24); i != 0; i = i[1])
        if (*i == arg1)
            return 0
    
    return 1
}
