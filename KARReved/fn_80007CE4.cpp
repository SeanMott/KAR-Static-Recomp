//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "memset.hpp"
#include "fn_8001A5B8.hpp"
#include "fn_8001FB64.hpp"
#include "fn_80028754.hpp"
#include "fn_80038C40.hpp"
#include "fn_8003C070.hpp"
#include "fn_80046D48.hpp"



void fn_80007CE4(PPC::Runtime::GCContext* context)
{
/*80007CE4 00004AE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80007CE8 00004AE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80007CEC 00004AEC*/ PPC::Runtime::ASM::lis(context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_HighBit);
/*80007CF0 00004AF0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80007CF4 00004AF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80007CF8 00004AF8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_LowBit);
/*80007CFC 00004AFC*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*80007D00 00004B00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80007D04 00004B04*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x354);
/*80007D08 00004B08*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80007D0C 00004B0C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80007D10 00004B10*/ PPC::Runtime::ASM::bl(memset);
/*80007D14 00004B14*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80007D18 00004B18*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80007D1C 00004B1C*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r7, 6, 24, 25);
/*80007D20 00004B20*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80007D24 00004B24*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80007D28 00004B28*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80007D2C 00004B2C*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r3, 24);
/*80007D30 00004B30*/ PPC::Runtime::ASM::lis(context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_HighBit);
/*80007D34 00004B34*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r9, 5, 26, 26);
/*80007D38 00004B38*/ PPC::Runtime::ASM::li(context->r8, 0x78);
/*80007D3C 00004B3C*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r5, 24);
/*80007D40 00004B40*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80007D44 00004B44*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r7, 4, 27, 27);
/*80007D48 00004B48*/ PPC::Runtime::ASM::addi(context->r3, context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_LowBit);
/*80007D4C 00004B4C*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r4, 24);
/*80007D50 00004B50*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80007D54 00004B54*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r7, 2, 28, 29);
/*80007D58 00004B58*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x394);
/*80007D5C 00004B5C*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80007D60 00004B60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80007D64 00004B64*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80007D68 00004B68*/ PPC::Runtime::ASM::li(context->r5, 0xf0);
/*80007D6C 00004B6C*/ PPC::Runtime::ASM::sth(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r31));
/*80007D70 00004B70*/ PPC::Runtime::ASM::sth(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80007D74 00004B74*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80007D78 00004B78*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80007D7C 00004B7C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*80007D80 00004B80*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*80007D84 00004B84*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r31));
/*80007D88 00004B88*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r31));
/*80007D8C 00004B8C*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r31));
/*80007D90 00004B90*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80007D94 00004B94*/ PPC::Runtime::ASM::stb(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15, context->r31));
/*80007D98 00004B98*/ PPC::Runtime::ASM::bl(memset);
/*80007D9C 00004B9C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r30));
/*80007DA0 00004BA0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80007DA4 00004BA4*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 6, 24, 25);
/*80007DA8 00004BA8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80007DAC 00004BAC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r30));
/*80007DB0 00004BB0*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80007DB4 00004BB4*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 24);
/*80007DB8 00004BB8*/ PPC::Runtime::ASM::li(context->r6, 0x12c);
/*80007DBC 00004BBC*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r4, 5, 26, 26);
/*80007DC0 00004BC0*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80007DC4 00004BC4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*80007DC8 00004BC8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r30));
/*80007DCC 00004BCC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80007DD0 00004BD0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r30));
/*80007DD4 00004BD4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xca, context->r30));
/*80007DD8 00004BD8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcb, context->r30));
/*80007DDC 00004BDC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r30));
/*80007DE0 00004BE0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd, context->r30));
/*80007DE4 00004BE4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcf, context->r30));
/*80007DE8 00004BE8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd3, context->r30));
/*80007DEC 00004BEC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*80007DF0 00004BF0*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r30));
/*80007DF4 00004BF4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd1, context->r30));
/*80007DF8 00004BF8*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd5, context->r30));
/*80007DFC 00004BFC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd2, context->r30));
/*80007E00 00004C00*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd6, context->r30));
/*80007E04 00004C04*/ PPC::Runtime::ASM::bl(fn_8001A5B8);
/*80007E08 00004C08*/ PPC::Runtime::ASM::bl(fn_8001FB64);
/*80007E0C 00004C0C*/ PPC::Runtime::ASM::bl(fn_80028754);
/*80007E10 00004C10*/ PPC::Runtime::ASM::bl(fn_80038C40);
/*80007E14 00004C14*/ PPC::Runtime::ASM::bl(fn_8003C070);
/*80007E18 00004C18*/ PPC::Runtime::ASM::bl(fn_80046D48);
/*80007E1C 00004C1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80007E20 00004C20*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80007E24 00004C24*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80007E28 00004C28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80007E2C 00004C2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80007E30 00004C30*/ PPC::Runtime::ASM::blr();
}