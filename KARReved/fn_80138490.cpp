//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8013F310.hpp"



void fn_80138490(PPC::Runtime::GCContext* context)
{
/*80138490 00135290*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80138494 00135294*/ PPC::Runtime::ASM::mflr(context->r0);
/*80138498 00135298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013849C 0013529C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*801384A0 001352A0*/ PPC::Runtime::ASM::lis(context->r3, StructValues_94_2_To_19 @ Get_MemoryOffset_HighBit);
/*801384A4 001352A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801384A8 001352A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructValues_94_2_To_19 @ Get_MemoryOffset_LowBit);
/*801384AC 001352AC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*801384B0 001352B0*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*801384B4 001352B4*/ PPC::Runtime::ASM::bl(fn_8013F310);
/*801384B8 001352B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801384BC 001352BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801384C0 001352C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801384C4 001352C4*/ PPC::Runtime::ASM::blr();
}