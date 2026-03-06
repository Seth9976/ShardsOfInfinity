// 函数名称: sub_4dbe10
// 虚拟地址: 0x4dbe10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscallsub_4dbe10(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_4dd530(arg1 + 0x4240, arg2)
    int32_t* eax = sub_4dd530(arg1 + 0x4240, arg2)
    
    if (eax[0x4f].b == 0)
        void* result = eax[0x36]
        
        if (result == 0)
            result = sub_45cd70(eax[2])
            eax[0x36] = result
        
        return result
    
    sub_44e4d0(eax, &data_5559b1, "!bufferData->mIsSharedBuffer", 
        "c:\ax2017\engine\openglgraphics.cpp", 0x1362, "OpenGLInterface::LockVertexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
