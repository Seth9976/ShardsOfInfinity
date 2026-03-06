// 函数名称: ??0thread_resource_error@threads@stdext@@QAE@ABV012@@Z
// 虚拟地址: 0x51b03c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct std::exception::std::bad_alloc::VTable** __thiscall??0thread_resource_error@threads@stdext@@QAE@ABV012@@Z(struct std::exception::VTable** arg1, void* arg2)
{
    // 第一条实际指令: struct std::exception::std::bad_alloc::VTable** result = arg1
    struct std::exception::std::bad_alloc::VTable** result = arg1
    sub_4f2540(arg1, arg2)
    *result = &std::bad_alloc::`vftable'{for `std::exception'}
    return result
}
