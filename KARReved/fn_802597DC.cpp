//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025968C.hpp"
#include "fn_8025968C.hpp"
#include "fn_80255438.hpp"



void fn_802597DC(PPC::Runtime::GCContext* context)
{
/*802597DC 002565DC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802597E0 002565E0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802597E4 002565E4*/ PPC::Runtime::ASM::lis(context->r4, fn_8025968C @ Get_MemoryOffset_HighBit);
/*802597E8 002565E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802597EC 002565EC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025968C @ Get_MemoryOffset_LowBit);
/*802597F0 002565F0*/ PPC::Runtime::ASM::bl(fn_80255438);
/*802597F4 002565F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802597F8 002565F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802597FC 002565FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80259800 00256600*/ PPC::Runtime::ASM::blr();
}