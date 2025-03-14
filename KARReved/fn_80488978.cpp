//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80488978(PPC::Runtime::GCContext* context)
{
/*80488978 00485778*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8048897C 0048577C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80488980 00485780*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80488984 00485784*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80488988 00485788*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8048898C 0048578C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80488990 00485790*/ PPC::Runtime::ASM::lis(context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80488994 00485794*/ PPC::Runtime::ASM::addi(context->r4, context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80488998 00485798*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8048899C 0048579C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804889A0 004857A0*/ PPC::Runtime::ASM::bne(.L_804889A8);
/*804889A4 004857A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_804889A8, 0x804889A8) //this is a jump label
/*804889A8 004857A8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804889AC 004857AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804889B0 004857B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804889B4 004857B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804889B8 004857B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804889BC 004857BC*/ PPC::Runtime::ASM::blr();
}