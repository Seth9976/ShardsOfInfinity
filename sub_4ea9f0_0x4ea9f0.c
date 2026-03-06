// 函数名称: sub_4ea9f0
// 虚拟地址: 0x4ea9f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4ea9f0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t temp1 = arg2
    int32_t temp1 = arg2
    arg2 -= 1
    
    if (temp1 == 1)
        return (*(*arg1 + 0x88))(arg1[4], arg1[5])
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\windows\windowsdx11.cpp", 0x88e, 
        "Dx11GraphicsInterface::RenderTargetSetMonitorTarget")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
