// 函数名称: ??1_LocaleUpdate@@QAE@XZ
// 虚拟地址: 0x52052a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcall??1_LocaleUpdate@@QAE@XZ(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[3].b != 0)
    if (arg1[3].b != 0)
        void* eax = *arg1
        *(eax + 0x350) &= 0xfffffffd
}
