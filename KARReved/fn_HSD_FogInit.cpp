//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GXGetViewportv.hpp"



void fn_HSD_FogInit(PPC::Runtime::GCContext* context)
{
/*8041B450 00418250*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8041B454 00418254*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041B458 00418258*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8041B45C 0041825C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/* 8041B460 00418260  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8041B464 00418264*/ PPC::Runtime::ASM::beq(.L_8041B4D0);
/*8041B468 00418268*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8041B46C 0041826C*/ PPC::Runtime::ASM::beq(.L_8041B494);
/*8041B470 00418270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8041B474 00418274*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8041B478 00418278*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8041B47C 0041827C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8041B480 00418280*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8041B484 00418284*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8041B488 00418288*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8041B48C 0041828C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8041B490 00418290*/ PPC::Runtime::ASM::b(.L_8041B4C8);
RUNTIME_PPC_JUMP_LABEL(.L_8041B494, 0x8041B494) //this is a jump label
/*8041B494 00418294*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8041B498 00418298*/ PPC::Runtime::ASM::bl(fn_GXGetViewportv);
/*8041B49C 0041829C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8041B4A0 004182A0*/ PPC::Runtime::ASM::li(context->r0, 0xff);
/*8041B4A4 004182A4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8041B4A8 004182A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041B4AC 004182AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8041B4B0 004182B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041B4B4 004182B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8041B4B8 004182B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8041B4BC 004182BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r31));
/*8041B4C0 004182C0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r31));
/*8041B4C4 004182C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8041B4C8, 0x8041B4C8) //this is a jump label
/*8041B4C8 004182C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041B4CC 004182CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8041B4D0, 0x8041B4D0) //this is a jump label
/*8041B4D0 004182D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8041B4D4 004182D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8041B4D8 004182D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041B4DC 004182DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8041B4E0 004182E0*/ PPC::Runtime::ASM::blr();
}