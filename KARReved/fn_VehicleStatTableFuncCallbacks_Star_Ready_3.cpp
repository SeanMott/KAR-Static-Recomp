//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801ED43C.hpp"
#include "fn_801E1DC0.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_Ready_3(PPC::Runtime::GCContext* context)
{
/*801EED00 001EBB00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EED04 001EBB04*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EED08 001EBB08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EED0C 001EBB0C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EED10 001EBB10*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EED14 001EBB14*/ PPC::Runtime::ASM::bl(fn_801ED43C);
/*801EED18 001EBB18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EED1C 001EBB1C*/ PPC::Runtime::ASM::bl(fn_801E1DC0);
/*801EED20 001EBB20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EED24 001EBB24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EED28 001EBB28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EED2C 001EBB2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EED30 001EBB30*/ PPC::Runtime::ASM::blr();
}