//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_IPClearConfigError(PPC::Runtime::GCContext* context)
{
/*8046F1F4 0046BFF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046F1F8 0046BFF8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8046F1FC 0046BFFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046F200 0046C000*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*8046F204 0046C004*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046F208 0046C008*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8046F20C 0046C00C*/ PPC::Runtime::ASM::beq(.L_8046F218);
/*8046F210 0046C010*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8046F214 0046C014*/ PPC::Runtime::ASM::b(.L_8046F220);
RUNTIME_PPC_JUMP_LABEL(.L_8046F218, 0x8046F218) //this is a jump label
/*8046F218 0046C018*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*8046F21C 0046C01C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8046F220, 0x8046F220) //this is a jump label
/*8046F220 0046C020*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8046F224 0046C024*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8046F228 0046C028*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046F22C 0046C02C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8046F230 0046C030*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8046F234 0046C034*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8046F238 0046C038*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8046F23C 0046C03C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8046F240 0046C040*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8046F244 0046C044*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*8046F248 0046C048*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046F24C 0046C04C*/ PPC::Runtime::ASM::blr();
}