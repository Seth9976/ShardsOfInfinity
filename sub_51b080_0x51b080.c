// 函数名称: sub_51b080
// 虚拟地址: 0x51b080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct std::exception::VTable** __thiscallsub_51b080(struct std::exception::VTable** arg1, char arg2)
{
    // 第一条实际指令: *arg1 = &std::exception::`vftable'
    *arg1 = &std::exception::`vftable'
    ___std_exception_destroy(&arg1[1])
    
    if ((arg2 & 1) != 0)
        operator new(arg1)
    
    return arg1
}
