// 函数名称: sub_4dbaa0
// 虚拟地址: 0x4dbaa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4dbaa0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t temp1 = arg2
    int32_t temp1 = arg2
    arg2 -= 1
    int32_t eax
    
    if (temp1 == 1)
        if (SwapBuffers(*(arg1 + 8)) != 0)
            return sub_4d68a0("EndScene opengl error check")
        
        enum WIN32_ERROR var_8_2 = GetLastError()
        sub_44e4d0(sub_44e260("openGL present error: %d"), &data_5559b1, "Halt", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x12c2, "OpenGLInterface::APIPresent")
    else
        sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\openglgraphics.cpp", 0x12bb, 
            "OpenGLInterface::APIPresent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
