// 函数名称: sub_424a60
// 虚拟地址: 0x424a60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HINSTANCE __fastcallsub_424a60(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = sub_4249d0(arg1)
    int32_t eax = sub_4249d0(arg1)
    int32_t var_c_1
    
    switch (eax)
        case 0
            char const* const var_8 = "StoreItemAction"
            var_c_1 = 0xfc7
            goto label_424b1a
        case 1
            void* result = sub_44d2a0(arg1)
            
            if (data_5c7980 == 1)
                int32_t esi_1 = *(result + 8)
                
                if ((*(*SteamUtils() + 0x44))() == 0)
                    data_5c799c = 3
                    return 3
                
                (*(*SteamFriends() + 0x7c))(esi_1, 1)
                result = 1
                data_5c799c = 1
            
            return result
        case 2, 5
            return ShellExecuteA(nullptr, "open", "https://www.templegatesgames.com/newsletter/", 
                nullptr, nullptr, SW_SHOWNORMAL)
        case 4
            return sub_44e870(*(sub_44d2a0(arg1) + 0x40)) __tailcall
        default
            char const* const var_8_1 = "StoreItemAction"
            var_c_1 = 0xfe5
        label_424b1a:
            sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
                var_c_1, "StoreItemAction")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
}
