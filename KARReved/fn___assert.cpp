//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSReport.hpp"
#include "fn_HSD_Panic.hpp"



void fn___assert(PPC::Runtime::GCContext* context)
{
/*804284B8 004252B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804284BC 004252BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*804284C0 004252C0*/ PPC::Runtime::ASM::lis(context->r6, lbl_80504D70 @ Get_MemoryOffset_HighBit);
/*804284C4 004252C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804284C8 004252C8*/ PPC::Runtime::ASM::addi(context->r0, context->r6, lbl_80504D70 @ Get_MemoryOffset_LowBit);
/*804284CC 004252CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804284D0 004252D0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*804284D4 004252D4*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*804284D8 004252D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804284DC 004252DC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*804284E0 004252E0*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*804284E4 004252E4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*804284E8 004252E8*/ PPC::Runtime::ASM::bl(OSReport);
/*804284EC 004252EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*804284F0 004252F0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*804284F4 004252F4*/ PPC::Runtime::ASM::li(context->r5, AllZeros_41 @ Get_MemoryOffset_SDA21);
/*804284F8 004252F8*/ PPC::Runtime::ASM::bl(fn_HSD_Panic);
/*804284FC 004252FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80428500 00425300*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80428504 00425304*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80428508 00425308*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8042850C 0042530C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80428510 00425310*/ PPC::Runtime::ASM::blr();
}