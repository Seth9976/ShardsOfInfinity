// 函数名称: ___std_exception_destroy
// 虚拟地址: 0x51d51e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void___std_exception_destroy(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1].b != 0)
    if (arg1[1].b != 0)
        _free(*arg1)
    
    *arg1 = 0
    arg1[1].b = 0
}
