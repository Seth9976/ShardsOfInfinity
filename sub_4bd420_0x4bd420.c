// 函数名称: sub_4bd420
// 虚拟地址: 0x4bd420
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4bd420(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x22c)
    int32_t edx = *(arg1 + 0x22c)
    
    if (edx s< 0x10)
        *(arg1 + 0x22c) = edx + 1
        return arg1 + ((edx * 7 + 0x1b) << 2)
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "tree.numExpressions < MAX_EXPRESSIONS", 
        "c:\ax2017\engine\ui2expr.cpp", 7, "UI2ExpressionAlloc")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
