//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019BF70.hpp"
#include "fn_8019BFB4.hpp"



void fn_8019B690(PPC::Runtime::GCContext* context)
{
/*8019B690 00198490*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019B694 00198494*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019B698 00198498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B69C 0019849C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B6A0 001984A0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8019B6A4 001984A4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B6A8 001984A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r5));
/*8019B6AC 001984AC*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8019B6B0 001984B0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/* 8019B6B4 001984B4  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*8019B6B8 001984B8*/ PPC::Runtime::ASM::extrwi(context->r4, context->r4, 8, 22);
/*8019B6BC 001984BC*/ PPC::Runtime::ASM::extrwi(context->r5, context->r5, 17, 14);
/*8019B6C0 001984C0*/ PPC::Runtime::ASM::beq(.L_8019B6CC);
/*8019B6C4 001984C4*/ PPC::Runtime::ASM::bl(fn_8019BF70);
/*8019B6C8 001984C8*/ PPC::Runtime::ASM::b(.L_8019B6D0);
RUNTIME_PPC_JUMP_LABEL(.L_8019B6CC, 0x8019B6CC) //this is a jump label
/*8019B6CC 001984CC*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
RUNTIME_PPC_JUMP_LABEL(.L_8019B6D0, 0x8019B6D0) //this is a jump label
/*8019B6D0 001984D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B6D4 001984D4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8019B6D8 001984D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B6DC 001984DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B6E0 001984E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B6E4 001984E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019B6E8 001984E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019B6EC 001984EC*/ PPC::Runtime::ASM::blr();
}