// 函数名称: sub_4d7a80
// 虚拟地址: 0x4d7a80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscallsub_4d7a80(void* arg1, uint32_t arg2, uint32_t arg3, int32_t arg4)
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = sub_4dd470(arg1 + 0x4240)
    uint32_t (* eax)[0x4] = sub_4dd470(arg1 + 0x4240)
    int32_t params
    bool cond:0 = params == 1
    uint32_t ecx_1 = 1
    uint32_t textures
    uint32_t width = textures
    (*eax)[0x4d] = arg2
    uint32_t eax_1
    eax_1.b = cond:0
    eax[0x14][0].b = eax_1.b
    uint32_t height = arg3
    *eax = 0
    (*eax)[1] = 2
    __builtin_memcpy(&(*eax)[0x3a], 
        "\x2f\x81\x00\x00\x2f\x81\x00\x00\x2f\x81\x00\x00\x01\x26\x00\x00\x01\x26\x00\x00", 0x14)
    (*eax)[0x3f] = 0
    int32_t edx = *(arg1 + 0x5038)
    
    while (true)
        if (width s<= edx && height s<= edx)
            int32_t params_2 = params
            (*eax)[0x51] = ecx_1
            
            if (params_2 == 4)
                (*__glewGenRenderbuffers)(1, &(*eax)[0x39])
                (*__glewBindRenderbuffer)(0x8d41, (*eax)[0x39])
                (*__glewRenderbufferStorage)(0x8d41, 0x81a5, width, height)
                return (*eax)[0x52]
            
            if (params_2 != 6)
                if (params_2 == 5)
                    void* eax_13 = data_65ae00
                    int32_t var_18_3
                    char* ecx_2
                    
                    if (*(eax_13 + 0x1c) s<= 0)
                        char const* const var_14_6 = "OpenGLInterface::CreateTextureBuffer"
                        var_18_3 = 0x64e
                        ecx_2 = "gAppInterface->mMultisamples > 0"
                    label_4d7e87:
                        sub_44e4d0(eax_13, &data_5559b1, ecx_2, "c:\ax2017\engine\openglgraphics.cpp", 
                            var_18_3, "OpenGLInterface::CreateTextureBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    glGetIntegerv(0x8ca6, &params)
                    (*__glewGenFramebuffers)(1, &eax[0xe])
                    (*__glewBindFramebuffer)(0x8d40, eax[0xe][0])
                    (*__glewGenRenderbuffers)(1, &(*eax)[0x39])
                    (*__glewBindRenderbuffer)(0x8d41, (*eax)[0x39])
                    (*__glewRenderbufferStorageMultisample)(0x8d41, *(data_65ae00 + 0x1c), 0x8058, 
                        width, height)
                    (*__glewBindRenderbuffer)(0x8d41, 0)
                    (*__glewFramebufferRenderbuffer)(0x8d40, 0x8ce0, 0x8d41, (*eax)[0x39])
                    eax_13 = (*__glewCheckFramebufferStatus)(0x8d40)
                    
                    if (eax_13 == 0x8cd5)
                        (*__glewBindFramebuffer)(0x8d40, params)
                        return (*eax)[0x52]
                    
                    char const* const var_14_24 = "OpenGLInterface::CreateTextureBuffer"
                    var_18_3 = 0x686
                    ecx_2 = "status == GL_FRAMEBUFFER_COMPLETE"
                    goto label_4d7e87
                
                glGenTextures(1, &textures)
                uint32_t textures_1 = textures
                *eax = textures_1
                uint32_t target
                
                if (params_2 != 1)
                    sub_4d69b0(textures_1, 0)
                    target = 0xde1
                else
                    sub_4d6a30(textures_1, 0)
                    target = 0x8513
                
                glTexParameteri(target, 0x2800, (*eax)[0x3e])
                glTexParameteri(target, 0x2801, (*eax)[0x3d])
                glTexParameteri(target, 0x2802, (*eax)[0x3a])
                glTexParameteri(target, 0x2803, (*eax)[0x3b])
                glTexParameteri(target, 0x8072, eax[0xf][0])
                int32_t params_1 = params
                
                if (params_1 != 0 && params_1 != 1)
                    if (params_1 != 3)
                        sub_44e4d0(params_1, &data_5559b1, "Halt", 
                            "c:\ax2017\engine\openglgraphics.cpp", 0x6c7, 
                            "OpenGLInterface::CreateTextureBuffer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    glGetIntegerv(0x8ca6, &params)
                    (*__glewGenFramebuffers)(1, &eax[0xe])
                    (*__glewBindFramebuffer)(0x8d40, eax[0xe][0])
                    void* eax_27 = sub_4d7530(arg4)
                    glTexImage2D(target, 0, *(eax_27 + 4), width, height, 0, *(eax_27 + 8), 
                        *(eax_27 + 0xc), nullptr)
                    (*__glewFramebufferTexture2D)(0x8d40, 0x8ce0, 0xde1, textures, 0)
                    int32_t eax_30 = (*__glewCheckFramebufferStatus)(0x8d40)
                    
                    if (eax_30 == 0x8cd5)
                        (*__glewBindFramebuffer)(0x8d40, params)
                        return (*eax)[0x52]
                    
                    sub_44e4d0(eax_30, &data_5559b1, "status == GL_FRAMEBUFFER_COMPLETE", 
                        "c:\ax2017\engine\openglgraphics.cpp", 0x6c0, 
                        "OpenGLInterface::CreateTextureBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            else
                void* eax_6 = data_65ae00
                
                if (*(eax_6 + 0x1c) s<= 0)
                    sub_44e4d0(eax_6, &data_5559b1, "gAppInterface->mMultisamples > 0", 
                        "c:\ax2017\engine\openglgraphics.cpp", 0x635, 
                        "OpenGLInterface::CreateTextureBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                (*__glewGenRenderbuffers)(1, &(*eax)[0x39])
                (*__glewBindRenderbuffer)(0x8d41, (*eax)[0x39])
                (*__glewRenderbufferStorageMultisample)(0x8d41, *(data_65ae00 + 0x1c), 0x81a5, width, 
                    height)
                (*__glewBindRenderbuffer)(0x8d41, 0)
            
            return (*eax)[0x52]
        
        width u>>= 1
        height u>>= 1
        ecx_1 += 1
}
