//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801EE158.hpp"
#include "fn_801EDD00.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_Ready_4(PPC::Runtime::GCContext* context)
{
/*801EED34 001EBB34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EED38 001EBB38*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EED3C 001EBB3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EED40 001EBB40*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EED44 001EBB44*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EED48 001EBB48*/ PPC::Runtime::ASM::bl(fn_801EE158);
/*801EED4C 001EBB4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EED50 001EBB50*/ PPC::Runtime::ASM::bl(fn_801EDD00);
/*801EED54 001EBB54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EED58 001EBB58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EED5C 001EBB5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EED60 001EBB60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EED64 001EBB64*/ PPC::Runtime::ASM::blr();
}