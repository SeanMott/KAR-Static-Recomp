//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80214B88.hpp"
#include "fn_80214C5C.hpp"



void fn_80214A9C(PPC::Runtime::GCContext* context)
{
/*80214A9C 0021189C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80214AA0 002118A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80214AA4 002118A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214AA8 002118A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r3));
/*80214AAC 002118AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80214AB0 002118B0*/ PPC::Runtime::ASM::bne(.L_80214ABC);
/*80214AB4 002118B4*/ PPC::Runtime::ASM::bl(fn_80214B88);
/*80214AB8 002118B8*/ PPC::Runtime::ASM::b(.L_80214AC0);
RUNTIME_PPC_JUMP_LABEL(.L_80214ABC, 0x80214ABC) //this is a jump label
/*80214ABC 002118BC*/ PPC::Runtime::ASM::bl(fn_80214C5C);
RUNTIME_PPC_JUMP_LABEL(.L_80214AC0, 0x80214AC0) //this is a jump label
/*80214AC0 002118C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80214AC4 002118C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80214AC8 002118C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80214ACC 002118CC*/ PPC::Runtime::ASM::blr();
}