//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE8DC.hpp"
#include "fn_8020F75C.hpp"



void fn_8020F6A8(PPC::Runtime::GCContext* context)
{
/*8020F6A8 0020C4A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8020F6AC 0020C4AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020F6B0 0020C4B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2518 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F6B4 0020C4B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F6B8 0020C4B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F6BC 0020C4BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020F6C0 0020C4C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*8020F6C4 0020C4C4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8020F6C8 0020C4C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8020F6CC 0020C4CC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8020F6D0 0020C4D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r4));
/*8020F6D4 0020C4D4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8020F6D8 0020C4D8*/ PPC::Runtime::ASM::bge(.L_8020F6FC);
/*8020F6DC 0020C4DC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2524 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020F6E0 0020C4E0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8020F6E4 0020C4E4*/ PPC::Runtime::ASM::bl(fn_801FE8DC);
/*8020F6E8 0020C4E8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8020F6EC 0020C4EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58c, context->r31));
/*8020F6F0 0020C4F0*/ PPC::Runtime::ASM::beq(.L_8020F6FC);
/*8020F6F4 0020C4F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020F6F8 0020C4F8*/ PPC::Runtime::ASM::bl(fn_8020F75C);
RUNTIME_PPC_JUMP_LABEL(.L_8020F6FC, 0x8020F6FC) //this is a jump label
/*8020F6FC 0020C4FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020F700 0020C500*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8020F704 0020C504*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020F708 0020C508*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020F70C 0020C50C*/ PPC::Runtime::ASM::blr();
}