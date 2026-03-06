// 函数名称: sub_4db1c0
// 虚拟地址: 0x4db1c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4db1c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = (*__glewCreateProgram)()
    
    if (result != 0)
        (*__glewAttachShader)(result, arg1)
        (*__glewAttachShader)(result, arg2)
        (*__glewLinkProgram)(result)
        int32_t var_c = 0
        (*__glewGetProgramiv)(result, 0x8b82, &var_c)
        
        if (var_c == 1)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        void* var_10 = nullptr
        (*__glewGetProgramiv)(result, 0x8b84, &var_10)
        void* ebx_1 = var_10
        
        if (ebx_1 != 0)
            __alloca_probe_16(ebx_1)
            int32_t __saved_edi
            (*__glewGetProgramInfoLog)(result, ebx_1, 0, &__saved_edi)
            int32_t* var_20_7 = &__saved_edi
            sub_44e260("Could not link program:\n%s\n")
        
        (*__glewDeleteProgram)(result)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
