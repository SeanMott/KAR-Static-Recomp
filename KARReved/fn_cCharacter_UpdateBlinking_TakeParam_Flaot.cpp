//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80245ED0.hpp"



void fn_cCharacter_UpdateBlinking_TakeParam_Flaot(PPC::Runtime::GCContext* context)
{
/*80221D4C 0021EB4C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80221D50 0021EB50*/ PPC::Runtime::ASM::mflr(context->r0);
/*80221D54 0021EB54*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221D58 0021EB58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r3));
/*80221D5C 0021EB5C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80221D60 0021EB60*/ PPC::Runtime::ASM::beq(.L_80221D68);
/*80221D64 0021EB64*/ PPC::Runtime::ASM::bl(fn_80245ED0);
RUNTIME_PPC_JUMP_LABEL(.L_80221D68, 0x80221D68) //this is a jump label
/*80221D68 0021EB68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80221D6C 0021EB6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80221D70 0021EB70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80221D74 0021EB74*/ PPC::Runtime::ASM::blr();
}