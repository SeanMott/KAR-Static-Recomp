//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"



void fn_80006D80(PPC::Runtime::GCContext* context)
{
/*80006D80 00003B80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80006D84 00003B84*/ PPC::Runtime::ASM::mflr(context->r0);
/*80006D88 00003B88*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80006D8C 00003B8C*/ PPC::Runtime::ASM::li(context->r5, 0x30);
/*80006D90 00003B90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80006D94 00003B94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80006D98 00003B98*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80006D9C 00003B9C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80006DA0 00003BA0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80006DA4 00003BA4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80006DA8 00003BA8*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*80006DAC 00003BAC*/ PPC::Runtime::ASM::lis(context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_HighBit);
/*80006DB0 00003BB0*/ PPC::Runtime::ASM::mulli(context->r30, context->r0, 0x30);
/*80006DB4 00003BB4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, structOffset_MaybeAPlayerDataStructOffset @ Get_MemoryOffset_LowBit);
/*80006DB8 00003BB8*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xac8);
/*80006DBC 00003BBC*/ PPC::Runtime::ASM::add(context->r31, context->r29, context->r30);
/*80006DC0 00003BC0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80006DC4 00003BC4*/ PPC::Runtime::ASM::bl(memset);
/*80006DC8 00003BC8*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*80006DCC 00003BCC*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80006DD0 00003BD0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80006DD4 00003BD4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80006DD8 00003BD8*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80006DDC 00003BDC*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*80006DE0 00003BE0*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r31));
/*80006DE4 00003BE4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE718 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80006DE8 00003BE8*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r31));
/*80006DEC 00003BEC*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80006DF0 00003BF0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r31));
/*80006DF4 00003BF4*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r31));
/*80006DF8 00003BF8*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r31));
/*80006DFC 00003BFC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80006E00 00003C00*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*80006E04 00003C04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80006E08 00003C08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80006E0C 00003C0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80006E10 00003C10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80006E14 00003C14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80006E18 00003C18*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80006E1C 00003C1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80006E20 00003C20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80006E24 00003C24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80006E28 00003C28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80006E2C 00003C2C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80006E30 00003C30*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80006E34 00003C34*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80006E38 00003C38*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80006E3C 00003C3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80006E40 00003C40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80006E44 00003C44*/ PPC::Runtime::ASM::blr();
}