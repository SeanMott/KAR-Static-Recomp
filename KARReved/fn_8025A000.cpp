//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80259EB0.hpp"
#include "fn_80259EB0.hpp"
#include "fn_80255438.hpp"



void fn_8025A000(PPC::Runtime::GCContext* context)
{
/*8025A000 00256E00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025A004 00256E04*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025A008 00256E08*/ PPC::Runtime::ASM::lis(context->r4, fn_80259EB0 @ Get_MemoryOffset_HighBit);
/*8025A00C 00256E0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A010 00256E10*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80259EB0 @ Get_MemoryOffset_LowBit);
/*8025A014 00256E14*/ PPC::Runtime::ASM::bl(fn_80255438);
/*8025A018 00256E18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025A01C 00256E1C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025A020 00256E20*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025A024 00256E24*/ PPC::Runtime::ASM::blr();
}