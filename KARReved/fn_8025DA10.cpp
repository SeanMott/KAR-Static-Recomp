//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025D8C0.hpp"
#include "fn_8025D8C0.hpp"
#include "fn_80255438.hpp"



void fn_8025DA10(PPC::Runtime::GCContext* context)
{
/*8025DA10 0025A810*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025DA14 0025A814*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025DA18 0025A818*/ PPC::Runtime::ASM::lis(context->r4, fn_8025D8C0 @ Get_MemoryOffset_HighBit);
/*8025DA1C 0025A81C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025DA20 0025A820*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025D8C0 @ Get_MemoryOffset_LowBit);
/*8025DA24 0025A824*/ PPC::Runtime::ASM::bl(fn_80255438);
/*8025DA28 0025A828*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025DA2C 0025A82C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025DA30 0025A830*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025DA34 0025A834*/ PPC::Runtime::ASM::blr();
}