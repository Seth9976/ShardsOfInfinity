// 函数名称: sub_47b790
// 虚拟地址: 0x47b790
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __thiscallsub_47b790(int32_t* arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t eax = arg1[1]
    int32_t eax = arg1[1]
    
    if (eax s< arg1[2])
        int128_t* ecx_1 = *arg1 + eax * 0x18
        *ecx_1 = *arg2
        ecx_1[1].q = arg2[1].q
        arg1[1] += 1
        return arg2
    
    sub_44e4d0(eax, &data_5559b1, "mSize < mSizeReserved", "c:\ax2017\engine\xarray.h", 0x96, 
        "XArray<struct UI2StateEffect>::Append")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
