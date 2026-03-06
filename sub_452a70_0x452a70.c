// 函数名称: sub_452a70
// 虚拟地址: 0x452a70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_452a70(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: data_5c6dd8 = arg2
    data_5c6dd8 = arg2
    int32_t i = 1
    data_5c7798 = 1
    int32_t result
    
    do
        int32_t eax_1 = (&data_5c6dd4)[i]
        result = (eax_1 u>> 0x1e ^ eax_1) * 0x6c078965 + i
        (&data_5c6dd8)[i] = result
        i = data_5c7798 + 1
        data_5c7798 = i
    while (i u< 0x270)
    
    return result
}
