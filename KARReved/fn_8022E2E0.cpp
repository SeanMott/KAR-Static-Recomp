//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_8022E2E0(PPC::Runtime::GCContext* context)
{
/*8022E2E0 0022B0E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8022E2E4 0022B0E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8022E2E8 0022B0E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022E2EC 0022B0EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022E2F0 0022B0F0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8022E2F4 0022B0F4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8022E2F8 0022B0F8*/ PPC::Runtime::ASM::blt(.L_8022E314);
/*8022E2FC 0022B0FC*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*8022E300 0022B100*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*8022E304 0022B104*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*8022E308 0022B108*/ PPC::Runtime::ASM::li(context->r4, 0xf4);
/*8022E30C 0022B10C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*8022E310 0022B110*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8022E314, 0x8022E314) //this is a jump label
/*8022E314 0022B114*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8022E318 0022B118*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*8022E31C 0022B11C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x854, context->r3));
/*8022E320 0022B120*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022E324 0022B124*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r0, 31);
/*8022E328 0022B128*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022E32C 0022B12C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022E330 0022B130*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022E334 0022B134*/ PPC::Runtime::ASM::blr();
}