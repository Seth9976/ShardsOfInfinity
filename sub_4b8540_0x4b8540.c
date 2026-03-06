// 函数名称: sub_4b8540
// 虚拟地址: 0x4b8540
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4b8540(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s>= 0 && arg2 s< *(arg1 + 0x10))
    if (arg2 s>= 0 && arg2 s< *(arg1 + 0x10))
        return *(*(arg1 + 0xc) + (arg2 << 2))
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
        "c:\ax2017\engine\attribmap.cpp", 0x8b, "AttribTagGetField")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
