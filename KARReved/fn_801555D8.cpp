//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131214.hpp"
#include "fn_80059520.hpp"



void fn_801555D8(PPC::Runtime::GCContext* context)
{
/*801555D8 001523D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801555DC 001523DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801555E0 001523E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801555E4 001523E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801555E8 001523E8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801555EC 001523EC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801555F0 001523F0*/ PPC::Runtime::ASM::bl(fn_80131214);
/*801555F4 001523F4*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1231 @ Get_MemoryOffset_HighBit);
/*801555F8 001523F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801555FC 001523FC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1231 @ Get_MemoryOffset_LowBit);
/*80155600 00152400*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80155604 00152404*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x664);
/*80155608 00152408*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8015560C 0015240C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80155610 00152410*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80155614 00152414*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80155618 00152418*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015561C 0015241C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80155620 00152420*/ PPC::Runtime::ASM::blr();
}