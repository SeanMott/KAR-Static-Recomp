//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80175E70(PPC::Runtime::GCContext* context)
{
/*80175E70 00172C70*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80175E74 00172C74*/ PPC::Runtime::ASM::mflr(context->r0);
/*80175E78 00172C78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80175E7C 00172C7C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80175E80 00172C80*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80175E84 00172C84*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80175E88 00172C88*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80175E8C 00172C8C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80175E90 00172C90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcd8, context->r3));
/*80175E94 00172C94*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80175E98 00172C98*/ PPC::Runtime::ASM::beq(.L_80175EC4);
/*80175E9C 00172C9C*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80175EA0 00172CA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80175EA4 00172CA4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x78);
/*80175EA8 00172CA8*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*80175EAC 00172CAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r4));
/*80175EB0 00172CB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r4));
/*80175EB4 00172CB4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80175EB8 00172CB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80175EBC 00172CBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r4));
/*80175EC0 00172CC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80175EC4, 0x80175EC4) //this is a jump label
/*80175EC4 00172CC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80175EC8 00172CC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80175ECC 00172CCC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80175ED0 00172CD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80175ED4 00172CD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80175ED8 00172CD8*/ PPC::Runtime::ASM::blr();
}