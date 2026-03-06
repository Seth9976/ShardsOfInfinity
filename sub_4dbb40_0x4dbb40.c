// 函数名称: sub_4dbb40
// 虚拟地址: 0x4dbb40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4dbb40(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    void var_38
    int32_t eax_1 = __security_cookie ^ &var_38
    int32_t var_14 = eax_1
    int32_t temp1 = arg2
    arg2 -= 1
    int32_t esi
    int32_t var_3c = esi
    int32_t edi
    int32_t var_40 = edi
    arg1[0x1098].b = 0
    
    if (temp1 != 1)
        char const* const var_44_1 = "OpenGLInterface::RenderTargetSetMonitorTarget"
        int32_t var_48_1 = 0x12f5
        char const* const var_4c = "c:\ax2017\engine\openglgraphics.cpp"
        sub_44e4d0(eax_1, &data_5559b1, "Halt")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    RECT rect
    GetClientRect(data_ce1790, &rect)
    int32_t edx = *arg1
    rect.bottom -= rect.top
    rect.right -= rect.left
    rect.left = 0
    rect.top = 0
    int128_t xmm0
    xmm0.d = rect.left
    xmm0:4.d = rect.top
    xmm0:8.d = rect.right
    xmm0:0xc.d = rect.bottom
    int128_t var_50 = xmm0
    (*(edx + 0x58))(var_50)
    BOOL eax_4 = wglMakeCurrent(arg1[2], arg1[1])
    int32_t var_54_1 = 0
    int32_t var_58_1 = 0x8d40
    int32_t result = (*__glewBindFramebuffer)(0x8d40, 0)
    arg1[8] = arg1[4]
    arg1[9] = arg1[5]
    
    if (eax_4 == 0)
        char const* const var_5c_1 = "OpenGL failed to set monitor render target"
        result = sub_44e260("OpenGL failed to set monitor render target")
    
    @__security_check_cookie@4(rect.top ^ &var_50)
    return result
}
