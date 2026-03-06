// 函数名称: sub_47b660
// 虚拟地址: 0x47b660
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_47b660(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[1]
    int32_t eax = arg1[1]
    
    if (eax s< arg1[2])
        int32_t ecx = eax * 3
        int32_t eax_2 = *arg1
        *(eax_2 + (ecx << 3) + 4) = 0
        *(eax_2 + (ecx << 3) + 0xc) = &data_5559b1
        arg1[1] += 1
        return *arg1 + arg1[1] * 0x18 - 0x18
    
    sub_44e4d0(eax, &data_5559b1, "mSize < mSizeReserved", "c:\ax2017\engine\xarray.h", 0xa1, 
        "XArray<struct UI2State>::Alloc")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
