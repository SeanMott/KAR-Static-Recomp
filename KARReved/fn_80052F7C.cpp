//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005299C.hpp"



void fn_80052F7C(PPC::Runtime::GCContext* context)
{
/*80052F7C 0004FD7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80052F80 0004FD80*/ PPC::Runtime::ASM::mflr(context->r0);
/*80052F84 0004FD84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80052F88 0004FD88*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80052F8C 0004FD8C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80052F90 0004FD90*/ PPC::Runtime::ASM::bl(fn_8040BCA0);
/*80052F94 0004FD94*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80052F98 0004FD98*/ PPC::Runtime::ASM::beq(.L_80052FA4);
/*80052F9C 0004FD9C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80052FA0 0004FDA0*/ PPC::Runtime::ASM::bl(fn_8005299C);
RUNTIME_PPC_JUMP_LABEL(.L_80052FA4, 0x80052FA4) //this is a jump label
/*80052FA4 0004FDA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80052FA8 0004FDA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80052FAC 0004FDAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80052FB0 0004FDB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80052FB4 0004FDB4*/ PPC::Runtime::ASM::blr();
}