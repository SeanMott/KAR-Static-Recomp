//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DA1AC.hpp"
#include "fn_801EB898.hpp"



void fn_801EDC40(PPC::Runtime::GCContext* context)
{
/*801EDC40 001EAA40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EDC44 001EAA44*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EDC48 001EAA48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EDC4C 001EAA4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EDC50 001EAA50*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EDC54 001EAA54*/ PPC::Runtime::ASM::bl(fn_801DA1AC);
/*801EDC58 001EAA58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EDC5C 001EAA5C*/ PPC::Runtime::ASM::bl(fn_801EB898);
/*801EDC60 001EAA60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EDC64 001EAA64*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EDC68 001EAA68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EDC6C 001EAA6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EDC70 001EAA70*/ PPC::Runtime::ASM::blr();
}