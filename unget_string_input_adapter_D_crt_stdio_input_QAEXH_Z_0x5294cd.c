// 函数名称: ?unget@?$string_input_adapter@D@__crt_stdio_input@@QAEXH@Z
// 虚拟地址: 0x5294cd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall?unget@?$string_input_adapter@D@__crt_stdio_input@@QAEXH@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = arg1[2]
    int32_t result = arg1[2]
    
    if (result != *arg1 && (result != arg1[1] || arg2 != 0xffffffff))
        result -= 1
        arg1[2] = result
    
    return result
}
