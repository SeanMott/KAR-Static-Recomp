//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80131264.hpp"
#include "fn_80059520.hpp"



void fn_80167580(PPC::Runtime::GCContext* context)
{
/*80167580 00164380*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80167584 00164384*/ PPC::Runtime::ASM::mflr(context->r0);
/*80167588 00164388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016758C 0016438C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80167590 00164390*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80167594 00164394*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80167598 00164398*/ PPC::Runtime::ASM::bl(fn_80131264);
/*8016759C 0016439C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804AC878 @ Get_MemoryOffset_HighBit);
/*801675A0 001643A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801675A4 001643A4*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804AC878 @ Get_MemoryOffset_LowBit);
/*801675A8 001643A8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801675AC 001643AC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xa48);
/*801675B0 001643B0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801675B4 001643B4*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801675B8 001643B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801675BC 001643BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801675C0 001643C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801675C4 001643C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801675C8 001643C8*/ PPC::Runtime::ASM::blr();
}