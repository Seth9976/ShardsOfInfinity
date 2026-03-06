// 函数名称: sub_4d7a10
// 虚拟地址: 0x4d7a10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4d7a10(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: uint32_t texture = *sub_4dd530(arg3 + 0x4240, arg4)
    uint32_t texture = *sub_4dd530(arg3 + 0x4240, arg4)
    void* eax_1 = data_ce26e8
    
    if (*(eax_1 + 0x409c) != texture)
        *(eax_1 + 0x409c) = texture
        
        if (*(eax_1 + 0x4098) != 0)
            *(eax_1 + 0x4098) = 0
            (*__glewActiveTexture)(0x84c0)
        
        glBindTexture(0xde1, texture)
    
    arg4 = 0xde1
    jump(*__glewGenerateMipmap)
}
