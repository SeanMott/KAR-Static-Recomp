//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802593B8.hpp"
#include "fn_802593B8.hpp"
#include "fn_80255438.hpp"



void fn_80259508(PPC::Runtime::GCContext* context)
{
/*80259508 00256308*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025950C 0025630C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80259510 00256310*/ PPC::Runtime::ASM::lis(context->r4, fn_802593B8 @ Get_MemoryOffset_HighBit);
/*80259514 00256314*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259518 00256318*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802593B8 @ Get_MemoryOffset_LowBit);
/*8025951C 0025631C*/ PPC::Runtime::ASM::bl(fn_80255438);
/*80259520 00256320*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259524 00256324*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80259528 00256328*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025952C 0025632C*/ PPC::Runtime::ASM::blr();
}