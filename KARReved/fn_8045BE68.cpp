//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8045B848.hpp"
#include "fn_803D9AF4.hpp"



void fn_8045BE68(PPC::Runtime::GCContext* context)
{
/*8045BE68 00458C68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8045BE6C 00458C6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045BE70 00458C70*/ PPC::Runtime::ASM::lis(context->r3, lbl_805B4698 @ Get_MemoryOffset_HighBit);
/*8045BE74 00458C74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045BE78 00458C78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_805B4698 @ Get_MemoryOffset_LowBit);
/*8045BE7C 00458C7C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8045BE80 00458C80*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*8045BE84 00458C84*/ PPC::Runtime::ASM::bl(fn_8045B848);
/*8045BE88 00458C88*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8045BE8C 00458C8C*/ PPC::Runtime::ASM::beq(.L_8045BE98);
/*8045BE90 00458C90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8045BE94 00458C94*/ PPC::Runtime::ASM::bl(fn_803D9AF4);
RUNTIME_PPC_JUMP_LABEL(.L_8045BE98, 0x8045BE98) //this is a jump label
/*8045BE98 00458C98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045BE9C 00458C9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8045BEA0 00458CA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045BEA4 00458CA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8045BEA8 00458CA8*/ PPC::Runtime::ASM::blr();
}