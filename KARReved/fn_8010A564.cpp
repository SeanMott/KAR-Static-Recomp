//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EA084.hpp"



void fn_8010A564(PPC::Runtime::GCContext* context)
{
/*8010A564 00107364*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010A568 00107368*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010A56C 0010736C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010A570 00107370*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010A574 00107374*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8010A578 00107378*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010A57C 0010737C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*8010A580 00107380*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8010A584 00107384*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*8010A588 00107388*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
/*8010A58C 0010738C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8010A590 00107390*/ PPC::Runtime::ASM::bgt(.L_8010A5C4);
/*8010A594 00107394*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x118);
/*8010A598 00107398*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010A59C 0010739C*/ PPC::Runtime::ASM::bl(fn_800EA084);
/*8010A5A0 001073A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8010A5A4 001073A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010A5A8 001073A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8010A5AC 001073AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8010A5B0 001073B0*/ PPC::Runtime::ASM::subf(context->r3, context->r3, context->r0);
/*8010A5B4 001073B4*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*8010A5B8 001073B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8010A5BC 001073BC*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*8010A5C0 001073C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8010A5C4, 0x8010A5C4) //this is a jump label
/*8010A5C4 001073C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010A5C8 001073C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010A5CC 001073CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8010A5D0 001073D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010A5D4 001073D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010A5D8 001073D8*/ PPC::Runtime::ASM::blr();
}