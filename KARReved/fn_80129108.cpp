//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112050.hpp"
#include "fn_80059520.hpp"



void fn_80129108(PPC::Runtime::GCContext* context)
{
/*80129108 00125F08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012910C 00125F0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80129110 00125F10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80129114 00125F14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80129118 00125F18*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012911C 00125F1C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80129120 00125F20*/ PPC::Runtime::ASM::bl(fn_80112050);
/*80129124 00125F24*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1104 @ Get_MemoryOffset_HighBit);
/*80129128 00125F28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8012912C 00125F2C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1104 @ Get_MemoryOffset_LowBit);
/*80129130 00125F30*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80129134 00125F34*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x64c);
/*80129138 00125F38*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8012913C 00125F3C*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80129140 00125F40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80129144 00125F44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80129148 00125F48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012914C 00125F4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80129150 00125F50*/ PPC::Runtime::ASM::blr();
}