// 函数名称: sub_416330
// 虚拟地址: 0x416330
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_416330(int32_t* arg1, void* arg2, char* arg3)
{
    // 第一条实际指令: char* result = sub_4162a0()
    char* result = sub_4162a0()
    int32_t var_2c
    char const* const ecx_1
    
    if (arg3 != 5)
        if (arg3 == 3 || arg3 == 4)
            return sub_43a300(arg3)
        
    label_416395:
        result = *(arg2 + 4)
        
        if (result u> 3)
            char const* const var_28_5 = "ClientHitAction"
            var_2c = 0x337
            ecx_1 = "Halt"
        else
            switch (result)
                case nullptr
                    struct InputHitResult::UI2HitResult::VTable* const var_18 =
                        &UI2HitResult::`vftable'{for `InputHitResult'}
                    int32_t var_14 = 0
                    return sub_415960(result, &var_18, arg1, arg3)
                case 1
                    if (arg3 != 0)
                        return sub_43fe60(result, *(arg2 + 8), arg1, arg3)
                    
                    return result
                case 2
                    return sub_415960(result, arg2 + 0xc, arg1, arg3)
                case 3
                    if (arg3 == 1)
                        return sub_413580(*(arg2 + 0x20), *(arg2 + 0x24))
                    
                    return result
    else
        if (data_e47c18 == 0)
            int32_t eax = sub_416110(arg2)
            data_e47c1c = eax
            
            if (eax == 0)
                goto label_416395
            
            void* var_28_1 = arg2
            return sub_416160(eax, &data_e47c18, arg1)
        
        char const* const var_28 = "ClientHitAction"
        var_2c = 0x30a
        ecx_1 = "press.pressState == PRESS_NONE"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 
        var_2c, "ClientHitAction")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
