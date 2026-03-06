// 函数名称: sub_482ac0
// 虚拟地址: 0x482ac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_482ac0(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x10)
    int32_t result = *(arg1 + 0x10)
    
    if (result == 1 || result == 4 || result == 0x10 || result == 2 || result == 0xe || result == 0xa
            || result == 3)
        return result
    
    sub_44e4d0(result, "Unable to fixup data type", "HaltMsg", "c:\ax2017\engine\defbin.cpp", 0x147, 
        "DefBinShallowDefTypeFixup")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
