//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E7154.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_RailChange_2(PPC::Runtime::GCContext* context)
{
/*801F0A34 001ED834*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F0A38 001ED838*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F0A3C 001ED83C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0A40 001ED840*/ PPC::Runtime::ASM::bl(fn_801E7154);
/*801F0A44 001ED844*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F0A48 001ED848*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F0A4C 001ED84C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F0A50 001ED850*/ PPC::Runtime::ASM::blr();
}