//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80485314.hpp"



void fn_TRKNubWelcome(PPC::Runtime::GCContext* context)
{
/*804892D0 004860D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804892D4 004860D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*804892D8 004860D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80535238 @ Get_MemoryOffset_HighBit);
/*804892DC 004860DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804892E0 004860E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80535238 @ Get_MemoryOffset_LowBit);
/*804892E4 004860E4*/ PPC::Runtime::ASM::bl(fn_80485314);
/*804892E8 004860E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804892EC 004860EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804892F0 004860F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804892F4 004860F4*/ PPC::Runtime::ASM::blr();
}