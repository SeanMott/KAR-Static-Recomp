//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F8300.hpp"
#include "fn_801F8518.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_Ready_4(PPC::Runtime::GCContext* context)
{
/*801F8F44 001F5D44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F8F48 001F5D48*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F8F4C 001F5D4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8F50 001F5D50*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8F54 001F5D54*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F8F58 001F5D58*/ PPC::Runtime::ASM::bl(fn_801F8300);
/*801F8F5C 001F5D5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8F60 001F5D60*/ PPC::Runtime::ASM::bl(fn_801F8518);
/*801F8F64 001F5D64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8F68 001F5D68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8F6C 001F5D6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F8F70 001F5D70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F8F74 001F5D74*/ PPC::Runtime::ASM::blr();
}