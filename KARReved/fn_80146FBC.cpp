//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138BA4.hpp"
#include "fn_80138C90.hpp"
#include "fn_80146800.hpp"



void fn_80146FBC(PPC::Runtime::GCContext* context)
{
/*80146FBC 00143DBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80146FC0 00143DC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80146FC4 00143DC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80146FC8 00143DC8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80146FCC 00143DCC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80146FD0 00143DD0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80146FD4 00143DD4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80146FD8 00143DD8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r3));
/*80146FDC 00143DDC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80146FE0 00143DE0*/ PPC::Runtime::ASM::beq(.L_8014702C);
/*80146FE4 00143DE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80146FE8 00143DE8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80146FEC 00143DEC*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*80146FF0 00143DF0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E04E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80146FF4 00143DF4*/ PPC::Runtime::ASM::stb(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80146FF8 00143DF8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80146FFC 00143DFC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r31));
/*80147000 00143E00*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r31));
/*80147004 00143E04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80147008 00143E08*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*8014700C 00143E0C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80147010 00143E10*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*80147014 00143E14*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E04E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80147018 00143E18*/ PPC::Runtime::ASM::bl(fn_80138C90);
/*8014701C 00143E1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80147020 00143E20*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80147024 00143E24*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
/*80147028 00143E28*/ PPC::Runtime::ASM::bl(fn_80146800);
RUNTIME_PPC_JUMP_LABEL(.L_8014702C, 0x8014702C) //this is a jump label
/*8014702C 00143E2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80147030 00143E30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80147034 00143E34*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80147038 00143E38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014703C 00143E3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80147040 00143E40*/ PPC::Runtime::ASM::blr();
}