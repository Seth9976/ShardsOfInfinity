// 函数名称: sub_4dc060
// 虚拟地址: 0x4dc060
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4dc060(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = *sub_4dd530(arg1 + 0x4240, arg2)
    int32_t esi = *sub_4dd530(arg1 + 0x4240, arg2)
    void* eax_1 = data_ce26e8
    
    if (*(eax_1 + 0x408c) != 0)
        *(eax_1 + 0x408c) = 0
        (*__glewBindVertexArray)(0)
        void* eax_3 = data_ce19c4
        *(eax_3 + 0x14) += 1
    
    return (*__glewBindBuffer)(0x8893, esi)
}
