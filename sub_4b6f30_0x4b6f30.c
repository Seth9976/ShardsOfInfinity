// 函数名称: sub_4b6f30
// 虚拟地址: 0x4b6f30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4b6f30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s>= 0 && arg2 s< *(arg1 + 4))
    if (arg2 s>= 0 && arg2 s< *(arg1 + 4))
        return (arg2 << 6) + *arg1
    
    sub_44e4d0(arg2, &data_5559b1, "index >= 0 && index < mSize", "c:\ax2017\engine\xarray.h", 0xb5, 
        "XArray<struct Mat4>::operator []")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
