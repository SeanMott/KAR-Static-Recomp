//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802501D4.hpp"
#include "fn_80250400.hpp"



void fn_8025FD00(PPC::Runtime::GCContext* context)
{
/*8025FD00 0025CB00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025FD04 0025CB04*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025FD08 0025CB08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025FD0C 0025CB0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025FD10 0025CB10*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025FD14 0025CB14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025FD18 0025CB18*/ PPC::Runtime::ASM::bl(fn_802501D4);
/*8025FD1C 0025CB1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025FD20 0025CB20*/ PPC::Runtime::ASM::bl(fn_80250400);
/*8025FD24 0025CB24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025FD28 0025CB28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025FD2C 0025CB2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025FD30 0025CB30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025FD34 0025CB34*/ PPC::Runtime::ASM::blr();
}