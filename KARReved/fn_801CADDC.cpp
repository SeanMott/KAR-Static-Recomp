//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E098C.hpp"
#include "fn_801D6668.hpp"
#include "fn_801C73D0.hpp"



void fn_801CADDC(PPC::Runtime::GCContext* context)
{
/*801CADDC 001C7BDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801CADE0 001C7BE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CADE4 001C7BE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CADE8 001C7BE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CADEC 001C7BEC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CADF0 001C7BF0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x94c);
/*801CADF4 001C7BF4*/ PPC::Runtime::ASM::bl(fn_801E098C);
/*801CADF8 001C7BF8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CADFC 001C7BFC*/ PPC::Runtime::ASM::bl(fn_801D6668);
/*801CAE00 001C7C00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801CAE04 001C7C04*/ PPC::Runtime::ASM::bl(fn_801C73D0);
/*801CAE08 001C7C08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801CAE0C 001C7C0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CAE10 001C7C10*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CAE14 001C7C14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801CAE18 001C7C18*/ PPC::Runtime::ASM::blr();
}